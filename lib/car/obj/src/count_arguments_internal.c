/* **** **** **** **** Notes

Count the arguments (to the terminating null character).

argp: the leading address of an array of letters

Remarks:
Using along with an initialisation wrapper function called count_arguments.
Being deprecated..
Please use fn. ct_args, fn. ct_ars2 or fn. ct_ars.
*/


signed(__cdecl count_arguments_internal(signed short(flag), signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed char const(delimiter) = (' ');

/* **** CODE/TEXT */
if(!base) return(0x00);
if(!(*base)) return(0x00);

if(!(delimiter^(*base))) {
flag = (flag^(flag));
base++;
return(count_arguments_internal(flag, base));
}

if(flag) {
base++;
return(count_arguments_internal(flag, base));
}

flag++;
base++;
return(1+(count_arguments_internal(flag, base)));
}
