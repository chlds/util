/* **** Notes

The n-row debug monitor

Remarks:
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define CLI_MACRO
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_debug_monitor_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short nrows = (CLI_HEADER_HEIGHT+(0x03));

auto CLI_COORD coord[0x03];
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

R(y,*(coord+(CLI_INDEX))) = (R(Y,R(dwCursorPosition,R(csbi,*argp))));
R(x,*(coord+(CLI_INDEX))) = (R(X,R(dwCursorPosition,R(csbi,*argp))));

R(y,*(coord+(CLI_OFFSET))) = (R(Top,R(srWindow,R(csbi,*argp))));
R(x,*(coord+(CLI_OFFSET))) = (0x00);

R(y,*(coord+(CLI_BASE))) = (nrows+(R(Top,R(srWindow,R(csbi,*argp)))));
R(x,*(coord+(CLI_BASE))) = (0x00);

r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
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

// Workspace
printf("%s\n","Workspace at R(ty,*argp");
printf("%d%s",R(flag,R(ty,*argp))," at R(flag, | ");
printf("%d%s",R(append,R(ty,*argp))," at R(append, | ");
printf("%d%s",R(linebreak,R(ty,*argp))," at R(linebreak, | ");
printf("%d%s\n",R(linebreak_form,R(ty,*argp))," at R(linebreak_form,");

// Gauges
printf("%d%s\n",R(gauge,R(debug,R(ty,*argp)))," at R(gauge,R(debug,");
printf("%d%s\n",R(gauge,R(ty,*argp))," at R(gauge, (updated by fn. calls but always monitored)");
printf("%d%s\n",R(size,R(roll,R(ty,*argp)))," at R(size,R(roll,");

// Addresses
printf("%p%s\n",R(cur,R(debug,R(ty,*argp)))," at R(cur,R(debug,");
printf("%p%s\n",*(CLI_INDEX+(R(cur,R(ty,*argp))))," at *(CLI_INDEX+(R(cur, (updated by fn. calls but always monitored)");
printf("%p%s\n",*(CLI_OFFSET+(R(cur,R(ty,*argp))))," at *(CLI_OFFSET+(R(cur,");
printf("%p%s\n",*(CLI_BASE+(R(cur,R(ty,*argp))))," at *(CLI_BASE+(R(cur,");
printf("%p%s\n",*(CLI_BASE+(R(base,R(roll,R(ty,*argp)))))," at *(CLI_BASE+(R(base,R(roll,");
printf("%p%s\n",*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp)))))," at *(CLI_OFFSET+(R(base,R(roll,");
printf("%p%s\n",*(CLI_INDEX+(R(base,R(roll,R(ty,*argp)))))," at *(CLI_INDEX+(R(base,R(roll,");

// Concatenated pages
printf("%s\n","Pages at R(spool,R(ty,*argp");
printf("%p%s",*(CLI_BASE+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_BASE+(R(page, | ");
printf("%d%s%d\n",\
R(x,*(CLI_BASE+(R(coord,**(CLI_BASE+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(y,*(CLI_BASE+(R(coord,**(CLI_BASE+(R(page,R(spool,R(ty,*argp)))))))))\
);
printf("%p%s",*(CLI_OFFSET+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_OFFSET+(R(page, | ");
printf("%d%s%d\n",\
R(x,*(CLI_BASE+(R(coord,**(CLI_OFFSET+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(y,*(CLI_BASE+(R(coord,**(CLI_OFFSET+(R(page,R(spool,R(ty,*argp)))))))))\
);
printf("%p%s",*(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_INDEX+(R(page, | ");
printf("%d%s%d\n",\
R(x,*(CLI_BASE+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(y,*(CLI_BASE+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))\
);
printf("%p%s",*(CLI_LEAD+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_LEAD+(R(page, | ");
printf("%d%s%d\n",\
R(x,*(CLI_BASE+(R(coord,**(CLI_LEAD+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(y,*(CLI_BASE+(R(coord,**(CLI_LEAD+(R(page,R(spool,R(ty,*argp)))))))))\
);
printf("%d%s\n",R(insert,R(spool,R(ty,*argp)))," at R(insert,");

// Coordinates
printf("%s\n","Coordinates at R(ty,*argp");
printf("%d%s%d%s\n",R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))),"/",R(y,*(CLI_INDEX+(R(coord,R(ty,*argp)))))," at R(x/y,*(CLI_INDEX+(R(coord,");

// Clipboard Info.
printf("%s\n","Clipboard info. at R(clipboard,R(ty,*argp");
printf("%p%s",*(CLI_BASE+(R(base,R(clipboard,R(ty,*argp)))))," at *(CLI_BASE+(R(base, | ");
printf("%zd%s",R(size,R(clipboard,R(ty,*argp)))," at R(size, | ");
printf("%d%s",R(clip,R(clipboard,R(ty,*argp)))," at R(clip, | ");
printf("%d%s\n",R(flag,R(clipboard,R(ty,*argp)))," at R(flag,");

/* fix the frame */
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_INDEX),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
