/* **** Notes

The n-row debug monitor

Remarks:
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define CLI_W32
# define R(D,S) (S).D
# define N_ROWS (0x17)

# include <stdio.h>
# include "../../../incl/config_ty.h"

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
r = cli_outs(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_BASE+(R(base,R(roll,R(ty,*argp is empty or..");
else printf("\n");

r = cli_outs(*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_OFFSET+(R(base,R(roll,R(ty,*argp is empty or..");
else printf("\n");

r = cli_outs(*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_INDEX+(R(base,R(roll,R(ty,*argp is empty or..");
else printf("\n");

// Gauge for rolls
printf("%d%s\n",R(gauge,R(debug,R(ty,*argp)))," at (R(gauge,R(debug,R(ty,*argp");
printf("%d%s\n",R(gauge,R(ty,*argp))," at (R(gauge,R(ty,*argp (updated by fn. calls but always monitored)");
printf("%d%s\n",R(size,R(roll,R(ty,*argp)))," at (R(size,R(roll,R(ty,*argp");

// Append and linebreak
printf("%d%s",R(append,R(ty,*argp))," at (R(append,R(ty,*argp | ");
printf("%d%s",R(linebreak,R(ty,*argp))," at (R(linebreak,R(ty,*argp | ");
printf("%d%s\n",R(linebreak_form,R(ty,*argp))," at (R(linebreak_form,R(ty,*argp");

// Workspace
printf("%s\n","Rolls");
printf("%p%s\n",R(cur,R(debug,R(ty,*argp)))," at (R(cur,R(debug,R(ty,*argp");
printf("%p%s\n",*(CLI_INDEX+(R(cur,R(ty,*argp))))," at (*(CLI_INDEX+(R(cur,R(ty,*argp (updated by fn. calls but always monitored)");
printf("%p%s\n",*(CLI_OFFSET+(R(cur,R(ty,*argp))))," at (*(CLI_OFFSET+(R(cur,R(ty,*argp");
printf("%p%s\n",*(CLI_BASE+(R(cur,R(ty,*argp))))," at (*(CLI_BASE+(R(cur,R(ty,*argp");
printf("%p%s\n",*(CLI_BASE+(R(base,R(roll,R(ty,*argp)))))," at (*(CLI_BASE+(R(base,R(roll,R(ty,*argp");
printf("%p%s\n",*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp)))))," at (*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp");
printf("%p%s\n",*(CLI_INDEX+(R(base,R(roll,R(ty,*argp)))))," at (*(CLI_INDEX+(R(base,R(roll,R(ty,*argp");
// Concatenated pages
printf("%s\n","Pages");
printf("%p%s\n",*(CLI_BASE+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_BASE+(R(page,R(spool,R(ty,*argp");
printf("%p%s\n",*(CLI_OFFSET+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_OFFSET+(R(page,R(spool,R(ty,*argp");
printf("%p%s\n",*(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_INDEX+(R(page,R(spool,R(ty,*argp");
printf("%p%s\n",*(CLI_LEAD+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_LEAD+(R(page,R(spool,R(ty,*argp");
printf("%d%s",R(insert,R(spool,R(ty,*argp)))," at (R(insert,R(spool,R(ty,*argp");

/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
