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

auto KNOT(*cch);

auto signed char(command_buff[COMMAND_BUFF]) = {
(signed char) (0x00)
};

auto signed char(board[BUFF]) = {
(signed char) (0x00)
};

auto signed char(buff[BUFF]) = {
(signed char) (0x00)
};

auto signed char(snap[BUFF]) = {
(signed char) (0x00)
};

auto COORD(coord);
auto signed(cache), (i), (r);
auto signed(c);
// auto unsigned(c);

auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
coord.X = ((*argp).csbi.dwCursorPosition.X);
coord.Y = ((*argp).csbi.dwCursorPosition.Y);
}

if(terminate) return(0x01);

// Sleep(3000);
// system("cls");

/* Initialise the global delegate list - argp - in the CMDLN_STAT structure */

/* for command mode */
(*argp).cmd_io.c = (signed) (0x00);
(*argp).cmd_io.p = (command_buff); // the leading address
(*argp).cmd_io.caret = (command_buff); // the current caret position pointer
(*argp).cmd_io.limit = (COMMAND_BUFF);
(*argp).cmd_io.count = (0x00);
(*argp).cmd_io.tail = (0x00);
(*argp).cmd_io.recurred = (0x00);

(*argp).init_p = (buff);
(*argp).clip = (board);
(*argp).craft = (snap);
(*argp).limit = (BUFF);

(*argp).p = ((*argp).init_p);
(*argp).count = (0x00);
(*argp).tail = (0x00);

(*argp).l = (KNOT*) (0x00);
(*argp).b = (KNOT*) (0x00);
(*argp).t = (KNOT*) (0x00);

//* e.g., refer at incl/ll.h
(*argp).doubly.l = (KNOT*) (0x00);
(*argp).doubly.t = (KNOT*) (0x00);
(*argp).doubly.b = (KNOT*) (0x00);
//*/

// Coordinates
(*argp).caret_pos.X = (coord.X);
(*argp).caret_pos.Y = (coord.Y);
(*argp).depart.X = (coord.X);
(*argp).depart.Y = (coord.Y);

(*argp).filename = (signed char(*)) (0x00);
(*argp).overwrite = (0x00);

// for CLI History
(*argp).clih.l = (SNAPSHOT*) (0x00);
(*argp).clih.b = (SNAPSHOT*) (0x00);
(*argp).clih.t = (SNAPSHOT*) (0x00); // Temporary

// flag to take a snapshot for the CLI history
// refer at fn. cmdln_ctrl_w_prep, also at fn. cmdln_ctrl_l/rbracket, cmdln_undo, cmdln_redo and cmdln_history
(*argp).hist = (signed short) (0x00);

/* for debugging */
(*argp).length_with_ht = (0x00);
// referred to descend or ascend the caret position
(*argp).recurred = (0x00);
(*argp).repeat = (0x00);
(*argp).embedded = (0x00);
(*argp).copied = (0x00);
// by fn. cmdln_ctrl_k
(*argp).char_output = (0x00);
// by fn. c_out

// recursively read keys
r = vu_gate_internal(argp);

if(!r) {
printf("%s\n", "<< Error at fn. vu_gate_internal()");
return(0x00);
}

else {
printf("\n");
printf("%d%s\n", r, " times recurred by fn. vu_gate_internal()");
}

//* Optional
r = cmdln_output(argp);
printf("%s%d%s\n", "Output ", r, " contents.");
//*/

/* Unmap */
r = cmdln_unmap(argp);

printf("%s%d%s\n", "Unmapped ", r, " knots.");

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
