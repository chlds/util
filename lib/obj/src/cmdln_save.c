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
auto signed char(*label_cs) = ("Cancel (c) or Save (s): ");
auto signed char(*label_co) = ("The file already exists. Would you like to overwrite? Cancel (c) or Overwrite (o): ");

auto signed char(*p);

auto COORD(coord);
auto struct stat(stats);

auto KNOT(*cache);
auto signed(i), (r);
auto signed(fd);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!((*argp).filename)) return(0x00);
else p = ((*argp).filename);

(*argp).confirm = (0x00);

r = stat((*argp).filename,&stats);

if(!(r^(~(0x00)))) {
if(!(0x02^(errno))) {
/* The file does not exist. */
}
else {
printf("%s%d", "<< Error at fn. stat() with errno. ", errno);
return(0x00);
}}

else {
if(!(S_IFREG^(stats.st_mode&(S_IFMT)))) {
/* The file already exists. */
(*argp).confirm = (0x01);
}
else {
printf("%s", "<< Please change the file name..");
if(debugging) printf("%s%Xh", ", stats.st_mode is: ", stats.st_mode);
return(0x00);
}}

/* Confirmation */
if(!((*argp).confirm)) {
r = cmd_mode_refresh(argp);
if(!r) {
printf("%s", "<< Error at fn. cmd_mode_refresh()");
return(0x00);
}
r = ct(label_cs);
(*argp).command_label = (r);
printf("%s", label_cs);
r = cmd_io(argp);
if(!r) {
printf("%s\n", "<< Error at fn. cmd_io()");
return(0x00);
}
c = (signed char) (*((*argp).cmd_io.p));
if(!(c^('s'))) {
XNOR((*argp).overwrite);
XNOR((*argp).confirm);
}
else {
printf("%s", " < Cancelled > ");
free((*argp).filename);
(*argp).filename = (signed char(*)) (0x00);
return(0x01);
}}

else {
if(!((*argp).overwrite)) {
r = cmd_mode_refresh(argp);
if(!r) {
printf("%s", "<< Error at fn. cmd_mode_refresh()");
return(0x00);
}
printf("%s",label_co);
r = ct(label_co);
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
}}}


/* **** e.g., delete after creating a file, use fn. PathFileExists or..
// Pre-open to save the contents to the file
if(!((*argp).overwrite)) {
r = cmd_mode_refresh(argp);
if(!r) {
printf("%s", "<< Error at fn. cmd_mode_refresh()");
return(0x00);
}
fd = open(p, (O_WRONLY|(O_BINARY|(O_CREAT|(O_EXCL|(O_APPEND))))), (S_IREAD|(S_IWRITE)));
if(!(fd^(~(0x00)))) {
printf("%s",label_co);
r = ct(label_co);
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
//*/


r = cmd_mode_refresh(argp);

if(!r) {
printf("%s", "<< Error at fn. cmd_mode_refresh()");
return(0x00);
}

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
cache = ((*argp).b);
r = cmdln_writing(fd,cache);
printf("%s%d%s", "Saved ", r, " lines");
// Close
r = close(fd);
if(!(r^(~(0x00)))) {
printf("%s", "<< Error at fn. close()");
return(0x00);
}

return(0x01);
}
