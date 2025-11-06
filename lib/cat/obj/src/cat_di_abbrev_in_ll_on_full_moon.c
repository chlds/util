# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cat_di_abbrev_in_ll_on_full_moon(time_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed debug = (DBG);
auto signed idus = (15);
auto signed nonae = (7);
auto signed kalendae = (1);
auto signed deco = (0x00);
auto signed char *(__cdecl*f)(signed(arg));
auto signed char *(__cdecl**d)(signed(arg));
auto signed char *(__cdecl*(a[]))(signed(arg)) = {
cat_null,
cat_kal,
cat_vi_in_ll,
cat_v_in_ll,
cat_iv_in_ll,
cat_iii_in_ll,
cat_prid,
cat_non,
cat_viii_in_ll,
cat_vii_in_ll,
cat_vi_in_ll,
cat_v_in_ll,
cat_iv_in_ll,
cat_iii_in_ll,
cat_prid,
cat_eid,
0x00,
};
b = (0x00);
if(!argp) return(b);
r = current_di_b(debug,argp);
if(!(0x01+(r))) return(b);
if(idus<(r)) return(cat_di_abbrev_in_ll_on_new_moon(argp));
r = (r%(ct_f_v((void*(__cdecl**)(void*))(a))));
if(!r) return(b);
d = (a);
d = (r+(d));
f = (*d);
b = f(deco);
if(EQ(kalendae,r)) return(b);
if(EQ(nonae,r)) return(b);
if(EQ(idus,r)) return(b);
if(r<(nonae)) b = cathe(b,cathe(cat_word_separator(),cat_non(deco)));
if(EQ(r,nonae+(~0x00))) return(b);
if(r<(nonae)) return(catne(b,catne(cat_word_separator(),catne(cat_diem_abbrev(deco),catne(cat_word_separator(),cat_ante_abbrev(deco))))));
b = cathe(b,cathe(cat_word_separator(),cat_eid(deco)));
if(EQ(r,idus+(~0x00))) return(b);
return(catne(b,catne(cat_word_separator(),catne(cat_diem_abbrev(deco),catne(cat_word_separator(),cat_ante_abbrev(deco))))));
}
