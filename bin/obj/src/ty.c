/*

Typewriter
*/


# define CBR
# define CLI_W32

# define THRESHOLD (0x02)

# include "../../../lib/incl/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

/* **** DATA, BSS and STACK */
auto CLI_W32_STAT cli_w32_stat = {
(0x00),
};

auto cli_page_t *page;
auto signed long long ll;
auto signed short *config,*edit;
auto signed char *cur,*p;
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
R(file,R(config,R(ty,cli_w32_stat))) = (0x00);
R(l,R(config,R(ty,cli_w32_stat))) = (0x00);
R(size,R(config,R(ty,cli_w32_stat))) = (0x00);
R(modified,R(config,R(ty,cli_w32_stat))) = (0x00);
R(fd,R(config,R(ty,cli_w32_stat))) = (0x00);
// also
R(compact_frame,R(config,R(ty,cli_w32_stat))) = (CLI_DEFAULT);
R(display_header,R(config,R(ty,cli_w32_stat))) = (CLI_DEFAULT);
R(end_of_roll,R(config,R(ty,cli_w32_stat))) = (CLI_ROWS);
R(load_file,R(config,R(ty,cli_w32_stat))) = (0x01);
R(debug_monitor,R(config,R(ty,cli_w32_stat))) = (CLI_DEFAULT);
R(wrap_words,R(config,R(ty,cli_w32_stat))) = (CLI_DEFAULT);
R(align_tab,R(config,R(ty,cli_w32_stat))) = (ALIGN_TAB);
R(linebreak_form,R(config,R(ty,cli_w32_stat))) = (LINEBREAK_CRLF);

R(file,R(edit,R(ty,cli_w32_stat))) = (0x00);
R(l,R(edit,R(ty,cli_w32_stat))) = (0x00);
R(size,R(edit,R(ty,cli_w32_stat))) = (0x00);
R(modified,R(edit,R(ty,cli_w32_stat))) = (0x00);
R(fd,R(edit,R(ty,cli_w32_stat))) = (0x00);


cur = (0x00);
p = (0x00);
config = (0x00);
edit = (0x00);
i = (argc);

if(!(i^(THRESHOLD))) edit = (*(argv+(--i)));

if(THRESHOLD<(i)) {
edit = (*(argv+(--i)));
config = (*(argv+(--i)));
}

AND(flag,0x00);
b = (0x00);
if(config) {
r = cv_bw(&b,config);
if(!r) {
printf("%s \n","<< Error at fn. cv_bw()");
return(0x00);
}
r = keep(&(R(file,R(config,R(ty,cli_w32_stat)))),b);
if(!r) {
printf("%s \n","<< Error at fn. keep()");
rl(b);
return(0x00);
}
R(l,R(config,R(ty,cli_w32_stat))) = (r);
}

b = (0x00);
if(edit) {
r = cv_bw(&b,edit);
if(!r) {
printf("%s \n","<< Error at fn. cv_bw()");
rl(R(file,R(config,R(ty,cli_w32_stat))));
return(0x00);
}
r = keep(&(R(file,R(edit,R(ty,cli_w32_stat)))),b);
if(!r) {
printf("%s \n","<< Error at fn. keep()");
rl(b);
rl(R(file,R(config,R(ty,cli_w32_stat))));
return(0x00);
}
R(l,R(edit,R(ty,cli_w32_stat))) = (r);
}


r = cli_init_ty(CLI_BUFF,&(R(ty,cli_w32_stat)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_ty()");
return(0x00);
}

r = cli_init_stat_beta(&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_stat_beta()");
return(0x00);
}

// Parse a config file
r = cli_parse(&(R(ty,cli_w32_stat)));
if(!r) {
printf("%s\n","<< Error at fn. cli_parse()");
return(0x00);
}

r = cli_frame_beta(&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_frame_beta()");
return(0x00);
}

if(R(load_file,R(config,R(ty,cli_w32_stat)))) {
r = cli_load(&(R(ty,cli_w32_stat)));
if(!r) {
printf("%s\n","<< Error at fn. cli_load()");
return(0x00);
}}

if(CLI_DBG) Sleep(1000);

system("cls");

if(CLI_NONE^(R(display_header,R(config,R(ty,cli_w32_stat))))) {
r = cli_display_header_beta(&(R(ty,cli_w32_stat)));
if(!r) {
printf("%s \n","<< Error at fn. cli_display_header_beta()");
return(0x00);
}}

if(R(fd,R(edit,R(ty,cli_w32_stat)))) {
page = (*(CLI_BASE+(R(page,R(spool,R(ty,cli_w32_stat))))));
flag = (CG_COMEBACK|CG_CLEAR|CG_EMUL);
r = cli_coord_output_pages_beta(flag,page,&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_output_pages_beta()");
return(0x00);
}
r = cli_connect_with_workspace(page,&(R(ty,cli_w32_stat)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}}

r = cli_spool_beta(&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_spool_beta()");
return(0x00);
}

system("cls");

r = cli_unmap_pages(&(R(spool,R(ty,cli_w32_stat))));
if(!r) {
printf("%s\n","<< Error at fn. cli_unmap_pages()");
return(0x00);
}

if(CLI_DBG) {
if(!(0x01^(r))) printf("%s\n","Unmapped 1 page");
else printf("%s%d%s\n","Unmapped ",r," pages");
}

r = cli_unmap_rolls(&(R(roll,R(ty,cli_w32_stat))));
if(!r) {
printf("%s\n","<< Error at fn. cli_unmap_rolls()");
return(0x00);
}

if(CLI_DBG) printf("%s%d%s\n","Unmapped ",r," rolls");

AND(flag,0x00);
if(R(file,R(config,R(ty,cli_w32_stat)))) {
r = (R(l,R(config,R(ty,cli_w32_stat))));
r = release(r,&(R(file,R(config,R(ty,cli_w32_stat)))));
if(!r) {
printf("%s\n","<< Error at fn. release()");
OR(flag,0x01);
}
if(CLI_DBG) printf("%s%d%s\n","Unmapped ",r," bytes for a config file name");
R(l,R(config,R(ty,cli_w32_stat))) = (0x00);
}

if(R(file,R(edit,R(ty,cli_w32_stat)))) {
r = (R(l,R(edit,R(ty,cli_w32_stat))));
r = release(r,&(R(file,R(edit,R(ty,cli_w32_stat)))));
if(!r) {
printf("%s\n","<< Error at fn. release()");
return(0x00);
}
if(CLI_DBG) printf("%s%d%s\n","Unmapped ",r," bytes for a file name");
R(l,R(edit,R(ty,cli_w32_stat))) = (0x00);
}

if(flag) return(0x00);

return(0x00);
}
