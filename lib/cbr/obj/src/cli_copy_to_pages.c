/*

Copy to pages.

Along with C library

Remarks:
Refer at fn. cli_paste_beta.
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_copy_to_pages(signed short(lastbreak),CLI_SPOOL(*argp),signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,l,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!base) return(0x00);

r = ct(base);
r++;
p = (signed char(*)) malloc(r);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

l = (r);

r = cli_init_pages(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_pages()");
return(0x00);
}

r = cli_copy_to_pages_internal(lastbreak,argp,p,base);
if(!r) {
printf("%s\n","<< Error at fn. cli_copy_to_pages_internal()");
return(0x00);
}

i = (r);

r = embed_to(p,0x00,l);
if(l^(r)) {
printf("%s\n","<< Error at fn. embed_to()");
return(0x00);
}

free(p);
p = (0x00);

return(i);
}
