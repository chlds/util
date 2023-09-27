# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtofhollowmonths_abbrev_in_ll_te(signed(arg),time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed nonae = (5);
auto signed idus = (13);
auto signed char *(hollow[]) = {
"",
"Kal.",
"a. d. IV Non.",
"a. d. III Non.",
"prid. Non.",
"Non.",
"a. d. VIII Eid.",
"a. d. VII Eid.",
"a. d. VI Eid.",
"a. d. V Eid.",
"a. d. IV Eid.",
"a. d. III Eid.",
"prid. Eid.",
"Eid.",
0x00,
};
if(!(0x00<(arg))) return(0x00);
if(!argp) return(0x00);
b = (0x00);
w = (hollow);
if(arg<(ct_v(w))) cat_b(&b,*(arg+(w)),(void*)0x00);
return(cvtxtofmonths_abbrev_in_ll_te(b,argp));
}
