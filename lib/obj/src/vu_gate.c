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

signed(__cdecl vu_gate(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(quit);
extern signed(terminate);

auto KNOT(*cch), (*l), (*b);

auto signed char(board[BUFF]) = {
(signed char) (0x00)
};

auto signed char(buff[BUFF]) = {
(signed char) (0x00)
};

auto signed char(snap[BUFF]) = {
(signed char) (0x00)
};

auto signed(cache), (i), (r);
auto signed(c);
// auto unsigned(c);

auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(terminate) return(0x01);

// Sleep(3000);

// initialise
// system("cls");

(*argp).p = (buff);
(*argp).init_p = (buff);
(*argp).clip = (board);
(*argp).craft = (snap);

(*argp).count = (0x00);
(*argp).tail = (0x00);
(*argp).limit = (BUFF);

l = (KNOT*) (0x00);
b = (KNOT*) (0x00);

(*argp).l = (KNOT*) (l);
(*argp).b = (KNOT*) (b);

/* a loop
while(0x01) {
if(quit) break;
//*/

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

else {
printf("\n");
printf("%d%s\n", r, " times recurred by fn. vu_internal()");
}


// Build a linked list

// }

// Unmap

// Aux. History
r = cmdln_output_history(argp);
if(!r) printf("%s\n", "<< It is empty ..or has occurred an error at fn. cmdln_output_history()");
printf("%s%d%s\n", "Output ", r, " histories.");

// And Unmap all the CLI History
r = cmdln_unmap_history(argp);
if(!r) printf("%s\n", "<< It is empty ..or has occurred an error at fn. cmdln_unmap_history()");
printf("%s%d%s\n", "Unmapped ", r, " histories.");

//* Monitor
printf("\n");
printf("%s\n", "Monitoring:");
printf("%s%02Xh\n", "*((*argp).init_p+((*argp).count)) is: ", *((*argp).init_p+((*argp).count)));
printf("%s%02Xh\n", "*(buff+((*argp).count))           is: ", *(buff+((*argp).count)));
printf("%s%02Xh\n", "*((*argp).p)                      is: ", *((*argp).p));
printf("%s%02Xh\n", "*(buff+((*argp).tail))            is: ", *(buff+((*argp).tail)));
printf("%s%02Xh\n", "*((*argp).init_p+((*argp).tail))  is: ", *((*argp).init_p+((*argp).tail)));

printf("\n");
printf("%s%p%s%s\n", "cmdln_stat.p      at ", (*argp).p, ", ", (*argp).p);
printf("%s%p%s%s\n", "cmdln_stat.init_p at ", (*argp).init_p, ", ", (*argp).init_p);
printf("%s%p%s%s\n", "buff              at ", buff, ", ", buff);

printf("\n");
printf("%s%p%s%s\n", "cmdln_stat.clip   at ", (*argp).clip, ", ", (*argp).clip);
printf("%s%p%s%s\n", "board             at ", board, ", ", board);

printf("\n");
printf("%s%p%s%s\n", "cmdln_stat.craft  at ", (*argp).craft, ", ", (*argp).craft);
printf("%s%p%s%s\n", "snap              at ", snap, ", ", snap);

printf("\n");
r = ct((*argp).p);       printf("%s%d%s%Xh\n", "r = ct((*argp).p)       is: ", r, " or ", r);
r = ct((*argp).init_p);  printf("%s%d%s%Xh\n", "r = ct((*argp).init_p)  is: ", r, " or ", r);
r = ct(buff);            printf("%s%d%s%Xh\n", "r = ct(buff)            is: ", r, " or ", r);
r = ct((*argp).clip);    printf("%s%d%s%Xh\n", "r = ct((*argp).clip)    is: ", r, " or ", r);
r = ct(board);           printf("%s%d%s%Xh\n", "r = ct(board)           is: ", r, " or ", r);
r = ct((*argp).craft);   printf("%s%d%s%Xh\n", "r = ct((*argp).craft)   is: ", r, " or ", r);
r = ct(snap);            printf("%s%d%s%Xh\n", "r = ct(snap)            is: ", r, " or ", r);

printf("\n");
printf("%s%4d%s%4d%s%4Xh\n", "(*argp).count, .tail and .limit: ", (*argp).count, ", ", (*argp).tail, " and ", (*argp).limit);
//*/


return(0x01);
}
