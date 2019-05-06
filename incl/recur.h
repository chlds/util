/* **** Recursive functions

Check the data types and expressions

Remarks:
Along with a wrapper function to initialise the arguments for the recursive function.
If the function fails, the return value is (0x00). */







// signed(__cdecl read2dir(signed short(cmdln_flag), struct dir_info_stored(*argp)));
signed(__cdecl read2dir(signed short(cmdln_flag), void(*argp)));
signed(__cdecl open2dir(signed short(cmdln_flag), signed char(*argp)));

/* Close, read and open a directory entry out of the argp. */


signed(__cdecl cv2a_uq_internal(signed short(radix), signed char(*di), unsigned long long(si)));
signed(__cdecl cv2a_q_internal(signed short(radix), signed char(*di), signed long long(si)));
signed(__cdecl cv2a_uq(signed short(radix), signed char(*di), unsigned long long(si)));
signed(__cdecl cv2a_q(signed short(radix), signed char(*di), signed long long(si)));

/* Convert to (an array for) letters out of an unsigned and/or signed quad word
with a wrapper function to initialise arguments for the recursive function. */


signed(__cdecl cv2uq_internal(signed short(radix), unsigned long long(*di), signed char(*base)));
signed(__cdecl cv2q_internal(signed short(radix), signed long long(*di), signed char(*base)));
signed(__cdecl cv2uq(signed short(radix), unsigned long long(*di), signed char(*base)));
signed(__cdecl cv2q(signed short(radix), signed long long(*di), signed char(*base)));

/* Convert to a signed and/or unsigned quad word out of (an array for) letters
with a wrapper function to initialise arguments for the recursive function. */


signed(__cdecl cv2ud_internal(signed short(radix), unsigned(*di), signed char(*base)));
signed(__cdecl cv2d_internal(signed short(radix), signed(*di), signed char(*base)));
signed(__cdecl cv2ud(signed short(radix), unsigned(*di), signed char(*base)));
signed(__cdecl cv2d(signed short(radix), signed(*di), signed char(*base)));

/* Convert to a signed and/or unsigned double word out of an array for letters. */


signed(__cdecl cmpr_partially(signed(*cache), signed char(*di), signed char(*si)));
signed(__cdecl cmpr(signed(*cache), signed char(*di), signed char(*si)));

/* Compare strings */


signed(__cdecl ct_ars_internal(signed short(flag), signed(*di), signed char(*base)));
signed(__cdecl ct_ars(signed(*di), signed char(*base)));
signed(__cdecl ct_ars2(signed char(*base)));

/* Count arguments to the terminating null character. */


signed(__cdecl ct2_except_internal(signed char(cache), signed(*di), signed char(*base)));
signed(__cdecl ct2_except(signed char(cache), signed char(*base)));
signed(__cdecl ct_except(signed char(di), signed char(*base)));

/* Count letters to the terminating null character except for the one you'd select. */


signed(__cdecl ct2(signed char(di), signed char(*base)));
signed(__cdecl ct(signed char(*argp)));

/* Count letters to the one you'd select or to the terminating null character. */


signed(__cdecl catppp(signed char(***argp)));
signed(__cdecl catpp(signed char(**argp)));

/* Output character lines out of the argument. */
