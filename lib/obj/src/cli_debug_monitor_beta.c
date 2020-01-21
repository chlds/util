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

r = cli_outs(*(CLI_LEAD+(R(base,R(roll,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_LEAD+(R(base,R(roll,R(ty,*argp is empty or..");
else printf("\n");

// Workspace
printf("%s\n","Workspace at R(ty,*argp");

r = cli_outs(*(CLI_OFFSET+(R(append,R(ty,*argp)))));
if(!r) printf("%s\n","<< *(CLI_OFFSET+(R(append, is empty or..");
else printf("\n");
r = cli_outs(*(CLI_BASE+(R(append,R(ty,*argp)))));
if(!r) printf("%s\n","<< *(CLI_BASE+(R(append, is empty or..");
else printf("\n");
printf("%p%s\n",*(CLI_BASE+(R(append,R(ty,*argp))))," at *(CLI_BASE+(R(append,");
printf("%p%s\n",*(CLI_OFFSET+(R(append,R(ty,*argp))))," at *(CLI_OFFSET+(R(append,");
printf("%p%s\n",*(CLI_INDEX+(R(append,R(ty,*argp))))," at *(CLI_INDEX+(R(append,");
printf("%p%s\n",*(CLI_LEAD+(R(append,R(ty,*argp))))," at *(CLI_LEAD+(R(append,");

printf("%p%s\n",*(CLI_LEAD+(R(append,R(commandline,R(ty,*argp)))))," at *(CLI_LEAD+(R(append,R(commandline,");
printf("%p%s\n",*(CLI_INDEX+(R(append,R(commandline,R(ty,*argp)))))," at *(CLI_INDEX+(R(append,R(commandline,");
printf("%p%s\n",*(CLI_OFFSET+(R(append,R(commandline,R(ty,*argp)))))," at *(CLI_OFFSET+(R(append,R(commandline,");
printf("%p%s\n",*(CLI_BASE+(R(append,R(commandline,R(ty,*argp)))))," at *(CLI_BASE+(R(append,R(commandline,");
r = cli_outs(*(CLI_BASE+(R(append,R(commandline,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_BASE+(R(append,R(commandline, is empty or..");
else printf("\n");
r = cli_outs(*(CLI_OFFSET+(R(append,R(commandline,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_OFFSET+(R(append,R(commandline, is empty or..");
else printf("\n");

// Gauges
printf("%d%s",R(gauge,R(commandline,R(ty,*argp))),"/");
printf("%d%s",R(offset,R(commandline,R(ty,*argp))),"/");
printf("%d%s",R(linebreak,R(commandline,R(ty,*argp))),"/");
printf("%Xh%s",R(flag,R(commandline,R(ty,*argp)))," at R(gauge/R(offset/R(linebreak/R(flag, on R(commandline,");
printf("\n");

printf("%d%s",R(gauge,R(ty,*argp)),"/");
printf("%d%s",R(offset,R(ty,*argp)),"/");
printf("%d%s",R(linebreak,R(ty,*argp)),"/");
printf("%Xh%s",R(flag,R(ty,*argp)),"/");
printf("%d%s",R(align_tab,R(ty,*argp)),"/");
printf("%Xh%s",R(linebreak_form,R(ty,*argp))," at R(gauge/R(offset/R(linebreak/R(flag/R(align_tab/R(linebreak_form,");
printf("\n");

// Addresses
printf(\
"%p%s%d%s\n",\
R(cur,R(debug,R(commandline,R(ty,*argp)))),"/",\
R(gauge,R(debug,R(commandline,R(ty,*argp))))," at R(cur/gauge,R(debug,R(commandline,"\
);

printf(\
"%p%s%d%s\n",\
R(cur,R(debug,R(ty,*argp))),"/",\
R(gauge,R(debug,R(ty,*argp)))," at R(cur/gauge,R(debug,"\
);

printf("%p%s\n",*(CLI_LEAD+(R(cur,R(ty,*argp))))," at *(CLI_LEAD+(R(cur,");
printf("%p%s\n",*(CLI_INDEX+(R(cur,R(ty,*argp))))," at *(CLI_INDEX+(R(cur, (updated by fn. calls but always monitored)");
printf("%p%s\n",*(CLI_OFFSET+(R(cur,R(ty,*argp))))," at *(CLI_OFFSET+(R(cur,");
printf("%p%s\n",*(CLI_BASE+(R(cur,R(ty,*argp))))," at *(CLI_BASE+(R(cur,");

// Rolls
printf(\
"%p%s%d%s\n",\
*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),"/",\
*(CLI_BASE+(R(size,R(roll,R(ty,*argp)))))," at *(CLI_BASE+(R(base/size,R(roll,"\
);
printf(\
"%p%s%d%s\n",\
*(CLI_OFFSET+(R(base,R(roll,R(ty,*argp))))),"/",\
*(CLI_OFFSET+(R(size,R(roll,R(ty,*argp)))))," at *(CLI_OFFSET+(R(base/size,R(roll,"\
);
printf(\
"%p%s%d%s\n",\
*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))),"/",\
*(CLI_INDEX+(R(size,R(roll,R(ty,*argp)))))," at *(CLI_INDEX+(R(base/size,R(roll,"\
);
printf(\
"%p%s%d%s\n",\
*(CLI_LEAD+(R(base,R(roll,R(ty,*argp))))),"/",\
*(CLI_LEAD+(R(size,R(roll,R(ty,*argp)))))," at *(CLI_LEAD+(R(base/size,R(roll,"\
);

// Concatenated pages
printf("%s","Pages: ");
printf("%d%s",R(offset,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))),"/");
printf("%d%s",R(insert,R(spool,R(ty,*argp))),"/");
printf("%d%s",R(undo,R(spool,R(ty,*argp))),"/");
printf("%d%s",R(redo,R(spool,R(ty,*argp)))," ");
printf("%s","at R(offset,**(CLI_INDEX+(R(page/R(insert/R(undo/R(redo, on R(spool,R(ty,*argp");
printf("\n");

printf("%p%s",*(CLI_BASE+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_BASE+(R(page, | ");
printf(\
"%d%s%d\n",\
R(x,*(CLI_BASE+(R(coord,**(CLI_BASE+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(y,*(CLI_BASE+(R(coord,**(CLI_BASE+(R(page,R(spool,R(ty,*argp)))))))))\
);
printf("%p%s",*(CLI_OFFSET+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_OFFSET+(R(page, | ");
printf(\
"%d%s%d\n",\
R(x,*(CLI_BASE+(R(coord,**(CLI_OFFSET+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(y,*(CLI_BASE+(R(coord,**(CLI_OFFSET+(R(page,R(spool,R(ty,*argp)))))))))\
);
printf("%p%s",*(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_INDEX+(R(page, | ");
printf(\
"%d%s%d\n",\
R(x,*(CLI_BASE+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(y,*(CLI_BASE+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))\
);
printf("%p%s",*(CLI_LEAD+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_LEAD+(R(page, | ");
printf(\
"%d%s%d\n",\
R(x,*(CLI_BASE+(R(coord,**(CLI_LEAD+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(y,*(CLI_BASE+(R(coord,**(CLI_LEAD+(R(page,R(spool,R(ty,*argp)))))))))\
);

// Snapshots
printf("%s","Snapshots: ");

if(*(CLI_INDEX+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))) {
printf("%d%s",R(offset,**(CLI_INDEX+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))),"/");
printf("%d%s",R(insert,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))),"/");
printf("%d%s",R(undo,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))),"/");
printf("%d%s",R(redo,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))," ");
printf("%s","at R(offset,**(CLI_INDEX+(R(snapshot/R(insert/R(undo/R(redo, on R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp");
}

printf("\n");

printf("%p%s\n",*(CLI_BASE+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))," at *(CLI_BASE+(R(snapshot, | ");
printf("%p%s\n",*(CLI_OFFSET+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))," at *(CLI_OFFSET+(R(snapshot, | ");
printf("%p%s\n",*(CLI_INDEX+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))," at *(CLI_INDEX+(R(snapshot, | ");
printf("%p%s\n",*(CLI_LEAD+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))," at *(CLI_LEAD+(R(snapshot, | ");

// Coordinates
printf("%s\n","Coordinates at R(ty,*argp");
printf("%d%s%d%s",R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))),"/",R(y,*(CLI_INDEX+(R(coord,R(ty,*argp)))))," at R(x/y,*(CLI_INDEX+(R(coord, | ");
printf(\
"%d%s%d%s\n",\
R(x,*(CLI_BASE+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(y,*(CLI_BASE+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))," at R(x/y,*(CLI_BASE+(R(coord,**(CLI_INDEX+(R(page,R(spool,"\
);

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
