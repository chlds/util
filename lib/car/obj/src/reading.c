/* **** Notes

Read one line out of the standard input.

di: Put a buffer at.
size: Put the buffer size at.
*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl reading(signed char(*di),signed(size))) {

/* **** DATA, BSS and STACK */
auto signed char const CR = ('\r');
auto signed char const LF = ('\n');
auto signed r;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!size) return(0x00);
if(size<(0x01)) return(0x00);

r = read(CIN, di, size);
if(!(r^(~(0x00)))) {
printf("%s \n","<< Error at fn. reading()");
return(0x00);
}

if(!r) return(0x00);

if(r<(size)) {
if(!(CR^(*(di+(r+(~(0x00))))))) *(di+(r+(~(0x00)))) = ('\0');
if(!(LF^(*(di+(r+(~(0x00))))))) *(di+(r+(~(0x00)))) = ('\0');
}

else {
printf("%s \n","<< Oops!");
return(0x00);
}

return(r);
}
