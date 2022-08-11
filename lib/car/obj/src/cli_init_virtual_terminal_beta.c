/* **** Notes

Initialise
*/


# define CAR_H
# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl cli_init_virtual_terminal_beta(signed(arg),cli_virtual_terminal_t(*argp))) {
auto void *v;
auto signed l,r;
auto i_mode[] = {
ENABLE_ECHO_INPUT,
ENABLE_INSERT_MODE,
ENABLE_LINE_INPUT,
ENABLE_MOUSE_INPUT,
ENABLE_PROCESSED_INPUT,
ENABLE_QUICK_EDIT_MODE,
ENABLE_WINDOW_INPUT,
ENABLE_VIRTUAL_TERMINAL_INPUT,
0x00,
};
auto o_mode[] = {
ENABLE_PROCESSED_OUTPUT,
ENABLE_WRAP_AT_EOL_OUTPUT,
ENABLE_VIRTUAL_TERMINAL_PROCESSING,
DISABLE_NEWLINE_AUTO_RETURN,
ENABLE_LVB_GRID_WORLDWIDE,
0x00,
};
if(!argp) return(0x00);
if(!(CLIH_INIT&(R(flag,*argp)))) AND(arg,0x00);
v = currently_working_standard_handle(CLIH_IN);
if(!v) {
printf("%s \n","<< Error at fn. currently_working_standard_handle()");
return(0x00);
}
if(arg) l = (*(CLIH_BASE+(R(mode,*argp))));
else {
r = GetConsoleMode(v,&l);
if(!r) return(0x00);
*(CLIH_BASE+(R(mode,*argp))) = (l);
OR(l,ENABLE_VIRTUAL_TERMINAL_INPUT);
}
r = SetConsoleMode(v,l);
if(!r) return(0x00);
v = currently_working_standard_handle(CLIH_OUT);
if(!v) {
printf("%s \n","<< Error at fn. currently_working_standard_handle()");
return(0x00);
}
if(arg) l = (*(CLIH_OFFSET+(R(mode,*argp))));
else {
r = GetConsoleMode(v,&l);
if(!r) return(0x00);
*(CLIH_OFFSET+(R(mode,*argp))) = (l);
OR(l,ENABLE_VIRTUAL_TERMINAL_PROCESSING);
OR(l,DISABLE_NEWLINE_AUTO_RETURN);
}
r = SetConsoleMode(v,l);
if(!r) return(0x00);
if(!arg) OR(R(flag,*argp),CLIH_INIT);
return(0x01);
}
