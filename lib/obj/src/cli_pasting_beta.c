/*

Paste out of the clipboard.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_init_roll.c and util/bin/obj/src/ty.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_pasting_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char CR = ('\r');
auto signed char LF = ('\n');

auto CLI_COORD coord[0x02];
auto CLI_PAGE *page;
auto void *g;
auto signed short *w;
auto signed char *cur,*base,*buff,*p,*b;
auto signed long long ll;
auto signed c,i,r;
auto signed offset;
auto signed pages;
auto signed kept;
auto signed short cr;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

b = (signed char(*)) (*(CLI_B+(R(base,R(clipboard,R(ty,*argp))))));
if(!b) {
printf("%s\n","<< Empty at *(CLI_B+(R(base,R(clipboard,R(ty,*argp..");
return(0x00);
}

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
base = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
r = compare(cur,base);
offset = (r);

// to append
p = (*(CLI_OFFSET+(R(append,R(ty,*argp)))));
if(p) {
embed(0x00/* flag */,p);
free(p);
}
r = ct(cur);
if(!r) p = (0x00);
else {
kept = keep(&p,cur);
if(!kept) {
printf("%s\n","<< Error at fn. keep()");
return(0x00);
}}
*(CLI_OFFSET+(R(append,R(ty,*argp)))) = (p);

// to merge pages
*cur = (0x00);
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

r = cli_copy_to_pages(&(R(spool,R(clipboard,R(ty,*argp)))),b);
if(!r) {
printf("%s\n","<< Error at fn. cli_copy_to_pages()");
return(0x00);
}
pages = (r);

r = cli_insert_pages(&(R(spool,R(ty,*argp))),&(R(spool,R(clipboard,R(ty,*argp)))));
if(!r) {
printf("%s\n","<< Error at fn. cli_insert_pages()");
return(0x00);
}

r = cli_merge_pages(&(R(spool,R(ty,*argp))));
if(!r) {
printf("%s\n","<< Error at fn. cli_merge_pages()");
return(0x00);
}

r = cli_connect_with_workspace(page,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}
R(offset,R(ty,*argp)) = (offset);
ADD(*(CLI_INDEX+(R(cur,R(ty,*argp)))),R(offset,R(ty,*argp)));
cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

i = (pages);
if(0x01<(i)) flag = (CG_CLEAR|CG_EMUL);
else flag = (CG_EMUL);

r = cli_gram_beta(flag,cur,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_gram_beta()");
return(0x00);
//*/
}

while(--i) {
page = R(d,*page);
if(!page) {
printf("%s\n","<< Could not find a page..");
return(0x00);
}
if(0x01<(i)) flag = (CG_CLEAR|CG_EMUL);
else flag = (CG_EMUL);
r = cli_coord_page_beta(flag,page,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_page_beta()");
return(0x00);
//*/
}}

// depart.
R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (R(y,*(CLI_BASE+(R(coord,*page)))));
R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (0x00);

*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))) = (page);

// add appendant p.
r = ct(*(CLI_BASE+(R(base,*page))));
offset = (r);
R(offset,R(ty,*argp)) = (offset);
i = (0x00);
ADD(i,R(offset,R(ty,*argp)));
r = ct(p);
ADD(i,r);
i++;
i = (i*(sizeof(signed char)));
buff = (signed char(*)) malloc(i);
if(!buff) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
r = concats(buff,*(CLI_BASE+(R(base,*page))),p,(void*) 0x00);
if(!r) {
printf("%s\n","<< Error at fn. concats()");
return(0x00);
}
r = embed(0x00/* flag */,*(CLI_BASE+(R(base,*page))));
free(*(CLI_BASE+(R(base,*page))));
*(CLI_BASE+(R(base,*page))) = (buff);
buff = (0x00);

// release an appendant
if(p) {
r = release(kept,&p);
if(kept^(r)) {
printf("%s\n","<< Error at fn. release()");
return(0x00);
}
*(CLI_OFFSET+(R(append,R(ty,*argp)))) = (p);
}


r = cli_connect_with_workspace(page,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}
R(offset,R(ty,*argp)) = (offset);
ADD(*(CLI_INDEX+(R(cur,R(ty,*argp)))),R(offset,R(ty,*argp)));
cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

flag = (CG_COMEBACK|CG_CLEAR|CG_EMUL);
r = cli_grams_beta(flag,cur,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_grams_beta()");
return(0x00);
}

return(0x01);
}
