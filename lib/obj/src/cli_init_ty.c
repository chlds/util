/*

Initialise.
*/


# define CLI_MACRO

# include "../../../incl/config_ty.h"

signed(__cdecl cli_init_ty(signed(size),signed char(**roll),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed long long ll;
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
r = cli_init_clipboards(&(R(clipboard,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_clipboards()");
return(0x00);
}

r = cli_init_pages(&(R(spool,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_pages()");
return(0x00);
}

r = cli_init_roll(size,roll,&(R(roll,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_roll()");
return(0x00);
}

if(!(R(align_tab,*argp))) R(align_tab,*argp) = (ALIGN_TAB);
if(!(R(linebreak_form,*argp))) R(linebreak_form,*argp) = (LINEBREAK_CRLF);
R(linebreak,*argp) = (0x00);
R(append,*argp) = (0x00);
R(flag,*argp) = (0x00);

R(gauge,R(debug,*argp)) = (size);
R(gauge,*argp) = (size);

p = (*(CLI_BASE+(R(base,R(roll,*argp)))));
R(cur,R(debug,*argp)) = (p);
i = (CLI_OBJS);
while(i) {
*(--i+(R(cur,*argp))) = (p);
}

// coordinate
R(x,*(CLI_BASE+(R(coord,*argp)))) = (0x00);
R(y,*(CLI_BASE+(R(coord,*argp)))) = (0x00);
R(x,*(CLI_OFFSET+(R(coord,*argp)))) = (0x00);
R(y,*(CLI_OFFSET+(R(coord,*argp)))) = (CLI_HEADER_HEIGHT);

return(0x01);
}
