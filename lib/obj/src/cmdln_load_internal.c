/* **** Notes

Load a file.

Remarks:
Based on a doubly linked list
The EOL (end-of-line) value is (0x0A), i.e., ('\n').
//*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_load_internal(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x04);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto KNOT(*cache);

auto signed(i), (r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

/* CPU Idling */
Sleep(QUANTUM);

/* Initialise */
XOR(flag,flag);
XOR(i,i);

/* Read/write */
while(0x01) {
r = read((*argp).fd,&c,sizeof(c));
if(!(r^(~(0x00)))) {
printf("%s", "<< Error at fn. read()");
XNOR((*argp).irr);
return(0x00);
}
if(!r) {
// the EOF
XNOR(flag);
break;
}

/* Save the EOL with LF (0x0A). */
// if(!(c^('\r'))) break;
if(!(c^('\n'))) break;

// assign
*(i+((*argp).init_p)) = (signed char) (c);
INC(i);
if(i<(BUFF)) {
}
else {
printf("%s\n", "<< A character limit in one line has been reached.");
XNOR((*argp).irr);
return(0x00);
}}

*(i+((*argp).init_p)) = (signed char) ('\0');

/* Allocate */
cache = (KNOT*) malloc(0x01*(sizeof(KNOT)));
if(!cache) {
printf("%s", "<< Error at fn. malloc()");
XNOR((*argp).irr);
return(0x00);
}

r = ct((*argp).init_p);
INC(r);
(*cache).p = (signed char(*)) malloc(r*(sizeof(signed char)));
if(!((*cache).p)) {
printf("%s", "<< Error at fn. malloc() the second");
XNOR((*argp).irr);
return(0x00);
}

r = cpy((*cache).p,(*argp).init_p);

/* concatenate */
r = concat2ll(cache,argp);
if(!r) {
printf("%s", "<< Error at fn. concat2ll()");
XNOR((*argp).irr);
return(0x00);
}

/* the EOF */
if(flag) return(0x01);

return(0x01+(cmdln_load_internal(argp)));
}