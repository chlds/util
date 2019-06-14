/* **** Notes

Press <Ctrl-S> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

# define BUFF (0x100)

signed(__cdecl cmdln_save_prep(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(buff[BUFF]) = {
(signed char) (0x00)
};

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.srWindow.Left);
coord.Y = (-1+((*argp).csbi.srWindow.Bottom));
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

cache = (0x01+((*argp).csbi.srWindow.Right));

while(cache) {
r = _putch('*');
DEC(cache);
}

printf("%s", "Cancel (c) or Save as (s): ");

r = reading(buff,BUFF);

if(!r) {
printf("%s\n", "<< Error at fn. reading()");
return(0x00);
}

else {
}

c = (signed char) (*buff);

if(!(c^('s'))) {
r = cmdln_save(buff,argp);
if(!r) printf("%s", "<< Error at fn. cmdln_save()");
}

else {
printf("%s", "<< Cancelled");
Sleep(2500);
}

return(0x01);
}
