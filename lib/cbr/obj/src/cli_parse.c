/* **** Notes

Parse a config file for the typewriter.

Remarks:
Path: ~/.ty/config.txt
CR (0x0D)
LF (0x0A)
//*/


# define CBR

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl cli_parse(CLI_TYPEWRITER(*argp))) {

// second half of the default config directory
auto signed char *second_half = ("/.ty/config.txt");

auto signed short name[CLI_NAME] = {
(signed short) (0x00),
};

auto struct _stat stats;
auto signed char *path;
auto signed char *p;
auto signed fd;
auto signed access;
auto signed permission;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

// default
R(compact_frame,R(config,*argp)) = (CLI_DEFAULT);
R(display_header,R(config,*argp)) = (CLI_DEFAULT);
R(align_tab,R(config,*argp)) = (ALIGN_TAB);
R(linebreak_form,R(config,*argp)) = (LINEBREAK_CRLF);

AND(flag,0x00);
if(!(R(file,R(config,*argp)))) {
OR(flag,0x01);
/* Find the default configuration file. */
path = (0x00);
p = rf_env("USERPROFILE");
if(!p) return(0x00);
r = cat_b(&path,p,second_half,(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}
if(CLI_DBG) printf("%s %s \n","Path:",path);
/* Check the configuration file size. */
r = _stat(path,&stats);
if(!(r^(~0x00))) {
if(!(ENOENT^(errno))) {
printf("%s %s \n","<< No config file at",path);
rl(path);
path = (0x00);
return(0x01);
}
else {
printf("%s \n","<< Error at fn. _stat()");
return(0x00);
}}}

else {
path = (R(file,R(config,*argp)));
r = decode2w(CLI_NAME,name,path);
if(!r) {
printf("%s \n","<< Error at fn. decode2w()");
return(0x00);
}
r = _wstat(name,&stats);
if(!(r^(~0x00))) {
if(!(ENOENT^(errno))) {
printf("%s \n","<< No configuration file");
return(0x01);
}
else {
printf("%s \n","<< Error at fn. _wstat()");
return(0x00);
}}}

R(size,R(config,*argp)) = (R(st_size,stats));
if(CLI_DBG) printf("%d%s \n",R(size,R(config,*argp)),"bytes at (R(size,R(config,*argp");

if(CLI_CONFIG_FILE<(R(st_size,stats))) {
printf("%s %d%s \n","<< Could not load because the config file size exceeds ",CLI_CONFIG_FILE,"bytes..");
return(0x00);
}

// open to configure
AND(access,0x00);
OR(access,_O_RDONLY);
OR(access,_O_BINARY);
if(flag) {
fd = _open(path,access);
if(!(fd^(~0x00))) {
printf("%s \n","<< Error at fn. _open()");
return(0x00);
}}
else {
fd = _wopen(name,access);
if(!(fd^(~0x00))) {
printf("%s \n","<< Error at fn. _wopen()");
return(0x00);
}}
// parse
r = cli_eq(fd,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_eq()");
return(0x00);
}
// close
r = _close(fd);
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. _close()");
return(0x00);
}

if(flag) {
if(path) rl(path);
path = (0x00);
}

else {
p = (signed char(*)) (name);
r = embed(CLI_NAME,p);
if(!r) {
printf("%s \n","<< Error at fn. embed()");
return(0x00);
}}

return(0x01);
}
