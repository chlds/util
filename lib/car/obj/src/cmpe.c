# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmpe(signed char(*args),signed char(*argp))) {
auto signed r;
AND(r,0x00);
if(!args) return(r);
if(!argp) return(r);
r = db(deref(args));
if(r^(db(deref(argp)))) return(r+(cii(db(deref(argp)))));
if(!r) return(r);
return(cmpe(++args,++argp));
}
