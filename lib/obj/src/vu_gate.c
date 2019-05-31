/* **** Notes

Read and write on the CUI

Remarks:
UN-COMPLETED
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"
// # pragma comment(lib, "user32.lib")

# define COORDS (0x01+(0x03))
# define COUNT_FN (0x01+(0x20))
# define OBJS (0x01+(0x03))

signed(__cdecl vu_gate(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(terminate);

// for 7-bit characters
auto signed char const(BS) = (8);
auto signed char const(LF) = ('\n');
auto signed char const(CR) = ('\r');
auto signed char const(ESC) = (27);
auto signed char const(SP) = (' ');

auto signed(cache);
auto signed(i), (r);
auto signed(c);
// auto unsigned(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(terminate) return(0x01);

// Sleep(3000);

// initialise
// system("cls");

(*argp).count = (0x00);
(*argp).tail = (0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
(*argp).depart.X = ((*argp).csbi.dwCursorPosition.X);
(*argp).depart.Y = ((*argp).csbi.dwCursorPosition.Y);
}

/* Monitor
printf("%s%d\n", "Curr. X: ", (*argp).csbi.dwCursorPosition.X);
printf("%s%d\n", "Curr. Y: ", (*argp).csbi.dwCursorPosition.Y);
//*/

// recursively read keys
r = vu_internal(argp);

if(!r) {
printf("%s\n", "<< Error at fn. vu_internal()");
return(0x00);
}

else {
printf("\n");
printf("%d%s\n", r, " times recurred by fn. vu_internal()");
}


// Build a linked list


return(0x01);
}
