/* **** Notes

Initialise
*/


# define CAR
# include <windows.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_init_virtual_terminal_beta(signed(arg),cli_virtual_terminal_t(*argp))) {

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

auto void *v;
auto signed i,l,r;
auto signed short flag;

if(!argp) return(0x00);

if(!(CLI_INIT&(R(flag,*argp)))) AND(arg,0x00);

AND(flag,0x00);

v = GetStdHandle(STD_INPUT_HANDLE);
if(EQ(INVALID_HANDLE_VALUE,v)) flag++;
if(!v) flag++;
if(flag) {
printf("%s \n","<< Error at fn. GetStdHandle()");
return(0x00);
}
if(arg) l = (*(CLI_BASE+(R(mode,*argp))));
else {
r = GetConsoleMode(v,&l);
if(!r) return(0x00);
*(CLI_BASE+(R(mode,*argp))) = (l);
OR(l,ENABLE_VIRTUAL_TERMINAL_INPUT);
}
r = SetConsoleMode(v,l);
if(!r) return(0x00);

v = GetStdHandle(STD_OUTPUT_HANDLE);
if(EQ(INVALID_HANDLE_VALUE,v)) flag++;
if(!v) flag++;
if(flag) {
printf("%s \n","<< Error at fn. GetStdHandle()");
return(0x00);
}
if(arg) l = (*(CLI_OFFSET+(R(mode,*argp))));
else {
r = GetConsoleMode(v,&l);
if(!r) return(0x00);
*(CLI_OFFSET+(R(mode,*argp))) = (l);
OR(l,ENABLE_VIRTUAL_TERMINAL_PROCESSING);
OR(l,DISABLE_NEWLINE_AUTO_RETURN);
}
r = SetConsoleMode(v,l);
if(!r) return(0x00);

R(optl,*argp) = (0x00);

if(!arg) OR(R(flag,*argp),CLI_INIT);

return(0x01);
}
