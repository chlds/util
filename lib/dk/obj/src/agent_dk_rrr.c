/* **** Notes

Detect keys.
*/


# define DK_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl agent_dk_rrr(signed(arg),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed char *(a[]) = {
"Ctrl-@","Ctrl-A","Ctrl-B","Ctrl-C",
"Ctrl-D","Ctrl-E","Ctrl-F","Ctrl-G",
"Ctrl-H","Ctrl-I","Ctrl-J","Ctrl-K",
"Ctrl-L","Ctrl-M","Ctrl-N","Ctrl-O",
"Ctrl-P","Ctrl-Q","Ctrl-R","Ctrl-S",
"Ctrl-T","Ctrl-U","Ctrl-V","Ctrl-W",
"Ctrl-X","Ctrl-Y","Ctrl-Z","Ctrl-[",
"Ctrl-\\","Ctrl-]","Ctrl-^","Ctrl-_",
0x00,
};

if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

if(arg<(CTRL_KEYS)) {
printf("%s ",*(arg+(a)));
return(0x01);
}

return(agent_dk_rrrr(arg,argp));
}
