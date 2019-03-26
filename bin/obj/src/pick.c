/* **** Notes

Depth-first searching

*/



# define C_CODE_STDS

# include "./../../../incl/config.h"



/* Global variables */

int signed(TheNumbreOfTheDirectories) = (int signed) (0);
int signed(TheNumbreOfTheFiles) = (int signed) (0);



/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


/* **** **** DATA */

auto char signed(*p);
auto char signed(c);


/* **** **** CODE/TEXT */

if(argc<(2)) {
pickfiles("./*");
}

else {
p = (*(argv+(argc+(~(NIL)))));
pickfiles(p);
}


/* **** **** Reports */

printf("\n");
printf("%s%d\n", ("The total directories: "), (TheNumbreOfTheDirectories));
printf("%s%d\n", ("The total files: "), (TheNumbreOfTheFiles));


XOR(c, c);
return(char signed) (c);
}
