# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl wrtt_r(signed char *argp)) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(EQ(HT,*argp)) return(cli_indent(cli_reckon(ALIGN)));
return(wrt(argp,0x01));
}
