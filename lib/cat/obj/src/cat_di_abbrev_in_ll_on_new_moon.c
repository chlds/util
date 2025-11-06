# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_di_abbrev_in_ll_on_new_moon(time_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed debug = (DBG);
auto signed deco = (0x00);
auto signed char *(__cdecl*f)(signed(arg));
auto signed char *(__cdecl**d)(signed(arg));
auto signed char *(__cdecl*(a[]))(signed(arg)) = {
cat_null,
cat_xix_in_ll,
cat_xviii_in_ll,
cat_xvii_in_ll,
cat_xvi_in_ll,
cat_xv_in_ll,
cat_xiv_in_ll,
cat_xiii_in_ll,
cat_xii_in_ll,
cat_xi_in_ll,
cat_x_in_ll,
cat_ix_in_ll,
cat_viii_in_ll,
cat_vii_in_ll,
cat_vi_in_ll,
cat_v_in_ll,
cat_iv_in_ll,
cat_iii_in_ll,
cat_prid,
0x00,
};
b = (0x00);
if(!argp) return(b);
r = current_di_b(debug,argp);
if(!(0x01+(r))) return(b);
r = cat_di_in_ll_to_new_moon(r,argp);
if(!r) return(b);
b = cat_kal(deco);
d = (a);
d = (d+(ct_f_v((void*(__cdecl**)(void*))(d))));
--d;
f = (*d);
if(EQ(0x01,r)) return(catne(b,catne(cat_word_separator(),f(deco))));
d = (a);
r = (0x01+(~r));
r = (r+(ct_f_v((void*(__cdecl**)(void*))(d))));
if(!(0x00<(r))) return(b);
r = (r%(ct_f_v((void*(__cdecl**)(void*))(d))));
d = (r+(d));
f = (*d);
b = catne(b,catne(cat_word_separator(),catne(f(deco),catne(cat_word_separator(),catne(cat_diem_abbrev(deco),catne(cat_word_separator(),cat_ante_abbrev(deco)))))));
return(b);
}
