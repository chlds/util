/* **** **** Making a small shell

*/




# define C_CODE_STDS
# define C_AS
# define C_MT

# include "./incl/decl/config.h"

# define BUFF (0x400)
# define DELAY (25)




/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


// Deprecate
auto struct knot(*base), (*lead), (*cache);

auto struct yarn(yarn) = {
(struct knot(*)) (NIL)
};

auto char signed(buff[BUFF]) = {
(char signed) (NIL)
};

auto int signed(i), (j), (l), (r);
auto int signed(count), (total);

auto char signed(c);

auto char signed(*p) = (char signed(*)) (NIL);




/* **** **** **** **** CODE/TEXT */

l = (l^(l));
j = (j^(j));
i = (i^(i));

while(2) {
/* **** reading */
r = (int signed) read(CIN, (&c), (sizeof(c)));
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. read()."));
return(char signed) (~(NIL));
}
if(!(c^('\r'))) {
break;
}
if(!(c^('\n'))) {
break;
}
count = (int signed) (r);
/* **** CPU idling */
// Sleep(DELAY);
/* **** writing */
r = (int signed) write(COUT, (&c), (count));
if(!(r^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. write()."));
return(char signed) (~(NIL));
}}




printf("\n%s", ("All DONE!"));


return(char signed) (NIL);
}
