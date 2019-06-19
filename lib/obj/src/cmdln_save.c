/* **** Notes

Press <Ctrl-S> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
Refer at fn. cmdln_ctrl_s, fn. cmdln_save_prep, fn. cmdln_save and fn. cmdln_writing.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

# define BUFF (0x100)

signed(__cdecl cmdln_save(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(*label) = ("Save as: ");

auto signed char(buff[BUFF]) = {
(signed char) (0x00)
};

auto KNOT(*cch);

auto signed char(*p);

auto COORD(coord);
auto signed(cache), (r);
auto signed(fd);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.srWindow.Left);
coord.Y = ((*argp).csbi.srWindow.Bottom);
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

cache = (0x00+((*argp).csbi.srWindow.Right));
while(cache) {
r = _putch(' ');
DEC(cache);
}

r = SetConsoleCursorPosition((*argp).s_out, coord);

if(!r) {
r = GetLastError();
printf("%s%d\n", "<< Error at fn. SetConsoleCursorPosition() with error no. ", r);
return(0x00);
}

if(!((*argp).filename)) {

r = ct(label);
(*argp).command_label = (r);

printf("%s", label);

r = cmd_io(argp);

if(!r) {
printf("%s", "<< Error at fn. cmd_io()");
return(0x00);
}

(*argp).filename = (signed char(*)) malloc(0x200*(sizeof(signed char)));

if(!((*argp).filename)) {
printf("%s", "<< Error at fn. malloc()");
return(0x00);
}

r = cpy((*argp).filename,(*argp).cmd_io.p);

if(!r) {
// It is empty ..or has occurred an error.
printf("%s", "<< Error at fn. cpy()");
return(0x00);
}}

p = ((*argp).filename);

// Build a linked list (in the latter part (not the former part))
r = ct((*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. ct()");
//*/

INC(r);
(*((*argp).t)).p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!r) {
printf("%s\n", "<< Error at fn. malloc() the second");
return(0x00);
}

r = cpy((*((*argp).t)).p,(*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. cpy()");
//*/

// Open to truncate contents of the file
fd = open(p, (O_WRONLY|(O_BINARY|(O_CREAT|(O_TRUNC)))), (S_IREAD|(S_IWRITE)));

if(!(fd^(~(0x00)))) {
printf("%s", "<< Error at fn. open()");
return(0x00);
}

r = close(fd);

if(!(r^(~(0x00)))) {
printf("%s", "<< Error at fn. close()");
return(0x00);
}

// Re-open to save the contents to the file
fd = open(p, (O_WRONLY|(O_BINARY|(O_CREAT /* |(O_EXCL */ |(O_APPEND)))), (S_IREAD|(S_IWRITE)));

if(!(fd^(~(0x00)))) {
printf("%s", "<< Error at fn. open()");
return(0x00);
}

// Write
cch = ((*argp).b);
r = cmdln_writing(fd,cch);

printf("%s%d%s", "Saved ", r, " lines");

// Close
r = close(fd);

if(!(r^(~(0x00)))) {
printf("%s", "<< Error at fn. close()");
return(0x00);
}

return(0x01);
}
