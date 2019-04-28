/* **** Notes

Depth-first searching
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

/* **** Global variables */
signed(TheNumbreOfTheDirectories) = (0x00);
signed(TheNumbreOfTheFiles) = (0x00);

/* **** entry point */
signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and DATA */
auto signed char(*p);
auto signed(r);
auto signed char(c);

/* **** CODE/TEXT */
if(argc<(2)) {
r = pickfiles("./*");
if(!r) return(XNOR(r));
}

else {
p = (*(argv+(argc+(~(NIL)))));
r = pickfiles(p);
if(!r) return(XNOR(r));
}

printf("\n");
printf("%s%d\n", ("The directories: "), (TheNumbreOfTheDirectories));
printf("%s%d\n", ("The files: "), (TheNumbreOfTheFiles));

return(0x00);
}
