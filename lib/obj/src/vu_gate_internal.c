/* **** Notes

Read and write on the CUI

Remarks:
UN-COMPLETED
Refer at incl/cmdln.h to set a debug flag.
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

# define COORDS (0x01+(0x03))
# define COUNT_FN (0x01+(0x20))
# define OBJS (0x01+(0x03))

# define BUFF (0x600)

signed(__cdecl vu_gate_internal(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);

auto COORD(coord);

auto KNOT(*cache);
auto signed(i), (r);
auto signed(c);
// auto unsigned(c);

auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(quit) return(0x01);
else XOR(terminate,terminate);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

/* initialise the delegate list - argp - in the CMDLN_STAT structure */
if(!((*argp).insert)) {
r = cipher_embed((*argp).init_p,BUFF);
if(r^(BUFF)) printf("<< Error at fn. cipher_embed()");
(*argp).p = ((*argp).init_p);
(*argp).count = (0x00);
(*argp).tail = (0x00);
}

// also initialise/update coordinates on the delegate list - argp - in the CMDLN_STAT structure
// (*argp).caret_pos.X = (coord.X);
// (*argp).caret_pos.Y = (coord.Y);
(*argp).depart.X = (coord.X);
(*argp).depart.Y = (coord.Y);

// and initialise the CLI History on the delegate list - argp - in the CMDLN_STAT structure
(*argp).clih.l = (SNAPSHOT*) (0x00);
(*argp).clih.b = (SNAPSHOT*) (0x00);
(*argp).clih.t = (SNAPSHOT*) (0x00);
// set the CLI history flag
(*argp).hist = (signed short) (0x00);

/* Create a new knot associated with the delegate list - argp - in the CMDLN_STAT structure. */
// Build a linked list (1/2)
if(!((*argp).insert)) {

cache = (KNOT*) malloc(0x01*(sizeof(KNOT)));
if(!cache) {
printf("%s\n", "<< Error at fn. malloc()");
return(0x00);
}

(*cache).p = (signed char(*)) (0x00);

(*argp).created_knot = (KNOT*) (cache);

r = concat2ll(cache,argp);
if(!r) {
printf("%s\n", "<< Error at fn. concat2ll()");
return(0x00);
}

(*argp).t = (KNOT*) ((*argp).l);

// initialise on the current new knot
(*cache).caret_pos.X = (coord.X);
(*cache).caret_pos.Y = (coord.Y);
(*cache).depart.X = (coord.X);
(*cache).depart.Y = (coord.Y);
// also register on the current new knot
(*cache).clih.l = ((*argp).clih.l);
(*cache).clih.b = ((*argp).clih.b);
(*cache).clih.t = ((*argp).clih.t);
}

/* update the debug monitor */
if(debugging) r = debug_monitor(argp);

(*argp).insert = (0x00);

/* recursively read keys */
r = vu_internal(argp);

if(!r) {
printf("%s\n", "<< Error at fn. vu_internal()");
return(0x00);
}

if(debugging) (*argp).recurred = (r);

// Build a linked list (2/2)
//* Re-allocat
if((*((*argp).t)).p) free((*((*argp).t)).p);
(*((*argp).t)).p = (signed char(*)) (0x00);
//*/

if((*argp).insert) r = ct((*argp).craft);
else r = ct((*argp).init_p);

INC(r);
(*((*argp).t)).p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!r) {
printf("%s\n", "<< Error at fn. malloc() the second");
return(0x00);
}

if((*argp).insert) r = cpy((*((*argp).t)).p,(*argp).craft);
else r = cpy((*((*argp).t)).p,(*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. cpy()");
//*/

if(quit) return(0x01);

/* and registre parameters of the delegate list - argp - in the CMDLN_STAT structure */
r = cipher_embed((*argp).init_p,BUFF);
if(r^(BUFF)) printf("<< Error at fn. cipher_embed()");

if((*argp).insert) r = cpy((*argp).init_p,(*argp).craft);
else r = cpy((*argp).init_p,(*((*argp).t)).p);

(*argp).p = ((*argp).init_p);
(*argp).count = (0x00);
(*argp).tail = (r);


/* refresh the console screen at the current - i.e., at the new row after inserting - caret position */
// Attention: Implement a function similar to system("cls") to clear the console screen at the caret position.
if((*argp).insert) {
r = refresh_screen_at_the_caret_pos((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. refresh_screen_at_the_caret_pos()");
}


/* Unmap..
// Aux. History
r = cmdln_output_history(argp);
// It is empty ..or has occurred an error.
if(!r) printf("%s\n", "<< It is empty ..or has occurred an error at fn. cmdln_output_history()");
printf("%s%d%s\n", "Output ", r, " histories.");
// Also unmap history
r = cmdln_unmap_history(argp);
// It is empty ..or has occurred an error.
if(!r) printf("%s\n", "<< It is empty ..or has occurred an error at fn. cmdln_unmap_history()");
printf("%s%d%s\n", "Unmapped ", r, " histories.");
//*/


/* to debug */
if(debugging) r = debug_monitor(argp);

return(0x01+(vu_gate_internal(argp)));
}
