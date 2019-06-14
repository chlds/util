/* **** Notes

Press <Ctrl-S> to invoke the function.

descriptor: Put the file descriptor at.
argp: Put the terminating address of the knot structure at.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
Along with fn. cmdln_save
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_writing(signed(descriptor),KNOT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x08);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto KNOT(*cch);

auto COORD(coord);
auto signed(cache), (i), (l), (r);
auto signed(fd);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

XOR(l,l);
XOR(i,i);

while(0x01) {
if(!argp) break;
cch = (KNOT*) (argp);
argp = ((*argp).d);
/* The first */
r = ct((*cch).p);
r = write(descriptor, (*cch).p, r);
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. write() in fn. cmdln_writing()");
break;
}
/* Line Feed */
c = ('\n');
r = write(descriptor, &c, sizeof(c));
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. write() in fn. cmdln_writing() the second");
break;
}
/* CPU Idling */
if(i<(SNOOZE)) {
i++;
}
else {
XOR(i,i);
Sleep(DELAY);
}
INC(l);
}

return(l);
}
