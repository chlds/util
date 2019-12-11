/* **** Notes

Configure parameters with config file ~/.ty/config_ty.txt

Remarks:
CR (0x0D)
LF (0x0A)
//*/


# define R(D,S) (S).D
// A local macro function

# include "../../../incl/cli_w32.h"

signed(__cdecl cli_config_ty_beta(signed char(*file),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed fd;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

R(file,*argp) = (file);
R(config_file,*argp) = (0x00);
R(linebreak_form,*argp) = (LINEBREAK_CRLF);

// open
// parse
// R(config_file,*argp) = (0x01);
// R(linebreak_form,*argp) = (LINEBREAK_LF);
// close

return(0x01);
}
