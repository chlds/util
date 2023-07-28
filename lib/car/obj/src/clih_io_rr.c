# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_io_rr(signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
auto signed y;
auto signed short flag;
if(!arg) return(0x00);
if(!argp) return(0x00);
// output
r = ct(*argp);
y = coord_y_b();
if(!(caret_b(1,y))) return(0x00);
b = (*argp);
r = clih_o(100,b);
if(!(clear_rows(~0x00))) return(0x00);
// if(!(mon_b(0x01/* enable */,0x00,offs,argp))) return(0x00);
r = clih_io_rrr(arg,argp);
// if(r<(CTRL_KEYS)) return(ctrl_key(r,argp));
if(!r) return(r);
if(EQ(CTRL_Q,r)) return(r);
if(EQ(CTRL_Z,r)) return(ctrl_key_z(argp));
return(clih_io_r(arg,argp));
}
