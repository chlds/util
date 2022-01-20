/* **** Notes

Parse a config file for the typewriter.

Remarks:
Path: ~/.ty/config.txt
CR (0x0D)
LF (0x0A)
//*/


# define CBR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_parse(CLI_TYPEWRITER(*argp))) {

auto signed char *path;
auto signed char *p;
auto signed short *w;
auto signed i,r;
auto signed short flag;
auto size_t size;
// second half of the default config directory
auto signed char *second_half = ("/.ty/config.txt");
auto signed short name[CLI_NAME] = {
(signed short) (0x00),
};

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
r = already_exist_b(&size,path);
if(!r) {
if(EQ(size,~0x00)) {
printf("%s %s \n","<< No config file at",path);
rl(path);
path = (0x00);
return(0x01);
}
printf("%s \n","<< Error at fn. already_exist_b()");
return(0x00);
}}

else {
path = (R(file,R(config,*argp)));
r = decode2w(CLI_NAME,name,path);
if(!r) {
printf("%s \n","<< Error at fn. decode2w()");
return(0x00);
}
r = already_exist_w(&size,name);
if(!r) {
if(EQ(size,~0x00)) {
printf("%s \n","<< No configuration file");
return(0x01);
}
printf("%s \n","<< Error at fn. already_exist_w()");
return(0x00);
}}

R(size,R(config,*argp)) = (size);
if(CLI_DBG) printf("%d%s \n",R(size,R(config,*argp)),"bytes at (R(size,R(config,*argp");

if(CLI_CONFIG_FILE<(size)) {
printf("%s %d%s \n","<< Could not load because the config file size exceeds ",CLI_CONFIG_FILE,"bytes..");
return(0x00);
}

// configure
if(flag) {
r = parse_b(path,argp,cli_eq);
if(!r) printf("%s \n","<< Error at fn. parse_b()");
}
else {
r = parse_w(name,argp,cli_eq);
if(!r) printf("%s \n","<< Error at fn. parse_w()");
}

if(flag) {
if(path) rl(path);
path = (0x00);
}
else {
w = (name);
if(!(embed_w(0x00,w))) {
printf("%s \n","<< Error at fn. embed_w()");
return(0x00);
}}

return(r);
}
