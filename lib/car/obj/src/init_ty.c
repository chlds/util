/* **** Notes

Initialise

Remarks:
Refer at fn. cli_restore.
*/


# define CLI_SYMB
# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_ty(signed(arg),ty_t(*argp))) {

auto signed char *b;
auto page_t *page;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

// initialise
flag = (*(CLI_BASE+(R(flag,*argp))));
if(!(CLI_INIT&(flag))) AND(arg,0x00);

page = (&(R(page,*argp)));
r = init_pages(arg,page);
if(!r) {
printf("%s \n","<< Error at fn. init_pages()");
return(0x00);
}

if(arg) {
b = (*(CLI_BASE+(R(b,*argp))));
embed(0x00,b);
rl(b);
}

b = (0x00);
r = (OBJS);
while(r) {
*(--r+(R(b,*argp))) = (b);
*(r+(R(sym,*argp))) = (b);
*(r+(R(flag,*argp))) = (0x00);
*(r+(R(r,*argp))) = (0x00);
}

if(!arg) *(CLI_BASE+(R(sym,*argp))) = (CUE_SYM);

OR(*(CLI_BASE+(R(flag,*argp))),CLI_INIT);

return(0x01);
}
