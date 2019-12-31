/* **** Notes

Parse a config file for the typewriter.

Remarks:
Path: ~/.ty/config.txt
CR (0x0D)
LF (0x0A)
//*/


# define CLI_MACRO

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_parse(CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
// second half of the default config directory
auto signed char *second_half = ("/.ty/config.txt");
auto signed short name[CLI_NAME] = {
(signed short) (0x00),
};

auto struct _stat stats;
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
i = (i*(sizeof(signed char)));
path = (signed char(*)) malloc(i);
if(!path) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}
r = concats(path,p,second_half,(void*) 0x00);
if(!r) {
printf("%s\n","<< Error at fn. concats()");
return(0x00);
}
if(CLI_DBG) printf("%s%s\n","Path: ",path);
/* Check the configuration file size. */
r = _stat(path,&stats);
if(!(r^(~(0x00)))) {
if(!(ENOENT^(errno))) printf("%s%s\n","<< No config file at ",path);
else {
printf("%s\n","<< Error at fn. _stat()");
return(0x00);
}}}

else {
path = (R(file,R(config,*argp)));
r = decode2w(CLI_NAME,name,path);
if(!r) {
printf("%s\n","<< Error at fn. decode2w()");
return(0x00);
}
r = _wstat(name,&stats);
if(!(r^(~(0x00)))) {
if(!(ENOENT^(errno))) printf("%s\n","<< No configuration file");
else {
printf("%s\n","<< Error at fn. _wstat()");
return(0x00);
}}}

R(size,R(config,*argp)) = (stats.st_size);
if(CLI_DBG) printf("%d%s\n",R(size,R(config,*argp))," bytes at (R(size,R(config,*argp");

if(CLI_CONFIG_FILE<(stats.st_size)) {
printf("%s%d%s\n","<< Could not load because the config file size exceeds ",CLI_CONFIG_FILE,"..");
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
