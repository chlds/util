# define CAT_H
# define TIME_H
# include "./../../../config.h"

thdr_t(__cdecl cvte_time(void)) {
auto thdr_t f;
auto thdr_t *ff;
auto thdr_t fn[] = {
localtime,
gmtime,
0x00,
};
ff = (fn);
if(DBG) ff++;
f = (*ff);
return(f);
}
