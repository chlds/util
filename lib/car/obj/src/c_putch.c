/*

Fn. putch for Linux
*/


# include <stdio.h>
// # include "./incl/car.h"

signed(__cdecl c_putch(signed(arg))) {
// return(fputc(arg,stdout));
return(0x01);
}
