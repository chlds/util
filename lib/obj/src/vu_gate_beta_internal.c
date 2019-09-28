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

signed(__cdecl vu_gate_beta_internal(CMDLN_STAT(*argp))) {

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

/* Initialise/update coordinates on the delegate list - argp - in the CMDLN_STAT structure */
(*argp).depart.X = (coord.X);
(*argp).depart.Y = (coord.Y);

// and initialise the CLI History on the delegate list
(*argp).clih.l = (SNAPSHOT*) (0x00);
(*argp).clih.b = (SNAPSHOT*) (0x00);
(*argp).clih.t = (SNAPSHOT*) (0x00);

if(!((*argp).insert)) {
r = cipher_embed((*argp).init_p,BUFF);

if(r^(BUFF)) printf("<< Error at fn. cipher_embed()");

(*argp).p = ((*argp).init_p);
(*argp).count = (0x00);
(*argp).tail = (0x00);

// word-wrap: e.g., refer at fn. vu_refresh, fn. c_out_beta or..
(*argp).cached_coord.X = (0x00);
(*argp).cached_coord.Y = (0x00);

// word-wrap: cumulate dead sp by wrapping words or not, refer at fn. c_out_beta, fn. ctrl_b_beta, fn. sustain, incl/cmdln.h, incl/ll.h or ..
(*argp).cumul_lock = (0x01);
(*argp).cumulative = (0x00);

/* Create a new knot associated with the delegate list - argp - in the CMDLN_STAT structure. */
// Build a linked list (1/2)
cache = (KNOT*) malloc(0x01*(sizeof(KNOT)));

if(!cache) {
printf("%s\n", "<< Error at fn. malloc()");
return(0x00);
}

(*cache).cols = (signed short(*)) (0x00);
(*cache).p = (signed char(*)) (0x00);

(*argp).created_knot = (KNOT*) (cache);


/* flag to end with LF (0x0A) */
// i.e., end with a Line Break (in LF or CRLF).
// also refer at fn. cmdln_load_internal, fn. cmdln_writing, hd. incl/ll.h and hd. incl/cmdln.h
XNOR((*cache).linefeed);

/* word-wrap */
(*cache).cumulative = (0x00);

r = concat2ll(cache,argp);

if(!r) {
printf("%s\n", "<< Error at fn. concat2ll()");
return(0x00);
}

(*argp).t = (KNOT*) ((*argp).l);

// initialise on the current new knot
(*cache).depart.X = (coord.X);
(*cache).depart.Y = (coord.Y);
// also register on the current new knot
(*cache).clih.l = ((*argp).clih.l);
(*cache).clih.b = ((*argp).clih.b);
(*cache).clih.t = ((*argp).clih.t);
}

/* update the debug monitor */
if(C_DBG) r = debug_monitor(argp);

(*argp).insert = (0x00);

/* recursively read keys */
r = vu_beta_internal(argp);

if(!r) {
printf("%s\n", "<< Error at fn. vu_beta_internal()");
return(0x00);
}

if(C_DBG) (*argp).recurred = (r);

// Build a linked list (2/2) (in the latter part (not the former part))
// Re-allocat
if((*((*argp).t)).p) free((*((*argp).t)).p);
// (*((*argp).t)).p = (signed char(*)) (0x00);

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

/* Cut/leave the snapshot history off */
if((*argp).insert) {
(*((*argp).t)).clih.l = (SNAPSHOT*) (0x00);
(*((*argp).t)).clih.t = (SNAPSHOT*) (0x00);
(*((*argp).t)).clih.b = (SNAPSHOT*) (0x00);
}

if(quit) return(0x01);

/* and registre parameters of the delegate list - argp - in the CMDLN_STAT structure */
r = cipher_embed((*argp).init_p,BUFF);
if(r^(BUFF)) printf("<< Error at fn. cipher_embed()");

if((*argp).insert) r = cpy((*argp).init_p,(*argp).craft);
else r = cpy((*argp).init_p,(*((*argp).t)).p);

(*argp).p = ((*argp).init_p);
(*argp).count = (0x00);
(*argp).tail = (r);


/* clear/refresh the console screen at the current - i.e., at the new row after inserting - caret position */

/* Attention: Implement a function similar to system("cls") to clear the console screen at the caret position.
if((*argp).insert) {
r = refresh_screen_at_the_caret_pos((*argp).t,argp);
if(!r) printf("%s", "<< Error at fn. refresh_screen_at_the_caret_pos()");
}
//*/

/* ..or to more speedy clear and overwrite..
if((*argp).insert) {
r = c_outll(argp);
if(!r) printf("%s", "<< Error at fn. c_outll()");
}
//*/


// Refer at fn. cmdln_ctrl_d, fn. cmdln_ctrl_n or..

if((*argp).insert) {
r = qsync_beta((*argp).t,argp);
if(!r) {
printf("%s", "<< Error at fn. qsync_beta()");
return(0x00);
}}


/* to debug */
if(C_DBG) r = debug_monitor(argp);

return(0x01+(vu_gate_beta_internal(argp)));
}
