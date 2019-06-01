/* **** Notes

Read and write on the CUI

Remarks:
UN-COMPLETED
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
extern signed(quit_vu);
extern signed(terminate);

auto KNOT(*cache);

auto signed char(board[BUFF]) = {
(signed char) (0x00)
};

auto signed char(buff[BUFF]) = {
(signed char) (0x00)
};

auto signed char(snap[BUFF]) = {
(signed char) (0x00)
};

auto signed(i), (r);
auto signed short(flag);
auto signed char(c);
// auto unsigned char(c);

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

r = current_caret_pos(argp);

if(!r) {
printf("<< Error at fn. current_caret_pos()");
return(0x00);
}

else {
(*argp).depart.X = ((*argp).csbi.dwCursorPosition.X);
(*argp).depart.Y = ((*argp).csbi.dwCursorPosition.Y);
}

/* Monitor
printf("%s%d\n", "Curr. X: ", (*argp).csbi.dwCursorPosition.X);
printf("%s%d\n", "Curr. Y: ", (*argp).csbi.dwCursorPosition.Y);
//*/

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


//* Monitor
printf("\n");
printf("%s\n", "Monitoring:");
printf("%s%02Xh\n", "(*argp).c is: ", (*argp).c);

printf("\n");
printf("%s%02Xh\n", "*((*argp).init_p+((*argp).count)) is: ", *((*argp).init_p+((*argp).count)));
printf("%s%02Xh\n", "*(buff+((*argp).count))           is: ", *(buff+((*argp).count)));
printf("%s%02Xh\n", "*((*argp).p)                      is: ", *((*argp).p));
printf("%s%02Xh\n", "*(buff+((*argp).tail))            is: ", *(buff+((*argp).tail)));
printf("%s%02Xh\n", "*((*argp).init_p+((*argp).tail))  is: ", *((*argp).init_p+((*argp).tail)));

printf("\n");
printf("%s%s\n", "cmdln_stat.p      is: ", (*argp).p);
printf("%s%p\n", "cmdln_stat.p      is: ", (*argp).p);

printf("\n");
printf("%s%s\n", "cmdln_stat.init_p is: ", (*argp).init_p);
printf("%s%p\n", "cmdln_stat.init_p is: ", (*argp).init_p);
printf("%s%s\n", "buff              is: ", buff);
printf("%s%p\n", "buff              is: ", buff);

printf("\n");
printf("%s%s\n", "cmdln_stat.clip   is: ", (*argp).clip);
printf("%s%p\n", "cmdln_stat.clip   is: ", (*argp).clip);
printf("%s%s\n", "board             is: ", board);
printf("%s%p\n", "board             is: ", board);

printf("\n");
printf("%s%s\n", "cmdln_stat.craft  is: ", (*argp).craft);
printf("%s%p\n", "cmdln_stat.craft  is: ", (*argp).craft);
printf("%s%s\n", "snap              is: ", snap);
printf("%s%p\n", "snap              is: ", snap);

printf("\n");
r = ct((*argp).p);       printf("%s%d%s%Xh\n", "r = ct((*argp).p)       is: ", r, " or ", r);
r = ct((*argp).init_p);  printf("%s%d%s%Xh\n", "r = ct((*argp).init_p)  is: ", r, " or ", r);
r = ct(buff);            printf("%s%d%s%Xh\n", "r = ct(buff)            is: ", r, " or ", r);
r = ct((*argp).clip);    printf("%s%d%s%Xh\n", "r = ct((*argp).clip)    is: ", r, " or ", r);
r = ct(board);           printf("%s%d%s%Xh\n", "r = ct(board)           is: ", r, " or ", r);
r = ct((*argp).craft);   printf("%s%d%s%Xh\n", "r = ct((*argp).craft)   is: ", r, " or ", r);
r = ct(snap);            printf("%s%d%s%Xh\n", "r = ct(snap)            is: ", r, " or ", r);

printf("\n");
printf("%s%d%s%Xh\n", "(*argp).count  is: ", (*argp).count, " or ", (*argp).count);
printf("%s%d%s%Xh\n", "(*argp).tail   is: ", (*argp).tail, " or ", (*argp).tail);
printf("%s%d%s%Xh\n", "(*argp).limit  is: ", (*argp).limit, " or ", (*argp).limit);
printf("%s%p\n", "(*argp).s_in   is: ", (*argp).s_in);
printf("%s%p\n", "(*argp).s_out  is: ", (*argp).s_out);
printf("%s%p\n", "(*argp).s_err  is: ", (*argp).s_err);
//*/


return(0x01);
}
