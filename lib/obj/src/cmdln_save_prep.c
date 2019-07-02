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

signed(__cdecl cmdln_save_prep(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(*label) = ("Save as: ");

auto COORD(coord);
auto signed(cache), (r);
auto signed short(flag);
auto signed char(c);

/* **** CODE/TEXT */
if(!argp) return(0x00);

// Build a linked list (in the latter part (not the former part))
if((*((*argp).t)).p) free((*((*argp).t)).p);
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

r = cmd_mode_prep(argp);

if(!r) {
printf("%s", "<< Error at fn. cmd_mode_prep()");
return(0x00);
}

if(!((*argp).filename)) {
(*argp).confirm = (0x00);
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
printf("%s", " < Cancelled > ");
return(0x00);
}}

r = cmdln_save(argp);

if(!r) {
printf("%s", "<< Error at fn. cmdln_save()");
printf("%s", " < Cancelled > ");
}

return(0x01);
}
