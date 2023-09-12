/* Notes

Release a parent page and all its contents

Remarks:
Refer at fn. relpg
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl relppg(pg_t(*argp))) {
auto pg_t *p;
auto signed r;
if(!argp) return(0x00);
p = (argp);
r = unbindpg(p);
rl(p);
return(r);
}
