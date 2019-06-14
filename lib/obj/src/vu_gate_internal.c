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

auto KNOT(*cch);

auto signed(cache), (i), (r);
auto signed(c);
// auto unsigned(c);

auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

// Sleep(3000);

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

if(quit) return(0x01);

else XOR(terminate,terminate);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
(*argp).depart.X = ((*argp).csbi.dwCursorPosition.X);
(*argp).depart.Y = ((*argp).csbi.dwCursorPosition.Y);
}

// for CLI History
(*argp).clih.l = (SNAPSHOT*) (0x00);
(*argp).clih.b = (SNAPSHOT*) (0x00);
// Temporary
(*argp).clih.t = (SNAPSHOT*) (0x00);

(*argp).hist = (signed short) (0x00);

// recursively read keys
r = vu_internal(argp);

if(!r) {
printf("%s\n", "<< Error at fn. vu_internal()");
return(0x00);
}

if(debugging) (*argp).recurred = (r);

// Build a linked list
cch = (KNOT*) malloc(0x01*(sizeof(KNOT)));
if(!cch) {
printf("%s\n", "<< Error at fn. malloc()");
return(0x00);
}

r = concat2ll(cch,&((*argp).l),&((*argp).b));
if(!r) {
printf("%s\n", "<< Error at fn. concat2ll()");
return(0x00);
}

r = ct((*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) {
printf("%s\n", "<< Error at fn. concat2ll()");
return(0x00);
}
//*/

INC(r);

(*cch).p = (signed char(*)) malloc(r*(sizeof(signed char)));

if(!r) {
printf("%s\n", "<< Error at fn. malloc() the second");
return(0x00);
}

r = cpy((*cch).p,(*argp).init_p);

/* It is empty ..or has occurred an error.
if(!r) {
printf("%s\n", "<< Error at fn. cpy()");
return(0x00);
}
//*/

// to move the caret up or down on console screen
r = ct_txt(ALIGN_TAB,(*argp).init_p);

(*cch).length_with_ht = (r);

if(debugging) (*argp).length_with_ht = (r);

// connect the history into the knot structure
(*cch).clih.l = ((*argp).clih.l);
(*cch).clih.b = ((*argp).clih.b);

// to the next line
printf("\n");


/* Unmap
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
