# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cvtxtoffullmonths_abbrev_in_ll_te(signed(arg),time_t(*argp))) {
auto signed char **w;
auto signed char *b;
auto signed nonae = (7);
auto signed idus = (15);
auto signed char *(full[]) = {
"",
"KAL",
"A D VI NON",
"A D V NON",
"A D IV NON",
"A D III NON",
"PRID NON",
"NON",
"A D VIII EID",
"A D VII EID",
"A D VI EID",
"A D V EID",
"A D IV EID",
"A D III EID",
"PRID EID",
"EID",
/*
"Kal.",
"a. d. VI Non.",
"a. d. V Non.",
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
//*/
0x00,
};
if(!(0x00<(arg))) return(0x00);
if(!argp) return(0x00);
b = (0x00);
w = (full);
if(arg<(ct_v(w))) b = cathy(*(arg+(w)));
return(cvtxtofmonths_abbrev_in_ll_te(b,argp));
}
