/* **** Notes

Pin
*/


# define CAR_H
# define PIN_H
# define UNPIN_H
# include "./../../../config.h"

signed(__cdecl clih_pin(signed char(*argp))) {
if(!(unpin_b())) return(0x00);
if(!argp) return(0x01);
if(!(*argp)) return(0x01);
return(pin_b(argp));
}
