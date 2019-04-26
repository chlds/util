/* **** Notes

Count the arguments (to the terminating null character).

argp: the leading address of an array of letters

Remarks:
Using along with fn. count_arguments_internal.
Being deprecated..
Can not know the depth of recursion with.
Please use fn. ct_args, fn. ct_ars2 or fn. ct_ars.
*/


signed(__cdecl count_arguments(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short(flag) = (0x00);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = count_arguments_internal(flag, argp);

return(r);
}
