# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl catindx_pars_xe(signed(args),signed char(*argp))) {
auto signed char *b;
auto signed char lpar[] = {
0xE2,0x81,0xBD,0x00,
};
auto signed char rpar[] = {
0xE2,0x81,0xBE,0x00,
};
auto signed char three[] = {
0xC2,0xB3,0x00,
};
auto signed char two[] = {
0xC2,0xB2,0x00,
};
auto signed char one[] = {
0xC2,0xB9,0x00,
};
auto signed char *(indx[]) = {
one,
two,
three,
0x00,
};
if(args<(0x00)) return(argp);
if(!argp) return(argp);
args = (args%(ct_v_b(indx)));
b = (*(args+(indx)));
return(cat_xe(argp,catt(lpar,b,rpar,(void*)(0x00)),(void*)(0x00)));
}
