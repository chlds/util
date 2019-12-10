/* **** Notes

The n-row debug monitor

Remarks:
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define R(D,S) (S).D
# define N_ROWS (0x13)

# include <stdio.h>
# include "../../../incl/cli_w32.h"

signed(__cdecl cli_debug_monitor_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];

auto signed i,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}

R(x,*(coord+(CLI_BASE))) = (R(X,R(dwCursorPosition,R(csbi,*argp))));
R(y,*(coord+(CLI_BASE))) = (R(Y,R(dwCursorPosition,R(csbi,*argp))));

r = (N_ROWS);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
R(y,*(coord+(CLI_OFFSET))) = (-r+(R(Bottom,R(srWindow,R(csbi,*argp)))));

r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = cli_clear_rows_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}

/* output */
i = (0x01+((*argp).csbi.srWindow.Right));

while(i) {
r = _putch('*');
--i;
}

/* monitor */
r = cli_outs(*(CLI_BASE+(R(base,R(paper,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_BASE+(R(base,R(paper,R(ty,*argp is empty or..");
else printf("\n");

r = cli_outs(*(CLI_OFFSET+(R(base,R(paper,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_OFFSET+(R(base,R(paper,R(ty,*argp is empty or..");
else printf("\n");

r = cli_outs(*(CLI_INDEX+(R(base,R(paper,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_INDEX+(R(base,R(paper,R(ty,*argp is empty or..");
else printf("\n");

// Ink level indicator
printf("%d%s\n",R(ink_level,R(debug,R(ty,*argp)))," at (R(ink_level,R(debug,R(ty,*argp");
printf("%d%s\n",R(ink_level,R(ty,*argp))," at (R(ink_level,R(ty,*argp");
printf("%d%s\n",R(ink,R(ty,*argp))," at (R(ink,R(ty,*argp");

// Append and linebreak
printf("%d%s",R(append,R(ty,*argp))," at (R(append,R(ty,*argp | ");
printf("%d%s\n",R(linebreak,R(ty,*argp))," at (R(linebreak,R(ty,*argp");

// Workspace
printf("%s\n","Paper");
printf("%p%s\n",R(cur,R(debug,R(ty,*argp)))," at (R(cur,R(debug,R(ty,*argp");
printf("%p%s\n",R(cur,R(ty,*argp))," at (R(cur,R(ty,*argp");
printf("%p%s\n",*(CLI_BASE+(R(base,R(paper,R(ty,*argp)))))," at (*(CLI_BASE+(R(base,R(paper,R(ty,*argp");
printf("%p%s\n",*(CLI_OFFSET+(R(base,R(paper,R(ty,*argp)))))," at (*(CLI_OFFSET+(R(base,R(paper,R(ty,*argp");
printf("%p%s\n",*(CLI_INDEX+(R(base,R(paper,R(ty,*argp)))))," at (*(CLI_INDEX+(R(base,R(paper,R(ty,*argp");
// Concatenated pages
printf("%s\n","Pages");
printf("%p%s\n",*(CLI_BASE+(R(page,R(spool,R(paper,R(ty,*argp))))))," at *(CLI_BASE+(R(page,R(spool,R(paper,R(ty,*argp");
printf("%p%s\n",*(CLI_OFFSET+(R(page,R(spool,R(paper,R(ty,*argp))))))," at *(CLI_OFFSET+(R(page,R(spool,R(paper,R(ty,*argp");
printf("%p%s\n",*(CLI_INDEX+(R(page,R(spool,R(paper,R(ty,*argp))))))," at *(CLI_INDEX+(R(page,R(spool,R(paper,R(ty,*argp");
printf("%p%s\n",*(CLI_LEAD+(R(page,R(spool,R(paper,R(ty,*argp))))))," at *(CLI_LEAD+(R(page,R(spool,R(paper,R(ty,*argp");

/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
