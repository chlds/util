/* **** Notes

Output Unicode characters in UTF-8 after decoding Unicode bytes input out of the key board.

Along with C library

Remarks:
Based on UTF-8

Notes:
An array of function pointers is not yet implemented..
*/


# define CLI_CODEPAGES (0x04)
# define CLI_FN (0x01+(0x20))

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli.h"

signed(__cdecl cli_io(signed char *argp,signed size)) {

/* **** DATA, BSS and STACK */
enum {
OLD_INPUT,INPUT,OLD_OUTPUT,OUTPUT,
};

enum {
CTRL_AT,CTRL_A,CTRL_B,CTRL_C,
CTRL_D,CTRL_E,CTRL_F,CTRL_G,
CTRL_H,CTRL_I,CTRL_J,CTRL_K,
CTRL_L,CTRL_M,CTRL_N,CTRL_O,
CTRL_P,CTRL_Q,CTRL_R,CTRL_S,
CTRL_T,CTRL_U,CTRL_V,CTRL_W,
CTRL_X,CTRL_Y,CTRL_Z,CTRL_LSB,
CTRL_RS,CTRL_RSB,CTRL_CA,CTRL_LL,
};

auto signed(__cdecl*(cli_fn[CLI_FN])) (void(*cli_fn_argp)) = {
(signed(__cdecl*) (void(*))) (cli_ctrl_at),
(signed(__cdecl*) (void(*))) (cli_ctrl_a),
(signed(__cdecl*) (void(*))) (cli_ctrl_b),
(signed(__cdecl*) (void(*))) (cli_ctrl_c),
(signed(__cdecl*) (void(*))) (cli_ctrl_d),
(signed(__cdecl*) (void(*))) (cli_ctrl_e),
(signed(__cdecl*) (void(*))) (cli_ctrl_f),
(signed(__cdecl*) (void(*))) (cli_ctrl_g),
(signed(__cdecl*) (void(*))) (cli_ctrl_h),
(signed(__cdecl*) (void(*))) (cli_ctrl_i),
(signed(__cdecl*) (void(*))) (cli_ctrl_j),
(signed(__cdecl*) (void(*))) (cli_ctrl_k),
(signed(__cdecl*) (void(*))) (cli_ctrl_l),
(signed(__cdecl*) (void(*))) (cli_ctrl_m),
(signed(__cdecl*) (void(*))) (cli_ctrl_n),
(signed(__cdecl*) (void(*))) (cli_ctrl_o),
(signed(__cdecl*) (void(*))) (cli_ctrl_p),
(signed(__cdecl*) (void(*))) (cli_ctrl_q),
(signed(__cdecl*) (void(*))) (cli_ctrl_r),
(signed(__cdecl*) (void(*))) (cli_ctrl_s),
(signed(__cdecl*) (void(*))) (cli_ctrl_t),
(signed(__cdecl*) (void(*))) (cli_ctrl_u),
(signed(__cdecl*) (void(*))) (cli_ctrl_v),
(signed(__cdecl*) (void(*))) (cli_ctrl_w),
(signed(__cdecl*) (void(*))) (cli_ctrl_x),
(signed(__cdecl*) (void(*))) (cli_ctrl_y),
(signed(__cdecl*) (void(*))) (cli_ctrl_z),
(signed(__cdecl*) (void(*))) (cli_ctrl_lsb),
(signed(__cdecl*) (void(*))) (cli_ctrl_rs),
(signed(__cdecl*) (void(*))) (cli_ctrl_rsb),
(signed(__cdecl*) (void(*))) (cli_ctrl_ca),
(signed(__cdecl*) (void(*))) (cli_ctrl_ll),
(signed(__cdecl*) (void(*))) (0x00),
};

auto CLI_STAT cli_stat = {
(0x00),
};

auto unsigned const UTF_8 = (65001);
auto signed const LIMIT = (0x01+(0x04));

auto signed char const(SP) = (' ');
auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');

auto unsigned codepage[CLI_CODEPAGES] = {
(unsigned) (0x00),
};

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
// Backup the original code pages for console input/output.
*(codepage+(OLD_INPUT)) = GetConsoleCP();
if(!(*(codepage+(OLD_INPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

*(codepage+(OLD_OUTPUT)) = GetConsoleOutputCP();
if(!(*(codepage+(OLD_OUTPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}

/* Display the current code pages for console input/output.
printf("%s%d%s%d\n","Current Code Pages for Input/Output: ",*(codepage+(OLD_INPUT)),"/",*(codepage+(OLD_OUTPUT)));
printf("\n");
//*/

// Switch to the UTF-8 code page(s) for console input(/output).
r = SetConsoleCP(UTF_8);
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

/*
r = SetConsoleOutputCP(UTF_8);
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}
//*/

/* Display the new current code pages for console input/output
*(codepage+(INPUT)) = GetConsoleCP();
if(!(*(codepage+(INPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}
*(codepage+(OUTPUT)) = GetConsoleOutputCP();
if(!(*(codepage+(OUTPUT)))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}
printf("%s%d%s%d\n","The new current Code Pages for Input/Output: ",*(codepage+(INPUT)),"/",*(codepage+(OUTPUT)));
printf("%s\n","The original code page for console input will be automatically restored after terminating this program.");
printf("\n");
//*/

/* Announcements
cputs("Please type the <Enter> key to stop.\n\n");
//*/


// get
r = cli_in(&i,argp,size);
if(!r) {
printf("%s\n","<< Error at fn. cli_in()");
return(0x00);
}

argp = (argp+(r));

if(i<(0x20)) {
*(--argp) = (signed char) (0x00);
// and run in an array of function pointers e.g.,
// r = *(cli_fn+(i)) (*(cli_fn_argp+(i)));
r = (*(cli_fn+(i)))(&cli_stat);
if(!r) {
printf("%s%d%s%d%s\n","<< Error at fn. *(cli_fn[",i,"]) (*(cli_fn_argp+(",i,")))");
return(0x00);
}
if(cli_stat.ty.cyl.linebreak) return(0x01);
}

else {
// put
r = cli_out(-r+(argp));
if(!r) {
printf("%s\n","<< Error at fn. cli_out()");
return(0x00);
}
// limit
size = (-r+(size));
if(size<(LIMIT)) {
*argp = (0x00);
return(0x01);
}}


// Restore to the original code pages for console input/output.
r = SetConsoleCP(*(codepage+(OLD_INPUT)));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

r = SetConsoleOutputCP(*(codepage+(OLD_OUTPUT)));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}

return(0x01+(cli_io(argp,size)));
}
