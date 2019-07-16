/* **** Notes

Read and write on the CUI

Use the function in the command mode.

Remarks:
UN-COMPLETED
Refer at incl/cmdln.h to set a debug flag.
Along with fn. cmd_io_internal
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

# define COORDS (0x01+(0x03))
# define COUNT_FN (0x01+(0x20))
# define OBJS (0x01+(0x03))

signed(__cdecl cmd_io(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);
extern signed(command_mode);
extern signed(cmd_io_terminate);

auto signed char const(HT) = ('\t');
// auto signed char const(HT) = (0x09);

auto signed char(*p);

auto signed(cache), (i), (r);
auto signed(c);
// Not auto signed char(c);

auto signed short(flag);

auto COORD(coord);
auto POINT(point);

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

// initialise
(*argp).depart_for_cmd_io.X = ((*argp).command_label);
(*argp).depart_for_cmd_io.Y = ((*argp).csbi.srWindow.Bottom);

/* Also initialise e.g., refer at fn. vu_gate
(*argp).cmd_io.p = (command_buff);
(*argp).cmd_io.limit = (COMMAND_BUFF);
//*/

(*argp).cmd_io.caret = ((*argp).cmd_io.p);

(*argp).cmd_io.c = (signed) (0x00);
(*argp).cmd_io.count = (0x00);
(*argp).cmd_io.tail = (0x00);
(*argp).cmd_io.recurred = (0x00);

r = cipher_embed((*argp).cmd_io.p, COMMAND_BUFF);

if(r^(COMMAND_BUFF)) printf("%s", "<< Error at fn. cipher_embed()");

r = cmd_io_internal(argp);

if(!r) printf("%s", "<< Error at fn. cmd_io_internal()");

XOR(cmd_io_terminate,cmd_io_terminate);

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

/* to debug */
// if(C_DBG) r = debug_monitor(argp);

return(0x01);
}
