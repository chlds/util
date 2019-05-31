/* **** Notes

Get the current caret position

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl current_caret_pos(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = GetConsoleScreenBufferInfo((*argp).s_out, &((*argp).csbi));

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. GetConsoleScreenBufferInfo() (in fn. current_caret_pos) with error no. ", r);
return(0x00);
}

return(0x01);
}
