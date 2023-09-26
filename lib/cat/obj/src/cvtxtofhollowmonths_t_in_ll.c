# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtofhollowmonths_t_in_ll(signed(arg),time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed nonae = (5);
auto signed idus = (13);
auto signed char *(hollow[]) = {
"",
"Kalendis",
"ante diem quartum Nonas",
"ante diem tertium Nonas",
"ante diem pridie Nonas",
"Nonis",
"ante diem octavum Idus",
"ante diem septimum Idus",
"ante diem sextum Idus",
"ante diem quintum Idus",
"ante diem quartum Idus",
"ante diem tertium Idus",
"pridie Idus",
"Idibus",
0x00,
};
if(!(0x00<(arg))) return(0x00);
if(!argp) return(0x00);
b = (0x00);
w = (hollow);
if(arg<(ct_v(w))) cat_b(&b,*(arg+(w)),(void*)0x00);
return(cvtxtofmonths_t_in_ll(b,argp));
}
