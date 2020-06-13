/* **** Notes

The n-row debug monitor

Remarks:
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define CLI_MACRO
# define CLI_W32
# define N_ROW (0x05)

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_debug_monitor_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short n_row = (CLI_HEADER_HEIGHT+(N_ROW));

auto CLI_SNAPSHOT *snapshot;
auto CLI_PAGE *page;
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

R(y,*(coord+(CLI_BASE))) = (n_row+(R(Top,R(srWindow,R(csbi,*argp)))));
R(x,*(coord+(CLI_BASE))) = (0x00);

r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

// aux.
// r = cli_clear_rows_beta(0x01/* comeback */,argp);
r = cli_clear2_rows_beta(0x01/* comeback */,argp);
if(!r) {
// printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
printf("%s\n","<< Error at fn. cli_clear2_rows_beta()");
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

// Configure Workspace
printf("%s","Configure: ");
printf("%d%s",R(compact_frame,R(config,R(ty,*argp))),"/");
printf("%d%s",R(display_header,R(config,R(ty,*argp))),"/");
printf("%d%s",R(wrap_words,R(config,R(ty,*argp))),"/");
printf("%d%s",R(align_tab,R(config,R(ty,*argp))),"/");
printf("%Xh%s",R(linebreak_form,R(config,R(ty,*argp)))," at R(compact_frame/display_header/wrap_words/align_tab/linebreak_form,R(config,");
printf("\n");

printf("%s","Workspace: ");
printf("%d%s",R(gauge,R(ty,*argp)),"/");
printf("%d%s",R(offset,R(ty,*argp)),"/");
printf("%Xh%s",R(flag,R(ty,*argp))," at R(gauge/offset/flag,");
printf("\n");

/* temporarily disabled..
// Workspace for CL
printf("%s","Workspace: ");
printf("%d%s",R(gauge,R(commandline,R(ty,*argp))),"/");
printf("%d%s",R(offset,R(commandline,R(ty,*argp))),"/");
printf("%Xh%s",R(flag,R(commandline,R(ty,*argp)))," at R(gauge/R(offset/R(flag, | ");
printf(\
"%d%s%d%s",\
R(x,*(CLI_INDEX+(R(coord,R(commandline,R(ty,*argp)))))),\
"/",\
R(y,*(CLI_INDEX+(R(coord,R(commandline,R(ty,*argp)))))),\
" at R(x/y,*(CLI_INDEX+(R(coord, on R(commandline,R(ty,*argp"\
);
printf("\n");
//*/

// append
r = cli_outs(*(CLI_OFFSET+(R(append,R(ty,*argp)))));
if(!r) printf("%s\n","<< *(CLI_OFFSET+(R(append, is empty or..");
else printf("\n");
r = cli_outs(*(CLI_BASE+(R(append,R(ty,*argp)))));
if(!r) printf("%s\n","<< *(CLI_BASE+(R(append, is empty or..");
else printf("\n");

printf("%p%s",*(CLI_BASE+(R(append,R(ty,*argp)))),"/");
printf("%p%s",*(CLI_OFFSET+(R(append,R(ty,*argp)))),"/");
printf("%p%s",*(CLI_INDEX+(R(append,R(ty,*argp)))),"/");
printf("%p%s",*(CLI_LEAD+(R(append,R(ty,*argp))))," at *(CLI_B/O/I/L+(R(append,");
printf("\n");

printf("%p%s",*(CLI_BASE+(R(append,R(commandline,R(ty,*argp))))),"/");
printf("%p%s",*(CLI_OFFSET+(R(append,R(commandline,R(ty,*argp))))),"/");
printf("%p%s",*(CLI_INDEX+(R(append,R(commandline,R(ty,*argp))))),"/");
printf("%p%s",*(CLI_LEAD+(R(append,R(commandline,R(ty,*argp)))))," at *(CLI_B/O/I/L+(R(append,R(commandline,");
printf("\n");

r = cli_outs(*(CLI_BASE+(R(append,R(commandline,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_BASE+(R(append,R(commandline, is empty or..");
else printf("\n");
r = cli_outs(*(CLI_OFFSET+(R(append,R(commandline,R(ty,*argp))))));
if(!r) printf("%s\n","<< *(CLI_OFFSET+(R(append,R(commandline, is empty or..");
else printf("\n");

//* deprecated
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
//*/

// Coordinates
printf("%d,%d%s",R(y,*(CLI_BASE+(R(coord,R(ty,*argp))))),R(x,*(CLI_BASE+(R(coord,R(ty,*argp))))),"/");
printf("%d,%d%s",R(y,*(CLI_OFFSET+(R(coord,R(ty,*argp))))),R(x,*(CLI_OFFSET+(R(coord,R(ty,*argp))))),"/");
printf("%d,%d%s",R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))),R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))),"/");
printf("%d,%d%s",R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))),R(x,*(CLI_LEAD+(R(coord,R(ty,*argp)))))," at R(y/x,*(CLI_B/O/I/L+(R(coord,");
printf("\n");

// Addresses
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
printf("%s\n","Pages: ");
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
if(!page) printf("%s","<< No index page.. ");
else {
printf("%d%s",R(offset,*page),"/");
printf("%Xh%s",R(flag,*page)," at R(offset/flag,**(CLI_INDEX+(R(page,");
printf("\n");
printf("%d%s",R(insert,R(spool,R(ty,*argp))),"/");
printf("%d%s",R(undo,R(spool,R(ty,*argp))),"/");
printf("%d%s",R(redo,R(spool,R(ty,*argp)))," at R(insert/undo/redo,R(spool,R(ty,*argp");
}
printf("\n");

printf("%p%s",*(CLI_BASE+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_BASE+(R(page,");
i = (CLI_OBJS);
while(i) {
--i;
printf("%s%d%s%d"," | ",\
R(y,*(i+(R(coord,**(CLI_BASE+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(x,*(i+(R(coord,**(CLI_BASE+(R(page,R(spool,R(ty,*argp)))))))))\
);
}
printf("\n");

printf("%p%s",*(CLI_OFFSET+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_OFFSET+(R(page,");
i = (CLI_OBJS);
while(i) {
--i;
printf("%s%d%s%d"," | ",\
R(y,*(i+(R(coord,**(CLI_OFFSET+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(x,*(i+(R(coord,**(CLI_OFFSET+(R(page,R(spool,R(ty,*argp)))))))))\
);
}
printf("\n");

printf("%p%s",*(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_INDEX+(R(page,");
i = (CLI_OBJS);
while(i) {
--i;
printf("%s%d%s%d"," | ",\
R(y,*(i+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(x,*(i+(R(coord,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))\
);
}
printf("\n");

printf("%p%s",*(CLI_LEAD+(R(page,R(spool,R(ty,*argp)))))," at *(CLI_LEAD+(R(page,");
i = (CLI_OBJS);
while(i) {
--i;
printf("%s%d%s%d"," | ",\
R(y,*(i+(R(coord,**(CLI_LEAD+(R(page,R(spool,R(ty,*argp))))))))),"/",\
R(x,*(i+(R(coord,**(CLI_LEAD+(R(page,R(spool,R(ty,*argp)))))))))\
);
}
printf("\n");

// Snapshots
printf("%s\n","Snapshots: ");
if(!page) printf("%s","<< No index page.. ");
else {
snapshot = (*(CLI_INDEX+(R(snapshot,R(history,*page)))));
if(!snapshot) printf("%s","<< No index snapshot.. ");
else {
printf("%d%s",R(offset,*snapshot),"/");
printf("%Xh%s",R(flag,*snapshot)," at R(offset/flag,**(CLI_INDEX+(R(snapshot,");
printf("\n");
printf("%d%s",R(insert,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))),"/");
printf("%d%s",R(undo,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))),"/");
printf("%d%s",R(redo,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))," at R(insert/undo/redo,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp");
}}
printf("\n");

printf("%p%s",*(CLI_BASE+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))),"/");
printf("%p%s\n",*(CLI_OFFSET+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))),",");
printf("%p%s",*(CLI_INDEX+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))))))),"/");
printf("%p%s",*(CLI_LEAD+(R(snapshot,R(history,**(CLI_INDEX+(R(page,R(spool,R(ty,*argp)))))))))," at *(CLI_B/O/I/L+(R(snapshot,");
printf("\n");

// Clipboard Info.
printf("%s\n","Clipboard info. at R(clipboard,R(ty,*argp");
printf("%p%s",*(CLI_B+(R(base,R(clipboard,R(ty,*argp))))),"/");
printf("%p%s",*(CLI_W+(R(base,R(clipboard,R(ty,*argp)))))," at *(CLI_B/W+(R(base, | ");
printf("%zd%s",*(CLI_B+(R(size,R(clipboard,R(ty,*argp))))),"/");
printf("%zd%s",*(CLI_W+(R(size,R(clipboard,R(ty,*argp)))))," at *(CLI_B/W+(R(size, | ");
printf("%d%s",R(flag,R(clipboard,R(ty,*argp)))," at R(flag, | ");
printf("%d%s\n",R(clip,R(clipboard,R(ty,*argp)))," at R(clip,");

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
