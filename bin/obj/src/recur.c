/* **** Notes

Using a recursion

*/



# define C_CODE_STDS
# define C_AS

# include "./../../../incl/config.h"



/* **** **** a recursion function */

char signed(__cdecl recurr(char signed(**argp))) {

auto int signed(i);
auto char signed(c);

if(!(argp)) {
return(char signed) (~(NIL));
}

XOR(i, i);

if(!(*(argp+(i)))) {
}

else {
printf("%s\n", (*(argp+(i++))));
c = recurr(argp+(i));
if(!(c^(~(NIL)))) {
printf("%s\n", ("<< Error at fn. recurr()"));
return(char signed) (~(NIL));
}}

XOR(c, c);
return(char signed) (c);
}



/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


/* **** **** DATA */

auto char signed(*(arr[])) = {
(char signed(*)) ("Sun"),
(char signed(*)) ("Mon"),
(char signed(*)) ("Tue"),
(char signed(*)) ("Wed"),
(char signed(*)) ("Thu"),
(char signed(*)) ("Fri"),
(char signed(*)) ("Sat"),
(char signed(*)) (NIL)
};

auto char signed(c);


/* **** **** CODE/TEXT */

c = recurr(arr);

if(!(c^(~(NIL)))) {
printf("%s\n", ("<< Error at fn. recurr()."));
}

XOR(c, c);
return(char signed) (c);
}
