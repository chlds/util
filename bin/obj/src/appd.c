/* **** Notes

Append content of files to a new file.
*/


# define CAR
# include "./../../../lib/incl/config.h"

// signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {
signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

// auto signed char **v;
// auto signed char *b;
auto signed short **v;
auto signed short *w;
auto signed i,r;
auto signed short flag;
auto signed limit = (0x03);

if(argc<(limit)) {
printf("\n");
printf("  %s \n","Append content of files to a new file.");
printf("  %s \n","appd <new_file> <old_file> ..");
printf("\n");
printf("  %s \n","Example:");
printf("  %s \n","appd cba.txt abc.txt");
printf("  %s \n","appd cba.txt abc.txt def.txt");
return(0x00);
}

v = (0x01+(argv));
r = appdw_ds(v);
if(!r) {
printf("%s \n","<< Error at fn. appdw_ds()");
return(0x00);
}

printf("\n");
printf("[%s: %d] \n","Appended files",r);

return(0x00);
}
