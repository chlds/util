/* **** Notes

Press <Ctrl-Y> to invoke the function.

Copy the line content after the current caret position into a clipboard.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_ctrl_y(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto signed(cache), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

INC((*argp).clipped);

cache = ((*argp).count);

if(!(cache^((*argp).tail))) {
}

else {
r = cpy((*argp).clip, (*argp).p);
if(!r) printf("%s", "<< Error at fn. cpy()");
}

// printf("%s", "Ctrl-Y;");

return(0x01);
}
