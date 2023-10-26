# define CAT_H
# define TIME_H
# include "./../../../config.h"

THDR_T(__cdecl cvte_time(void)) {
auto THDR_T f;
auto THDR_T *ff;
auto THDR_T fn[] = {
localtime,
gmtime,
0x00,
};
ff = (fn);
if(DBG) ff++;
f = (*ff);
return(f);
}
