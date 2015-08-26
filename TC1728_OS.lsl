// TASKING VX-toolset for TriCore
// Eclipse project linker script file
// 
#if defined(__PROC_TC1728__)
#include "tc1728.lsl"
derivative my_tc1728 extends tc1728
{
}
#else
#include <cpu.lsl>
#endif
