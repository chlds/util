/* **** Notes

Press <Ctrl-S> to invoke the function.

descriptor: Put the file descriptor at.
k: Put the terminating address of the knot structure at.

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

signed(__cdecl cmdln_writing(signed(descriptor),KNOT(*k))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);
auto signed(r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!k) return(0x00);

cache = (k);
k = ((*k).d);

if(!k) XNOR(flag);
else XOR(flag,flag);

r = ct((*cache).p);
r = write(descriptor, (*cache).p, r);

if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. write() in fn. cmdln_writing()");
return(0x00);
}

if(!flag) {
if((*cache).linefeed) {
//* the CR i.e., (0x0D)
c = ('\r');
r = write(descriptor, &c, sizeof(c));
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. write() in fn. cmdln_writing() the second");
return(0x00);
}
//*/
// the LF i.e., (0x0A)
c = ('\n');
r = write(descriptor, &c, sizeof(c));
if(!(r^(~(0x00)))) {
printf("%s\n", "<< Error at fn. write() in fn. cmdln_writing() the second");
return(0x00);
}}}

return(0x01+(cmdln_writing(descriptor,k)));
}
