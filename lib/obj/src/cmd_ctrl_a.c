/* **** Notes

Press <Ctrl-A> to invoke the function.

in the Command Mode

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmd_ctrl_a(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto COORD(coord);
auto signed(cache), (r);
auto signed(c);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

// Internal Part.
if((*argp).cmd_io.count) {
(*argp).cmd_io.caret = ((*argp).cmd_io.p);
(*argp).cmd_io.count = (0x00);
// (*argp).cmd_io.tail = (0x00);
}

// External Part.
r = SetConsoleCursorPosition((*argp).s_out, (*argp).depart_for_cmd_io);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

return(0x01);
}
