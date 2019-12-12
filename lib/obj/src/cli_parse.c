/* **** Notes

Parse a config file for the typewriter.

Remarks:
Path: ~/.ty/config.txt
CR (0x0D)
LF (0x0A)
//*/


# define R(D,S) (S).D
// A local macro function

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <sys/stat.h>
# include "../../../incl/cli_w32.h"

signed(__cdecl cli_parse(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
// second half of the default config directory
auto signed char *second_half = ("/.ty/config.txt");
auto struct stat stats;

auto signed char *path;
auto signed char *p;
auto signed fd;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

R(linebreak_form,*argp) = (LINEBREAK_CRLF);

flag = (0x00);

if(!(R(file,R(config,*argp)))) {
flag = (0x01);
/* Find the default configuration file. */
p = getenv("USERPROFILE");
if(!p) {
printf("%s\n","<< Error at fn. getenv()");
return(0x00);
}
r = ct(p);
if(!r) {
printf("%s\n","<< Error at fn. ct()");
return(0x00);
}
i = (r);
r = ct(second_half);
if(!r) {
printf("%s\n","<< Error at fn. ct()");
return(0x00);
}
i = (i+(r));
i++;
// Aux.
i++;
path = (signed char(*)) malloc(i*(sizeof(signed char)));
if(!path) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
r = concats(path,p,second_half,0x00);
if(!r) {
printf("%s\n","<< Error at fn. concats()");
return(0x00);
}}

else path = (R(file,R(config,*argp)));

if(CLI_DBG) printf("%s%s\n","Path: ",path);

/* Check the configuration file size. */
r = stat(path,&stats);

if(!(r^(~(0x00)))) {
if(!flag) {
printf("%s\n","<< Error at fn. stat()");
return(0x00);
}
else {
printf("%s\n","<< No configuration file");
return(0x01);
}}

R(size,R(config,*argp)) = (stats.st_size);

if(CLI_DBG) printf("%d%s\n",R(size,R(config,*argp))," bytes at (R(size,R(config,*argp");

if(CLI_CONFIG_FILE_SIZE_LIMIT<(stats.st_size)) {
printf("%s%d%s\n","<< Could not load because the config file size exceeds ",CLI_CONFIG_FILE_SIZE_LIMIT,"..");
return(0x00);
}

// open to configure
// parse
// R(linebreak_form,*argp) = (LINEBREAK_LF);
// close

// open to edit
// load
// close

if(flag) {
if(path) free(path);
path = (0x00);
}

return(0x01);
}
