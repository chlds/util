/* **** Notes

Load events i.e., map events at *(CLI_B/O/I/L+(R(event,R(roll,*argp)))) on the RAM.

Remarks:
Refer at fn. cals_load_events_internal.
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_load_events_r_r(signed char(**path),cals_t(*argp))) {

auto signed char *b;
auto time_t t;
auto signed fd;
auto signed i,r;
auto signed short flag;
auto signed char *csv = (".csv");

if(!path) return(0x00);
if(!argp) return(0x00);

b = (*path);
if(!b) return(0x00);
if(DBG) printf("[b: %s] \n",b);

AND(flag,0x00);
if(cf_f_extensions(csv,b)) {
// open, read and close
r = (O_BINARY|O_RDONLY);
fd = op_b(b,&r,(void*)0x00);
if(!(fd^(~0x00))) {
if(!(ENOENT^(errno))) {
if(CALS_VERBOSE&(R(flag,*argp))) printf("\n\t%s %s %s \n","No file at",b,"for events");
}
printf("%s %Xh \n","<< Error at fn. op_b() with errno",errno);
return(0x00);
}
OR(R(flag,*argp),CALS_ERROR);
r = cals_load_events_internals(fd,argp);
if(!r) OR(flag,0x01);
if(CALS_ERROR&(R(flag,*argp))) flag = (0x02);
if(flag) printf("%s \n","<< Error at fn. cals_load_events_internals()");
if(0x01<(flag)) {
r = cals_unbind_events(&(R(roll,*argp)));
if(!r) printf("%s \n","<< Error at fn. cals_unbind_events()");
}
r = cl_b(fd);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. cl_b()");
return(0x00);
}}

if(flag) return(0x00);

path++;

return(0x01+(cals_load_events_r_r(path,argp)));
}
