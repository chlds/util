/* **** Notes

Clock

Remarks:
Call fn. rl later
Calendar week
2022-W01-1 ;Starting on Monday
2022-W01-2 ;Starting on Sunday
2022-W01-3 ;Starting on Saturday
*/


# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl map_week_number(signed(arg),time_t(*argp))) {
auto signed char *b;
auto signed char sat[] = {
0xC2,0xB3,0x00,
};
auto signed char sun[] = {
0xC2,0xB2,0x00,
};
auto signed char mon[] = {
0xC2,0xB9,0x00,
};
auto signed char *(start[]) = {
mon,
sun,
sat,
0x00,
};
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!(arg<(ct_v_b(start)))) return(0x00);
if(!(0x00<(*argp))) AND(*argp,0x00);
b = (*(arg+(start)));
return(map_week_number_r(arg,b,argp));
}
