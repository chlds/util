/* **** Notes

Load a file.

Remarks:
Based on a doubly linked list
//*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_load(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto KNOT(*cache);
auto signed char(*p);

auto signed(r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!((*argp).filename)) return(0x00);

p = ((*argp).filename);

/* Reset the workspace parameters */
(*argp).l = (KNOT*) (0x00);
(*argp).t = (KNOT*) (0x00);
(*argp).b = (KNOT*) (0x00);

/* initialise */
XOR((*argp).irr,(*argp).irr);
XOR(flag,flag);
XNOR((*argp).fd);

/* Opening */
r = open(p,O_RDONLY|(O_BINARY));

if(!(r^(~(0x00)))) {
printf("%s", "<< Error at fn. open()");
return(0x00);
}

(*argp).fd = (signed) (r);

/* Read/write */
r = cmdln_load_internal(argp);

if(!r) {
printf("%s", "<< Error at fn. cmdln_load_internal()");
XNOR(flag);
}

/* Irregular */
if((*argp).irr) {
printf("%s", "<< Interrupted in loading..");
XNOR(flag);
r = cmdln_unmap(argp);
if(!r) {
printf("%s", "<< Error at fn. cmdln_unmap()");
XNOR(flag);
}}

/* Closing */
r = close((*argp).fd);

if(!(r^(~(0x00)))) {
printf("%s", "<< Error at fn. close()");
XNOR(flag);
}

if(flag) return(0x00);

return(0x01);
}
