/*

Load.

Along with C library

Remarks:
Refer at fn. cli_bind_pages and fn. cli_concat_pages.
*/


# define CLI_MACRO

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_wrap_internal(signed short(terminate),signed char(*sym),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
static signed char HT = ('\t');
static signed char LF = ('\n');
static signed char CR = ('\r');
static signed char SP = (' ');

auto signed char *cur,*p;
auto signed dif,l,v;
auto signed i,r;
auto signed short criterion;
auto signed short breaker;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!sym) return(0x00);
if(!argp) return(0x00);

if(terminate) return(0x00);

cur = (*(CLI_BASE+(R(base,R(roll,*argp)))));
if(!cur) {
printf("%s\n","<< Assign buffer at *(CLI_BASE+(R(base,R(roll,*argp..");
return(0x00);
}

r = ct(cur);
if(!r) {
if(CLI_MORPH&(R(flag,*argp))) terminate++;
if(CLI_PBR&(R(flag,*argp))) terminate++;
}

criterion = (R(right,R(rect,*argp)));
flag = (0x00);
p = (0x00);

r = ct_txt(R(align_tab,R(config,*argp)),*(CLI_BASE+(R(base,R(roll,*argp)))));
dif = (r);
if(criterion<(dif)) {
cur = (*(CLI_BASE+(R(base,R(roll,*argp)))));
r = ct(cur);
r++;
r = (r*(sizeof(signed char)));
p = (signed char(*)) malloc(r);
if(!p) {
OR(R(flag,*argp),CLI_IRR);
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
r = cpy(p,cur);
l = (0x00);
v = (0x00);
while(0x01) {
// r = cue(sym,cur);
r = cue2l(sym,cur);
dif = (r);
l = (dif+(l));
cur = (dif+(cur));
*cur = (0x00);
r = ct_txt(R(align_tab,R(config,*argp)),*(CLI_BASE+(R(base,R(roll,*argp)))));
if(criterion<(r)) {
if(v) {
l = (-dif+(l));
cur = (-dif+(cur));
*cur = (0x00);
}
break;
}
r = cpy(*(CLI_BASE+(R(base,R(roll,*argp)))),p);
v = (0x01);
}}

if(!p) {
if(!(R(flag,*argp))) return(0x00);
}

cur = (*(CLI_BASE+(R(base,R(roll,*argp)))));
flag = (R(flag,*argp));
AND(R(flag,*argp),0x00);

if(p) {
r = ct(cur);
if(!(*(r+(p)))) {
terminate++;
OR(R(flag,*argp),flag);
}}

else OR(R(flag,*argp),flag);

r = cli_bind_pages(&(R(spool,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
return(0x00);
}

r = cli_book(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

OR(R(flag,*argp),flag);

if(p) {
cur = (*(CLI_BASE+(R(base,R(roll,*argp)))));
r = cpy(cur,p);
r = cpy(cur,l+(p));
r = embed(0x00/* flag */,p);
free(p);
p = (0x00);
}

else {
**(CLI_BASE+(R(base,R(roll,*argp)))) = (0x00);
terminate++;
}

return(0x01+(cli_wrap_internal(terminate,sym,argp)));
}
