/* **** Notes

Output Unicode characters in UTF-8 after decoding Unicode bytes input out of the key board.

Along with C and Windows libraries

Remarks:
Based on UTF-8
*/


# define CLI_CODEPAGES (0x04)
# define CLI_FN (0x01+(0x20))

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli_w32.h"

signed(__cdecl cli_io_beta(signed char *argp,signed size)) {

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
(signed(__cdecl*) (void(*))) (cli_ctrl_at_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_a_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_b_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_c_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_d_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_e_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_f_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_g_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_h_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_i_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_j_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_k_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_l_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_m_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_n_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_o_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_p_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_q_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_r_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_s_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_t_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_u_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_v_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_w_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_x_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_y_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_z_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_lsb_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_rs_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_rsb_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_ca_beta),
(signed(__cdecl*) (void(*))) (cli_ctrl_ll_beta),
(signed(__cdecl*) (void(*))) (0x00),
};

auto CLI_W32_STAT cli_w32_stat = {
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
r = (*(cli_fn+(i)))(&cli_w32_stat);
if(!r) {
printf("%s%d%s%d%s\n","<< Error at fn. *(cli_fn[",i,"]) (*(cli_fn_argp+(",i,")))");
return(0x00);
}
if(cli_w32_stat.verse.linebreak) return(0x01);
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

return(0x01+(cli_io_beta(argp,size)));
}
