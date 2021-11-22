/* **** Notes

Agent.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl dupl_agent_w(signed(argc),signed short(**argv),signed short(**envp))) {

auto signed short **w;
auto signed i,r;
auto signed short flag;
auto fl_t fl;
auto signed threshold = (0x03);

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

w = (argv+(argc+(~0x01)));
r = wr_ds_w(w);
if(!r) printf("%s \n","<< Error at fn. wr_ds_w()");

return(r);
}
