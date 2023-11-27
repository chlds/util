# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl downrange_coverage_r(time_t(*argt),time_t(*args),time_t(*argp))) {
auto time_t te;
if(!argt) return(0x00);
if(!args) return(0x00);
if(!argp) return(0x00);
te = (*argp);
if(te<(*args)) return(0x00);
if(!(te<(*argt))) return(0x00);
return(0x01);
}
