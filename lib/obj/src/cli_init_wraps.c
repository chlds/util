/*

Initialise.
*/


# define CLI_MACRO

# include "../../../incl/config_ty.h"

signed(__cdecl cli_init_wraps(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed long long ll;
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_init_pages(&(R(spool,R(wrap,*argp))));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_pages()");
return(0x00);
}

R(flag,R(wrap,*argp)) = (0x00);
R(offset,R(wrap,*argp)) = (0x00);

i = (CLI_OBJS);
while(i) *(--i+(R(append,R(wrap,*argp)))) = (0x00);

p = (*(CLI_BASE+(R(base,R(roll,*argp)))));
i = (CLI_OBJS);
while(i) *(--i+(R(cur,R(wrap,*argp)))) = (p);

// coordinate
i = (CLI_OBJS);
while(i) {
--i;
R(y,*(i+(R(coord,R(wrap,*argp))))) = (0x00);
R(x,*(i+(R(coord,R(wrap,*argp))))) = (0x00);
}

return(0x01);
}
