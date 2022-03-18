/* **** Notes

Jot down.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_jd(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char **v;
auto signed char *b;
auto signed char *path;
auto signed lim;
auto signed r;
auto signed short flag;
auto signed char *hyphen = ("-");
auto signed local = (0x01);

if(argc<(0x01)) return(0x00);
if(!argv) return(0x00);
// if(!envp) return(0x00);

AND(lim,0x00);
OR(lim,0x03);
v = (argv);
v++;
b = (*v);
if(b) {
cmpr_partially(&r,b,hyphen);
if(!r) {
lim++;
v++;
}}

if(argc<(lim)) return(jd_help());

path = (*v);
v++;
if(EQ(0x04,lim)) return(agent_jd_r(LF,path,v));

return(cli_log_v(local,path,v));
}
