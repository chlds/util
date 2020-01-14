/*

Typewriter
*/


# define CLI_MACRO
# define CLI_W32

# define THRESHOLD (0x02)

# include "../../../incl/config_ty.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

/* **** DATA, BSS and STACK */
auto CLI_W32_STAT cli_w32_stat = {
(0x00),
};

auto signed char name[CLI_NAME] = {
(signed char) (0x00),
};

auto signed long long ll;
auto signed short *config,*edit;
auto signed char *cur,*p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
R(file,R(config,R(ty,cli_w32_stat))) = (0x00);
R(size,R(config,R(ty,cli_w32_stat))) = (0x00);
R(fd,R(config,R(ty,cli_w32_stat))) = (0x00);

R(file,R(edit,R(ty,cli_w32_stat))) = (0x00);
R(size,R(edit,R(ty,cli_w32_stat))) = (0x00);
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

if(config) {
r = encode2b(CLI_NAME,name,config);
if(!r) {
printf("%s\n","<< Error at fn. encode2b()");
return(0x00);
}
r = keep(&(R(file,R(config,R(ty,cli_w32_stat)))),name);
if(!r) {
printf("%s\n","<< Error at fn. keep()");
return(0x00);
}}

if(edit) {
r = encode2b(CLI_NAME,name,edit);
if(!r) {
printf("%s\n","<< Error at fn. encode2b()");
return(0x00);
}
r = keep(&(R(file,R(edit,R(ty,cli_w32_stat)))),name);
if(!r) {
printf("%s\n","<< Error at fn. keep()");
return(0x00);
}}


// Parse a config file
r = cli_parse(&(R(ty,cli_w32_stat)));
if(!r) {
printf("%s\n","<< Error at fn. cli_parse()");
return(0x00);
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

/*
r = cli_load(&(R(ty,cli_w32_stat)));
if(!r) {
printf("%s\n","<< Error at fn. cli_load()");
return(0x00);
}
//*/


Sleep(1000);
system("cls");


r = cli_display_header(&(R(ty,cli_w32_stat)));
if(!r) {
printf("%s\n","<< Error at fn. cli_display_header()");
return(0x00);
}

if(R(fd,R(edit,R(ty,cli_w32_stat)))) {
r = cli_output_pages_beta(0x01/* connect with workspace */,*(CLI_BASE+(R(page,R(spool,R(ty,cli_w32_stat))))),&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_output_pages_beta()");
return(0x00);
}}

r = cli_spool_beta(&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_spool_beta()");
return(0x00);
}

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

p = (R(file,R(config,R(ty,cli_w32_stat))));
if(p) free(p);
p = (0x00);
R(file,R(config,R(ty,cli_w32_stat))) = (0x00);

p = (R(file,R(edit,R(ty,cli_w32_stat))));
if(p) free(p);
p = (0x00);
R(file,R(edit,R(ty,cli_w32_stat))) = (0x00);

return(0x01);
}
