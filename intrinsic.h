/*!
 \verbatim
 ******************************************************************************
 Copyright (c) Infineon Technologies AG 2010.
 ******************************************************************************
 Infineon Technologies
 Am Campeon 1-12
 85579 Neubiberg
 Germany
 Tel.   : 0 800 951 951 951 (Germany)
 E-mail : support@infineon.com
 Website: http://www.infineon.com/support
 ******************************************************************************
 \endverbatim
 ******************************************************************************
 */
/*!
 ******************************************************************************
 \file     intrinsic.h
 \brief    Implementation and Declaration of intrinsic functions
 \author   Martin Schrape
 \version  0.2
 \date     2010-03-18
 ******************************************************************************
 */
#ifndef INTRINSIC_H_
#define INTRINSIC_H_

/* To define number of interrupt sources
 * The number of of arbitration cycle depends on the number of interrupt
 * sources that are used. The interrupt latency can be reduced when the
 * arbitration cycle, i.e. the number of sources, are reduced
 * \code __mtcr(ICR, INTERRUPT_SOURCES_63);
 */
#define INTERRUPT_SOURCES_255 (0<<24)
#define INTERRUPT_SOURCES_63 (1<<24)
#define INTERRUPT_SOURCES_15 (2<<24)
#define INTERRUPT_SOURCES_3 (3<<24)

#ifndef NDEBUG
#if defined(__CTC__)
#define INITIO(port)    {port##_IOCR0.U = 0x80808080; \
    port##_IOCR4.U = 0x80808080; \
    port##_OMR.U = 0xFF;}
#define SETIO(port,pin)   port##_OMR.U = 1<<(pin)
#define RESETIO(port,pin) SETIO(port,(pin)+16)
#define TOGGLEIO(port,pin) port##_OMR.U = (0x10001)<<(pin)
#elif defined(__CPCP__)
#define SETIO(port,pin)  __asm(".include 'regtc1797.def'     \n\t"  \
    "ldl.iu r0,@HI(1<<" #pin ")   \n\t"  \
    "ldl.il r0,@LO(1<<" #pin ")   \n\t"  \
    "ldl.iu r1,@HI(" #port "_OMR) \n\t"  \
    "ldl.il r1,@LO(" #port "_OMR) \n\t"  \
    "st.if  [r1],0,size=32"      \
  :::"r1","r0");
#define RESETIO(port,pin) SETIO(port,pin+16)
#define TOGGLEIO(port,pin)  __asm(".include 'regtc1797.def'     \n\t"  \
    "ldl.iu r0,@HI(0x10001<<" #pin ")   \n\t"  \
    "ldl.il r0,@LO(0x10001<<" #pin ")   \n\t"  \
    "ldl.iu r1,@HI(" #port "_OMR) \n\t"  \
    "ldl.il r1,@LO(" #port "_OMR) \n\t"  \
    "st.if  [r1],0,size=32"      \
  :::"r1","r0");
#endif
#else
#define INITIO(port)     ((void) 0)
#define SETIO(port,pin)   ((void) 0)
#define RESETIO(port,pin) ((void) 0)
#define TOGGLEIO(port,pin) ((void) 0)
#endif


/*
 * __endinit endinit
 * A fast __endinit_clear implementation
 * After cstart WDT_CON0.U = 0xFFFC0003
 * WDT_CON1.U = 0x00000008
 */
//! extern declaration of _endinit_clear(void) implemented in cstart.c
extern void _endinit_clear(void);

//! extern declaration of _endinit_set(void) implemented in cstart.c
extern void _endinit_set(void);

// default after power on
#define ENDINIT_DEFAULT  (0xFFFC<<16|0x00<<8|0xF<<4|0x2<<2|1)

//! Fast implementation of to clear the endinit bit
inline void endinit_clear(int x) //!< [in] e.g. ENDINIT_DEFAULT
{
    WDT_CON0.U = x;
    x &= -16L;
    x |= 2;
    WDT_CON0.U = x;
    WDT_CON0.U; // dummy read required;
}

//! Fast implementation of to set the endinit bit
inline void endinit_set(int x) //!< [in] e.g. ENDINIT_DEFAULT
{
    x -= 1;
    WDT_CON0.U = x;
    x &= -16L;
    x |= 3;
    WDT_CON0.U = x;
}

//! Find the maximum value in an uint32_t array

//! Insert loop executing NOP instruction cnt times
inline void nops(void *cnt) {
#if defined(__TASKING__)
    __asm(" nop16\n"
            " nop16\n"
            " loop %0,*-4"
            ::"a"(cnt));
#elif defined(__GNU__)
    __asm("0: nop16\n"
            " nop16\n"
            " loop %%0,0b"
            ::"a"(cnt));
#endif
}



#endif /* INTRINSIC_H_ */
