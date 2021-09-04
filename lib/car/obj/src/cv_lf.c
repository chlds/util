/* **** Notes

Convert the code of line break into LF.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_lf(signed char(*cache/* an extension for backups */),signed char(*argp))) {

auto signed char *b;
auto page_t page;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

r = read_pages(&page,argp);
if(!r) {
printf("%s \n","<< Error at fn. read_pages()");
return(0x00);
}

AND(flag,0x00);
r = trunc_f(cache,argp);
if(!r) {
printf("%s \n","<< Error at fn. trunc_f()");
OR(flag,0x01);
}

if(!flag) {
r = write_pages(argp,&page);
if(!r) {
printf("%s \n","<< Error at fn. write_pages()");
OR(flag,0x01);
}}

r = unbind_pages(&page);
if(!r) printf("%s \n","<< Error at fn. unbind_pages()");
if(flag) AND(r,0x00);

return(r);
}
