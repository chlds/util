/* **** Notes

Initialise the lead, base and temporary pages.

Remarks:
Along with C library
//*/


# define R(D,S) (S).D
// A local macro function

# include "../../../incl/cli.h"

signed(__cdecl cli_init_roll(signed(size),signed char(**roll),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(size<(0x01)) return(0x00);
if(!roll) return(0x00);
if(!(*roll)) return(0x00);
if(!argp) return(0x00);

R(size,R(roll,*argp)) = (size);
R(gauge,R(debug,*argp)) = (size);
R(gauge,*argp) = (size);

// Charge rolls
i = (0x00);
while(*(i+(roll))) {
if(CLI_DBG) printf("%s%d\r","Charge roll: ",i);
*(i+(R(base,R(roll,*argp)))) = (*(i+(roll)));
i++;
}
// Charged rolls
if(CLI_DBG) printf("%s%d\n","Charged roll: ",i);
*(i+(R(base,R(roll,*argp)))) = (*(i+(roll)));

p = (*(CLI_BASE+(R(base,R(roll,*argp)))));

R(cur,R(debug,*argp)) = (p);
*(CLI_BASE+(R(cur,*argp))) = (p);
*(CLI_OFFSET+(R(cur,*argp))) = (p);
*(CLI_INDEX+(R(cur,*argp))) = (p);
*(CLI_LEAD+(R(cur,*argp))) = (p);

if(!(R(linebreak_form,*argp))) R(linebreak_form,*argp) = (LINEBREAK_CRLF);

R(linebreak,*argp) = (0x00);
R(append,*argp) = (0x00);
R(flag,*argp) = (0x00);

return(0x01);
}
