# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_di_decor_in_ll_on_new_moon(time_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed debug = (DBG);
auto signed tertivm_decimvm = (13+(~0x00)); // 12th
auto signed septimvm_decimvm = (17+(~0x00)); // 16th
auto signed deco = (0x01);
auto signed char *(__cdecl*f)(signed(arg));
auto signed char *(__cdecl**d)(signed(arg));
auto signed char *(__cdecl*(a[]))(signed(arg)) = {
cat_null,
cat_vndevicesimvm,
cat_dvodevicesimvm,
cat_septimvm,
cat_sextvm,
cat_qvintvm,
cat_qvartvm,
cat_tertivm,
cat_dvodecimvm,
cat_vndecimvm,
cat_decimvm,
cat_nonvm,
cat_octavvm,
cat_septimvm,
cat_sextvm,
cat_qvintvm,
cat_qvartvm,
cat_tertivm,
cat_pridie,
0x00,
};
b = (0x00);
if(!argp) return(b);
r = current_di_b(debug,argp);
if(!(0x01+(r))) return(b);
r = cat_di_in_ll_to_new_moon(r,argp);
if(!r) return(b);
b = cat_kalendas(deco);
d = (a);
d = (d+(ct_f_v((void*(__cdecl**)(void*))(d))));
--d;
f = (*d);
if(EQ(0x01,r)) return(catne(b,catne(cat_word_separator(),f(deco))));
if(!(r<(tertivm_decimvm))) {
if(!(septimvm_decimvm<(r))) b = catne(b,catne(cat_word_separator(),cat_decimvm(deco)));
}
d = (a);
r = (0x01+(~r));
r = (r+(ct_f_v((void*(__cdecl**)(void*))(d))));
if(!(0x00<(r))) return(b);
r = (r%(ct_f_v((void*(__cdecl**)(void*))(d))));
d = (r+(d));
f = (*d);
b = catne(b,catne(cat_word_separator(),catne(f(deco),catne(cat_word_separator(),catne(cat_diem(deco),catne(cat_word_separator(),cat_ante(deco)))))));
return(b);
}
