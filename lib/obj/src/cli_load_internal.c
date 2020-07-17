/*

Load.

Along with C library

Remarks:
Refer at fn. cli_bind_pages and fn. cli_concat_pages.
*/


# define CLI_MACRO
# define CLI_SYM

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_load_internal(signed(count),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
static signed char sym[] = {
SYM_EXCLAMATION_MARK,
SYM_QUOTATION_MARK,
SYM_NUMBER_SIGN,
SYM_DOLLAR_SIGN,
SYM_PERCENT_SIGN,
SYM_AMPERSAND,
SYM_APOSTROPHE,
SYM_LEFT_PARENTHESIS,
SYM_RIGHT_PARENTHESIS,
SYM_ASTERISK,
SYM_PLUS_SIGN,
SYM_COMMA,
SYM_HYPHEN_MINUS,
SYM_FULL_STOP,
SYM_SOLIDUS,
SYM_COLON,
SYM_SEMICOLON,
SYM_LESS_THAN_SIGN,
SYM_EQUALS_SIGN,
SYM_GREATER_THAN_SIGN,
SYM_QUESTION_MARK,
SYM_COMMERCIAL_AT,
SYM_LEFT_SQUARE_BRACKET,
SYM_REVERSE_SOLIDUS,
SYM_RIGHT_SQUARE_BRACKET,
SYM_CIRCUMFLEX_ACCENT,
SYM_LOW_LINE,
SYM_GRAVE_ACCENT,
SYM_LEFT_CURLY_BRACKET,
SYM_VERTICAL_LINE,
SYM_RIGHT_CURLY_BRACKET,
SYM_TILDE,
0x00,
};

static signed char CR = ('\r');
static signed char LF = ('\n');
static signed char SP = (' ');

auto signed char *cur,*p;
auto signed dif,l,v;
auto signed i,r;
auto signed short criterion;
auto signed short breaker;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!argp) return(0x00);

cur = (*(CLI_BASE+(R(base,R(roll,*argp)))));
if(!cur) {
printf("%s\n","<< Assign buffer at *(CLI_BASE+(R(base,R(roll,*argp..");
return(0x00);
}

r = ct(cur);
cur = (r+(cur));

i = (*(CLI_BASE+(R(size,R(roll,*argp)))));
i = (-r+(i));
if(i<(CLI_EMPTY)) {
printf("%s\n","<< Assign size at *(CLI_BASE+(R(size,R(roll,*argp..");
return(0x00);
}

r = cli_init_workspace(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}

/* case 1
r = cli_bind_pages(&(R(spool,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
return(0x00);
}
**(CLI_BASE+(R(base,R(roll,*argp)))) = (0x00);
r = cli_book(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
//*/

criterion = (R(right,R(rect,*argp)));
flag = (0x00);
p = (0x00);

while(0x02) {
r = ct_txt(R(align_tab,R(config,*argp)),*(CLI_BASE+(R(base,R(roll,*argp)))));
//*/
if(criterion<(r)) {
if(breaker) {
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
r = cue(sym,cur);
dif = (r);
l = (dif+(l));
cur = (dif+(cur));
*cur = (0x00);
r = ct_txt(R(align_tab,R(config,*argp)),*(CLI_BASE+(R(base,R(roll,*argp)))));
if(criterion<(r)) {
if(v) {
cur = (-dif+(cur));
l = (-dif+(l));
}
break;
}
r = cpy(*(CLI_BASE+(R(base,R(roll,*argp)))),p);
v = (0x01);
}
break;
}}
//*/
if(i<(CLI_EMPTY)) {
*cur = (0x00);
i = (CLI_EMPTY+(*(CLI_BASE+(R(size,R(roll,*argp))))));
r = cli_extend(CLI_BASE,0x00/* cue */,i/* extra */,argp);
if(!r) {
OR(R(flag,*argp),CLI_IRR);
printf("%s\n","<< Error at fn. cli_extend()");
return(0x00);
}
cur = (*(CLI_INDEX+(R(cur,*argp))));
}
//*/
r = read(R(fd,R(edit,*argp)),&c,sizeof(signed char));
if(!(r^(~(0x00)))) {
OR(R(flag,*argp),CLI_IRR);
printf("%s\n","<< Error at fn. read()");
return(0x00);
}
if(!r) {
flag = (CLI_MORPH);
break;
}
if(flag) {
if(!(LF^(c))) {
OR(R(flag,*argp),CLI_PBR);
--cur;
count++;
break;
}}
if(!(LF^(c))) {
OR(R(flag,*argp),CLI_PBR);
count++;
break;
}
if(!(CR^(c))) flag = (0x01);
else flag = (0x00);
*cur = (c);
cur++;
*cur = (0x00);
--i;
count++;
if(!(SP^(c))) breaker++;
else breaker = (0x00);
}

*cur = (0x00);

//* or case 2
r = cli_bind_pages(&(R(spool,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_bind_pages()");
return(0x00);
}
//*/

r = cli_book(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

// announcements
printf("\r%d%s%d%s",count,"/",R(size,R(edit,*argp)),"bytes");

if(!(CLI_MORPH^(flag))) return(0x01);

if(p) {
r = cpy(*(CLI_BASE+(R(base,R(roll,*argp)))),l+(p));
if(!r) **(CLI_BASE+(R(base,R(roll,*argp)))) = (0x00);
r = embed(0x00/* flag */,p);
free(p);
}

else **(CLI_BASE+(R(base,R(roll,*argp)))) = (0x00);

return(0x01+(cli_load_internal(count,argp)));
}
