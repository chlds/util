/*

Initialise.
*/


# define CBR

# include "../../../incl/config.h"

signed(__cdecl cli_init_ty(signed(size),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(size<(0x01)) return(0x00);
if(!argp) return(0x00);

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

r = cli_init_rolls(size,&(R(roll,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_rolls()");
return(0x00);
}

r = cli_init_wraps(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_wraps()");
return(0x00);
}

i = (CLI_OBJS);
while(i) {
*(--i+(R(old,*argp))) = (0x00);
}

R(flag,*argp) = (0x00);
R(offset,*argp) = (0x00);
R(gauge,*argp) = (size);
R(gauge,R(debug,*argp)) = (size);

p = (*(CLI_BASE+(R(base,R(roll,*argp)))));
R(cur,R(debug,*argp)) = (p);
i = (CLI_OBJS);
while(i) {
*(--i+(R(cur,*argp))) = (p);
}
i = (CLI_OBJS);
while(i) {
*(--i+(R(append,*argp))) = (0x00);
}

// coordinate
i = (CLI_OBJS);
while(--i) {
R(y,*(i+(R(coord,*argp)))) = (0x00);
R(x,*(i+(R(coord,*argp)))) = (0x00);
}

// system parameters
R(y,R(pixel,*argp)) = (0x00);
R(x,R(pixel,*argp)) = (0x00);

return(0x01);
}
