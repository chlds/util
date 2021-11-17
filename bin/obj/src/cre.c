/* **** Notes

Create.
*/


# define CAR
# include "./../../../lib/incl/config.h"

// signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {
signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

auto void *argp;
auto signed char *b;
// auto signed char *path;
auto signed short *path;
auto signed i,r;
auto signed short flag;
auto signed(__cdecl*f)(signed(arg),void(*argp));
auto signed limit = (0x02);
auto signed char *param = ("rw");

if(argc<(limit)) {
printf("\n");
printf("  %s \n","Create a file.");
printf("  %s \n","cre <file>");
printf("\n");
printf("  %s \n","Example:");
printf("  %s \n","cre cba.txt");
return(0x00);
}

AND(r,0x00);
path = (*(argv+(argc+(~r))));
// argp = (0x00);
// f = (0x00);
// r = cre_b(param,path);
r = cre_w(param,path);
if(!r) {
printf("%s \n","<< Error at fn. cre_w()");
return(0x00);
}

printf("\n");
printf("Done ! \n");

return(0x00);
}
