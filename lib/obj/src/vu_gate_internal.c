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

auto KNOT(*cch);
auto signed(cache), (i), (r);
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

// initialise
// system("cls");

r = cipher_embed((*argp).init_p,BUFF);
if(r^(BUFF)) printf("<< Error at fn. cipher_embed()");

(*argp).p = ((*argp).init_p);
(*argp).count = (0x00);
(*argp).tail = (0x00);

/* Refer at fn. vu_gate
(*argp).init_p = (buff);
(*argp).clip = (board);
(*argp).craft = (snap);
(*argp).limit = (BUFF);
//*/

// Build a linked list (1/2)
cch = (KNOT*) malloc(0x01*(sizeof(KNOT)));
if(!cch) {
printf("%s\n", "<< Error at fn. malloc()");
return(0x00);
}

r = concat2ll(cch,argp);
if(!r) {
printf("%s\n", "<< Error at fn. concat2ll()");
return(0x00);
}
else (*argp).t = (KNOT*) ((*argp).l);

// Also
(*cch).p = (signed char(*)) (0x00);

// Initialise/update coordinates on the global delegate list - argp - in the CMDLN_STAT structure
(*argp).caret_pos.X = (coord.X);
(*argp).caret_pos.Y = (coord.Y);
(*argp).depart.X = (coord.X);
(*argp).depart.Y = (coord.Y);

// also on the current new knot
(*cch).caret_pos.X = (coord.X);
(*cch).caret_pos.Y = (coord.Y);
(*cch).depart.X = (coord.X);
(*cch).depart.Y = (coord.Y);

// initialise the CLI History on the delegate list - argp - in the CMDLN_STAT structure
(*argp).clih.l = (SNAPSHOT*) (0x00);
(*argp).clih.b = (SNAPSHOT*) (0x00);
(*argp).clih.t = (SNAPSHOT*) (0x00);

// also register on the current new knot
(*cch).clih.l = ((*argp).clih.l);
(*cch).clih.b = ((*argp).clih.b);
(*cch).clih.t = ((*argp).clih.t);

// set the CLI history flag
(*argp).hist = (signed short) (0x00);

/* update the debug monitor */
if(debugging) r = debug_monitor(argp);

/* recursively read keys */
r = vu_internal(argp);

if(!r) {
printf("%s\n", "<< Error at fn. vu_internal()");
return(0x00);
}

if(debugging) (*argp).recurred = (r);

// Build a linked list (2/2)
r = ct((*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. ct()");
//*/

INC(r);
(*cch).p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!r) {
printf("%s\n", "<< Error at fn. malloc() the second");
return(0x00);
}

r = cpy((*cch).p,(*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) printf("%s", "<< Error at fn. cpy()");
//*/

// to move the caret up or down on console screen
r = ct_txt(ALIGN_TAB,(*argp).init_p);

(*cch).length_with_ht = (r);
if(debugging) (*argp).length_with_ht = (r);

if(quit) return(0x01);

// to the next line
printf("\n");


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
