# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtofhollowmonths_in_ll_te(signed(arg),time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed nonae = (5);
auto signed idus = (13);
auto signed char *(hollow[]) = {
"",
"KALENDIS",
"ANTE DIEM QVARTVM NONAS",
"ANTE DIEM TERTIVM NONAS",
"PRIDIE NONAS",
"NONIS",
"ANTE DIEM OCTAVVM IDVS",
"ANTE DIEM SEPTIMVM IDVS",
"ANTE DIEM SEXTVM IDVS",
"ANTE DIEM QVINTVM IDVS",
"ANTE DIEM QVARTVM IDVS",
"ANTE DIEM TERTIVM IDVS",
"PRIDIE IDVS",
"IDIBVS",
/*
"Kalendis",
"ante diem quartum Nonas",
"ante diem tertium Nonas",
"pridie Nonas",
"Nonis",
"ante diem octavum Idus",
"ante diem septimum Idus",
"ante diem sextum Idus",
"ante diem quintum Idus",
"ante diem quartum Idus",
"ante diem tertium Idus",
"pridie Idus",
"Idibus",
//*/
0x00,
};
if(!(0x00<(arg))) return(0x00);
if(!argp) return(0x00);
b = (0x00);
w = (hollow);
if(arg<(ct_v(w))) cat_b(&b,*(arg+(w)),(void*)0x00);
return(cvtxtofmonths_in_ll_te(b,argp));
}
