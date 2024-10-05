# define CAR_H
# include "./../../../config.h"

signed(__cdecl cntt_tertiary(signed char(***arg))) {
if(!arg) return(0x00);
if(!(*arg)) return(0x00);
arg++;
return(0x01+(cntt_tertiary(arg)));
}
