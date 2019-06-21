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

signed(__cdecl cmdln_save(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(*label) = ("Save as: ");
auto signed char(*overwriting) = ("The file already exists. Would you like to overwrite? Cancel (c) or Okay (o): ");
auto KNOT(*cch);

auto signed char(*p);

auto COORD(coord);
auto signed(cache), (r);
auto signed(fd);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cmd_mode_refresh(argp);

if(!r) {
printf("%s", "<< Error at fn. cmd_mode_refresh()");
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

(*argp).filename = (signed char(*)) malloc(COMMAND_BUFF*(sizeof(signed char)));

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

// Pre-open to save the contents to the file
if(!((*argp).overwrite)) {
fd = open(p, (O_WRONLY|(O_BINARY|(O_CREAT|(O_EXCL|(O_APPEND))))), (S_IREAD|(S_IWRITE)));
if(!(fd^(~(0x00)))) {
printf("%s", overwriting);
r = ct(overwriting);
coord.X = (r);
coord.Y = ((*argp).csbi.srWindow.Bottom);
r = cmd_io(argp);
if(!r) {
printf("%s", "<< Error at fn. cmd_io()");
return(0x00);
}
c = (signed char) (*((*argp).cmd_io.p));
if(!(c^('o'))) XNOR((*argp).overwrite);
else {
// XOR((*argp).overwrite,(*argp).overwrite);
printf("%s", " < Cancelled! > ");
free((*argp).filename);
(*argp).filename = (signed char(*)) (0x00);
return(0x01);
}}
else {
// Opened
r = close(fd);
if(!(r^(~(0x00)))) {
printf("%s", "<< Error at fn. close()");
return(0x00);
}}}

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
