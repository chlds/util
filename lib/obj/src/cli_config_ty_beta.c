/* **** Notes

Configure parameters with config file ~/.ty/config_ty.txt

Remarks:
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

signed(__cdecl cli_config_ty_beta(signed char(*file),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto struct stat stats;

auto signed char buff[0x400];
auto signed char *p;
auto signed fd;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

R(file,*argp) = (file);
R(file_size,*argp) = (0x00);
R(config_file_size,*argp) = (0x00);
R(linebreak_form,*argp) = (LINEBREAK_CRLF);

/* Find the configuration file. */
p = getenv("USERPROFILE");
if(!p) {
printf("%s\n","<< Error at fn. getenv()");
return(0x00);
}

r = concats(buff,p,"/.ty/config_ty.txt",0x00);
if(!r) {
printf("%s\n","<< Error at fn. concats()");
return(0x00);
}

if(CLI_DBG) printf("%s%s\n","Path: ",buff);

/* Check the configuration file size. */
r = stat(buff,&stats);

if(!(r^(~(0x00)))) {
/*
printf("%s\n","<< Error at fn. stat()");
return(0x00);
//*/
printf("%s\n","<< No configuration file is at ~/.ty/config_ty.txt.");
return(0x01);
}

R(config_file_size,*argp) = (stats.st_size);

if(CLI_DBG) printf("%d%s\n",R(config_file_size,*argp)," bytes at (R(config_file_size,*argp");

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

return(0x01);
}
