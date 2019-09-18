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
static signed const(QUANTUM) = (0x10);
// static signed const(SNOOZE) = (0x04);

auto KNOT(*cache);

auto signed(range);

auto signed(i), (r);
auto signed short(cr), (flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

/* Initialise */
XOR(flag,flag);
XOR(cr,cr);
XOR(i,i);
XOR(c,c);

/* Read/write */
XNOR((*argp).end_with_linefeed);
XOR(range,range);

while(0x01) {

//* Uncomplete: Use with fn. arrange(), fn. check_last_sp() and/or..
if(range++<(-0x10+((*argp).csbi.srWindow.Right))) {
}

else {
if(!(-' '+(c))) {
// not end with LF (0x0A).
XOR((*argp).end_with_linefeed,(*argp).end_with_linefeed);
Sleep(0x10);
break;
}}
//*/


printf("\r%s%d%s%zd","LOADING.. ",((*argp).loading)++,"/",(*argp).fsiz);


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

/* Remove the EOL with LF (0x0A) or CR (0x0D) and LF (0x0A). */
if(!(c^('\r'))) XNOR(cr);
if(!(c^('\n'))) break;

if(!cr) {
// assign
*(i+((*argp).init_p)) = (signed char) (c);
INC(i);
if(i<(BUFF)) {
}
else {
printf("%s\n", "<< A character limit in one line has been reached.");
XNOR((*argp).irr);
return(0x00);
}}}

*(i+((*argp).init_p)) = (signed char) ('\0');

/* Allocate */
cache = (KNOT*) malloc(0x01*(sizeof(KNOT)));

if(!cache) {
printf("%s", "<< Error at fn. malloc()");
XNOR((*argp).irr);
return(0x00);
}

// word-wrap
(*cache).cols = (signed short(*)) (0x00);

r = ct((*argp).init_p);

/* CPU Idling */
// if(!r) Sleep(QUANTUM);

INC(r);
(*cache).p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!((*cache).p)) {
printf("%s", "<< Error at fn. malloc() the second");
XNOR((*argp).irr);
return(0x00);
}

r = cpy((*cache).p,(*argp).init_p);


/* appearance arrangement -- Columnist */
if((*argp).end_with_linefeed) (*cache).linefeed = (0x01); // i.e. end along with linefeed (0x0A).
else (*cache).linefeed = (0x00); // i.e. end along with space (0x20).
// also refer at fn. cmdln_writing.


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
