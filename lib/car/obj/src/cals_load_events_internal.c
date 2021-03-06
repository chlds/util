/* **** Notes

Load events i.e., map events at *(CLI_B/O/I/L+(R(event,R(roll,*argp)))) on the RAM.

Remarks:
Currently under construction
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_load_events_internal(signed char(*path),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto time_t t;
auto signed access_right;
auto signed fd;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!path) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);

// open, read and close
access_right = (_O_BINARY|_O_RDONLY);
fd = _open(path,access_right);
if(!(fd^(~0x00))) {
if(!(ENOENT^(errno))) {
if(CALS_VERBOSE&(R(flag,*argp))) printf("\n\t%s %s %s \n","No file at",path,"for events");
return(0x01);
}
printf("%s %Xh \n","<< Error at fn. _open() with errno",errno);
return(0x00);
}

OR(R(flag,*argp),CALS_ERROR);
r = cals_load_events_internals(fd,argp);
if(!r) flag++;
if(CALS_ERROR&(R(flag,*argp))) flag = (0x02);
if(flag) printf("%s \n","<< Error at fn. cals_load_events_internals()");
if(0x01<(flag)) {
r = cals_unbind_events(&(R(roll,*argp)));
if(!r) printf("%s \n","<< Error at fn. cals_unbind_events()");
}

r = _close(fd);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. _close()");
return(0x00);
}

if(flag) return(0x00);

return(0x01);
}
