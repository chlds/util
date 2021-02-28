/* **** Notes

Look up sub-directories and their contents in the depth-first search

Remarks:
This program may immediately cause a stack overflow.
*/


# define C_CODE_STDS
# define C_W32API
# define CAR
# include "../../../lib/incl/config.h"

# include "../../../lib/incl/c_dir.h"

/* **** entry point */
signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed char *(opt[]) = {
(signed char(*)) ("a"),
(signed char(*)) ("i"),
(signed char(*)) ("r"),
(signed char(*)) ("u"),
(signed char(*)) ("v"),
(signed char(*)) ("d"),
(signed char(*)) (0x00),
};

auto signed opt_flags[] = {
(signed) (OPT_ATTRIBS),
(signed) (OPT_IGNORE),
(signed) (OPT_RECURSION),
(signed) (OPT_UNLIMITED),
(signed) (OPT_VERBOSE),
(signed) (OPT_DIRECTORIES),
(signed) (0x00),
};

auto C_DIRS_INFO cdi;
auto signed char *b,*p,*t;
auto signed i,l,r;
auto signed short flag;

/* **** CODE/TEXT */
p = (*(argv+(argc+(~0x00))));
if(argc<(0x02)) p = ("./*");

r = ct(p);
if(!r) return(0x00);

i = (r);

if('*'^(*(p+(--i)))) {
if('/'^(*(p+(i)))) r++;
r++;
}

r++;
r = (r*(sizeof(*p)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

r = cpy(b,p);
if('*'^(*(b+(r+(~0x00))))) {
if('/'^(*(b+(r+(~0x00))))) *(b+(r++)) = ('/');
*(b+(r++)) = ('*');
*(b+(r)) = (0x00);
}

XOR(flag,flag);

if(0x02<(argc)) {
l = (0x00);
while(*(opt+(l))) {
i = (0x00);
r = cmpr_parts(&i,*(argv+(0x01)),*(opt+(l)));
if(!i) OR(flag,*(opt_flags+(l)));
l++;
}
// also
i = (0x00);
r = cv_da(0x0A,&i,*(argv+(0x01)));
if(!r) {
if(b) rl(b);
return(0x00);
}
if(i<(0x00)) i = (0x01+(~i));
if(i) {
OR(flag,OPT_RECURSION);
OR(flag,OPT_DEPTH);
i++;
}}

// ignore case distinctions or..
t = (0x00);
cdi.target = (t);
if(0x03<(argc)) {
t = (*(argv+(0x02)));
R(target,cdi) = (t);
// also
if(OPT_IGNORE&(flag)) {
t = cv_a(0x00,t);
if(!t) {
rl(b);
return(0x00);
}
R(target,cdi) = (t);
}}

cdi.depth = (i);
cdi.directories = (0x00);
cdi.files = (0x00);
cdi.flag = (flag);
cdi.dis = (0x00);
cdi.path = (b);

r = finds(&cdi);
if(!r) {
r = cli_message(r,"<< An error has occurred at fn. finds() \n");
OR(flag,OPT_ERROR);
}

if(OPT_IGNORE&(flag)) {
r = embed(0x00,t);
r = rl(t);
t = (0x00);
}

if(b) {
r = embed(0x00,b);
if(!r) cli_message(r,"<< Error at fn. embed() \n");
r = rl(b);
b = (0x00);
}

p = (b);
cdi.path = (p);

printf("\n");
printf(" %d %s \n",R(directories,cdi),"directories");
if(!(OPT_DIRECTORIES&(R(flag,cdi)))) printf(" %d %s \n",R(files,cdi),"files");

if(OPT_VERBOSE&(flag)) {
r = (R(depth,cdi));
if(r) --r;
printf(" %s %d \n","Depth:",r);
}

AND(R(depth,cdi),0x00);
if(OPT_ERROR&(flag)) return(0x00);

return(0x01);
}
