/*

Typewriter
*/


# define CLI_W32
# define R(D,S) (S).D
// A local macro function
# define BUFF (0x100000)
// 1MiB
# define ROLLS (0x01+(0x03))
# define THRESHOLD (0x02)

# include "../../../incl/config_ty.h"

signed(__cdecl main(signed argc,signed char **argv,signed char **envp)) {

/* **** DATA, BSS and STACK */
auto signed char buff2[BUFF] = {
(0x00),
};

auto signed char buff1[BUFF] = {
(0x00),
};

auto signed char buff[BUFF] = {
(0x00),
};

auto signed char *(roll[ROLLS]) = {
(signed char(*)) (buff),
(signed char(*)) (buff1),
(signed char(*)) (buff2),
(signed char(*)) (0x00),
};

auto CLI_W32_STAT cli_w32_stat = {
(0x00),
};

auto signed long long ll;
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
R(file,R(config,R(ty,cli_w32_stat))) = (0x00);
R(size,R(config,R(ty,cli_w32_stat))) = (0x00);
R(file,R(edit,R(ty,cli_w32_stat))) = (0x00);
R(size,R(edit,R(ty,cli_w32_stat))) = (0x00);

i = (argc);

if(THRESHOLD<(argc)) {
R(file,R(edit,R(ty,cli_w32_stat))) = (*(argv+(--i)));
R(file,R(config,R(ty,cli_w32_stat))) = (*(argv+(--i)));
}

if(!(argc^(THRESHOLD))) R(file,R(edit,R(ty,cli_w32_stat))) = (*(argv+(--i)));

// Parse a config file
r = cli_parse(&(R(ty,cli_w32_stat)));
if(!r) {
printf("%s\n","<< Error at fn. cli_parse()");
return(0x00);
}

r = cli_init_pages(&(cli_w32_stat.ty.spool));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_pages()");
return(0x00);
}

r = cli_init_roll(BUFF,roll,&(cli_w32_stat.ty));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_roll()");
return(0x00);
}

r = cli_init_ty_beta(&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_ty_beta()");
return(0x00);
}


Sleep(1000);
system("cls");


r = cli_display_header(&(cli_w32_stat.ty));
if(!r) {
printf("%s\n","<< Error at fn. cli_display_header()");
return(0x00);
}

r = cli_spool_beta(&cli_w32_stat);
if(!r) {
printf("%s\n","<< Error at fn. cli_spool_beta()");
return(0x00);
}

r = cli_unmap_pages(&(cli_w32_stat.ty.spool));
if(!r) {
printf("%s\n","<< Error at fn. cli_unmap_pages()");
return(0x00);
}

if(CLI_DBG) {
if(!(0x01^(r))) printf("%s\n","Unmapped 1 page");
else printf("%s%d%s\n","Unmapped ",r," pages");
}

return(0x01);
}
