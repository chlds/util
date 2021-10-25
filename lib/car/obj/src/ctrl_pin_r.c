/*

Copy to the clipboard.

Remarks:
Refer at util/lib/obj/src/cli_init_roll.c and util/bin/obj/src/ty.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_pin_r(ty_t(*argp))) {

auto signed char *b;
auto signed short *w;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;
// auto clipboard_t clipboard;

if(!argp) return(0x00);

/* currently under construction
page = (&(R(page,*argp)));
r = v_map_beta(page,&clipboard);
if(!r) {
cli_message(r,"<< Error at fn. v_map_beta() \n");
return(0x00);
}

r = clipboard_to_pin_paste_beta(CLI_PIN,&clipboard);
if(!r) cli_message(r,"<< Error at fn. clipboard_to_pin_paste_beta() \n");

if(!(v_unmap_beta(&clipboard))) {
cli_message(r,"<< Error at fn. v_unmap_beta() \n");
return(0x00);
}
//*/

// return(r);
return(0x01);
}
