/* **** Notes

Initialise the lead, base and temporary pages.

Remarks:
Along with C library
//*/


# define R(D,S) (S).D
// A local macro function

# include "../../../incl/cli.h"

signed(__cdecl cli_init_paper(signed(ink),signed char(**roll),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(ink<(0x01)) return(0x00);
if(!roll) return(0x00);
if(!(*roll)) return(0x00);
if(!argp) return(0x00);

// ink per roll i.e., buffer per workspace
R(ink,*argp) = (ink);
R(ink_level,*argp) = (R(ink,*argp));
R(ink_level,R(debug,*argp)) = (R(ink_level,*argp));

// Charge rolls
i = (0x00);
while(*(i+(roll))) {
if(CLI_DBG) printf("%s%d\r","Charge roll: ",i);
*(i+(R(base,R(paper,*argp)))) = (*(i+(roll)));
i++;
}
// Charged rolls
if(CLI_DBG) printf("%s%d\n","Charged roll: ",i);
*(i+(R(base,R(paper,*argp)))) = (*(i+(roll)));

R(cur,*argp) = (*(CLI_BASE+(R(base,R(paper,*argp)))));
R(cur,R(debug,*argp)) = (R(cur,*argp));
R(append,*argp) = (0x00);
R(linebreak,*argp) = (0x00);

R(linebreak,R(paper,*argp)) = (0x00);

return(0x01);
}
