//****************************************************************************
// @Module        Parallel Ports
// @Filename      IO.c
// @Project       TC1728_OS.dav
//----------------------------------------------------------------------------
// @Controller    Infineon TC1728
//
// @Compiler      Tasking 3.5r1
//
// @Codegenerator 1.0
//
// @Description   This file contains functions that use the IO module.
//
//----------------------------------------------------------------------------
// @Date          8/26/2015 16:16:23
//
//****************************************************************************

// USER CODE BEGIN (IO_General,1)

// USER CODE END



//****************************************************************************
// @Project Includes
//****************************************************************************

#include "MAIN.h"

// USER CODE BEGIN (IO_General,2)

// USER CODE END


//****************************************************************************
// @Macros
//****************************************************************************

// USER CODE BEGIN (IO_General,3)

// USER CODE END


//****************************************************************************
// @Defines
//****************************************************************************

// USER CODE BEGIN (IO_General,4)

// USER CODE END


//****************************************************************************
// @Typedefs
//****************************************************************************

// USER CODE BEGIN (IO_General,5)

// USER CODE END


//****************************************************************************
// @Imported Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,6)

// USER CODE END


//****************************************************************************
// @Global Variables
//****************************************************************************

// USER CODE BEGIN (IO_General,7)

// USER CODE END


//****************************************************************************
// @External Prototypes
//****************************************************************************

// USER CODE BEGIN (IO_General,8)

// USER CODE END


//****************************************************************************
// @Prototypes Of Local Functions
//****************************************************************************

// USER CODE BEGIN (IO_General,9)

// USER CODE END


//****************************************************************************
// @Function      void IO_vInit(void) 
//
//----------------------------------------------------------------------------
// @Description   This is the initialization function of the IO function 
//                library. It is assumed that the SFRs used by this library 
//                are in their reset state. 
//                Note:
//                Alternate outputs are set in their own initialization 
//                function.
//
//----------------------------------------------------------------------------
// @Returnvalue   None
//
//----------------------------------------------------------------------------
// @Parameters    None
//
//----------------------------------------------------------------------------
// @Date          8/26/2015
//
//****************************************************************************

// USER CODE BEGIN (IO_Function,1)

// USER CODE END

void IO_vInit(void)
{
  // USER CODE BEGIN (IO_Function,2)

  // USER CODE END


  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P0:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P0 is used

  P0_OMR         =  0x00000000;  // load data output register
  MAIN_vResetENDINIT();
  P0_PDR0        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  MAIN_vResetENDINIT();
  P0_PDR1        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P0_IOCR0       =  0x20202020;  // load port control register 0
  P0_IOCR4       =  0x20202020;  // load port control register 4
  P0_IOCR8       =  0x20202020;  // load port control register 8
  P0_IOCR12      =  0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P1:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P1 is used

  P1_OMR         =  0x00000000;  // load data output register
  MAIN_vResetENDINIT();
  P1_PDR0        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  MAIN_vResetENDINIT();
  P1_PDR1        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P1_IOCR0       =  0x20202020;  // load port control register 0
  P1_IOCR4       =  0x20202020;  // load port control register 4
  P1_IOCR8       =  0x20202020;  // load port control register 8
  P1_IOCR12      =  0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P2:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P2 is used

  P2_OMR         =  0x00000000;  // load data output register
  MAIN_vResetENDINIT();
  P2_PDR0        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  MAIN_vResetENDINIT();
  P2_PDR1        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P2_IOCR0       =  0x20202020;  // load port control register 0
  P2_IOCR4       =  0x20202020;  // load port control register 4
  P2_IOCR8       =  0x20202020;  // load port control register 8
  P2_IOCR12      =  0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P3:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P3 is used

  P3_OMR         =  0x00000000;  // load data output register
  MAIN_vResetENDINIT();
  P3_PDR0        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  MAIN_vResetENDINIT();
  P3_PDR1        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P3_IOCR0       =  0x20202020;  // load port control register 0
  P3_IOCR4       =  0x20202020;  // load port control register 4
  P3_IOCR8       =  0x20202020;  // load port control register 8
  P3_IOCR12      =  0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P4:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P4 is used

  P4_OMR         =  0x00000000;  // load data output register
  MAIN_vResetENDINIT();
  P4_PDR0        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P4_IOCR0       =  0x20202020;  // load port control register 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P5:
  ///  -----------------------------------------------------------------------
  ///  P5.0:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - output driver characteristic: Strong driver soft edge
  ///  P5.1:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - output driver characteristic: Strong driver soft edge
  ///  P5.2:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - output driver characteristic: Strong driver soft edge
  ///  P5.3:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - output driver characteristic: Strong driver soft edge
  ///  P5.4:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - output driver characteristic: Strong driver soft edge
  ///  P5.5:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - output driver characteristic: Strong driver soft edge
  ///  P5.6:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - output driver characteristic: Strong driver soft edge
  ///  P5.7:
  ///  - is used as general purpose output
  ///  - push/pull output is selected
  ///  - the pin status is high level
  ///  - output driver characteristic: Strong driver soft edge

  P5_OMR         =  0x000000FF;  // load data output register
  MAIN_vResetENDINIT();
  P5_PDR0        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  MAIN_vResetENDINIT();
  P5_PDR1        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P5_IOCR0       =  0x80808080;  // load port control register 0
  P5_IOCR4       =  0x80808080;  // load port control register 4
  P5_IOCR8       =  0x20202020;  // load port control register 8
  P5_IOCR12      =  0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P6:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P6 is used

  P6_OMR         =  0x00000000;  // load data output register
  MAIN_vResetENDINIT();
  P6_PDR0        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P6_IOCR0       =  0x20202020;  // load port control register 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P8:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P8 is used

  P8_OMR         =  0x00000000;  // load data output register
  MAIN_vResetENDINIT();
  P8_PDR0        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  MAIN_vResetENDINIT();
  P8_PDR1        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P8_IOCR0       =  0x20202020;  // load port control register 0
  P8_IOCR4       =  0x20202020;  // load port control register 4
  P8_IOCR8       =  0x20202020;  // load port control register 8
  P8_IOCR12      =  0x20202020;  // load port control register 12

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P9:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P9 is used

  P9_OMR         =  0x00000000;  // load data output register
  MAIN_vResetENDINIT();
  P9_PDR0        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  MAIN_vResetENDINIT();
  P9_PDR1        =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P9_IOCR0       =  0x20202020;  // load port control register 0
  P9_IOCR4       =  0x20202020;  // load port control register 4

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P10:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P10 is used

  P10_OMR        =  0x00000000;  // load data output register
  MAIN_vResetENDINIT();
  P10_PDR0       =  0x00000000;  // load pad driver mode register
  MAIN_vSetENDINIT();
  P10_IOCR0      =  0x20202020;  // load port control register 0

  ///  -----------------------------------------------------------------------
  ///  Configuration of Port P11:
  ///  -----------------------------------------------------------------------
  ///  - no pin of port P11 is used

  P11_IOCR0      =  0x20202020;  // load port control register 0
  P11_IOCR4      =  0x20202020;  // load port control register 4
  P11_IOCR8      =  0x20202020;  // load port control register 8
  P11_IOCR12     =  0x20202020;  // load port control register 12
  P11_PDISC      =  0x0000FFFF;  // load Pin Function Decision Control 
                                 // Register 11


  // USER CODE BEGIN (IO_Function,3)

  // USER CODE END

} //  End of function IO_vInit




// USER CODE BEGIN (IO_General,10)

// USER CODE END

