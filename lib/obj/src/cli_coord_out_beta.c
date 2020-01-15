/*

Form a column in the console screen.

Remarks:
Based on fn. cli_out
Return the number of bytes for a Unicode character output in UTF-8.
Refer at fn. cli_init_ty_beta.
*/


# define CLI_MACRO
# define CLI_W32

# include "../../../incl/config_ty.h"

signed(__cdecl cli_coord_out_beta(signed char(*cur),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char HT = ('\t');

auto CLI_COORD coord;
auto signed long long ll;
auto signed char *p;
auto signed nbyte;
auto signed i,r;
auto signed short x,y;
auto signed short flag;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

if(!(*(CLI_OUT+(R(device,*argp))))) {
printf("%s\n","<< Get a handle to the specified standard output device.");
return(0x00);
}

if(CLI_DBG_D<(CLI_DBG)) printf("%s%p\n","An offset address for a handle to the specified standard output device is: ",*(CLI_OUT+(R(device,*argp))));

if(!(HT^(*cur))) {
r = cli_indent_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_indent_beta()");
return(0x00);
}
return(0x01);
}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

x = (coord.x);

if(!(x^(R(Right,R(srWindow,R(csbi,*argp)))))) flag = (0x01);
else flag = (0x00);

// output
r = cli_out(cur);
if(!r) {
printf("%s\n","<< Error at fn. cli_out()");
return(0x00);
}

nbyte = (r);

// after outputting
if(flag) {
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
y = (R(Y,R(dwCursorPosition,R(csbi,*argp))));
if(!(y^(coord.y))) {
coord.x = (0x00);
coord.y = (0x01+(coord.y));
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}}

return(nbyte);
}
