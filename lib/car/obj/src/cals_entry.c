/* **** Notes

Entry an event.

Remarks:
Currently under construction
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_entry(signed char(**argv),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short *w;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

/* **** CODE/TEXT */
if(!argv) return(0x00);
if(!argp) return(0x00);

r = concat_argv(0x02/* offset */,&b,argv);
if(!r) return(0x00);

r = cals_parse(b,argp);
if(!r) return(0x00);

r = cals_store(argp);
if(!r) return(0x00);

if(b) {
free(b);
b = (0x00);
}

return(0x01);
}
