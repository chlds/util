/* **** **** **** **** Notes

./incl/lib/spl_free.c

Unmap all the buffers allocated by fn. spl() using fn. spl_free().

//*/




# define C_CODE_STDS

# include "./../decl/config.h"




char signed(__cdecl spl_free(char signed(**argp))) {




/* **** **** DATA */

// auto const int signed(DELAY) = (int signed) (100);

auto int signed(i), (j), (l), (r);

auto short int signed(flag);

auto char signed(c);




/* **** **** CODE/TEXT */

if(!(argp)) {
// Error
return(char signed) (~(NIL));
}




/* **** Count the arguments */

XOR(i, i);

while(*(argp+(i))) {
// Monitoring
// printf("\n%s%s", ("Unmap at the pointer of "), (*(argp+(i))));
free(*(argp+(i++)));
}

/* **** Monitoring
printf("\n%s%d", ("Unmapped: "), (i));
//*/

free(argp);

XOR(c, c);

return(char signed) (c);
}
