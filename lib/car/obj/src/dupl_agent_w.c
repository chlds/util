/* **** Notes

dupl [-options] <di> <si>

to duplicate/copy to file <di> out of file <si> in the binary format
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl dupl_agent_w(signed(argc),signed short(**argv),signed short(**envp))) {

auto signed short *w;
auto signed i,r;
auto signed short flag;
auto fl_t fl;
auto signed threshold = (0x03);
auto signed char *perm = ("rdonly,binary");

if(!argv) return(0x00);
// if(!envp) return(0x00);
// if(!(*envp)) return(0x00);
if(!(*argv)) return(0x00);

if(argc<(threshold)) {
/* Display the help */
printf("\n");
printf("  %s \n","Duplicate to <DI> out of <SI> in the binary format.");
printf("\n");
printf("  %s \n","Usage:");
printf("  %s \n","dupl [-options] .. <destination_file> <source_file>");
return(0x01);
}

/* initialise */
r = init_fl(&fl);
if(!r) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

AND(r,0x00);
r = (threshold+(~r));
while(r) {
w = (*(argv+(argc+(~(--r)))));
*(r+(R(v,fl))) = (void*) (w);
if(!w) return(0x00);
}

return(xt_w(perm,w,&fl,rd_after_opening_w));
}
