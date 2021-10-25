/*

Copy to the clipboard.

Remarks:
Refer at util/lib/obj/src/cli_init_roll.c and util/bin/obj/src/ty.c
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_fn_clip(cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cli_clipboard_t *clipboard;
auto cli_text_t *text;
auto signed short *w;
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

AND(flag,0x00);
clipboard = (&(R(clipboard,*argp)));
text = (&(R(text,*argp)));

r = clip_to_empty_beta();
if(!r) return(0x00);

r = v_map_beta(text,clipboard);
if(!r) {
cli_message(r,"<< Error at fn. v_map_beta() \n");
OR(flag,0x01);
}

if(!flag) {
r = clipboard_to_pin_paste_beta(CLI_PIN,clipboard);
if(!r) {
cli_message(r,"<< Error at fn. clipboard_to_pin_paste_beta() \n");
OR(flag,0x01);
}}

r = v_unmap_beta(clipboard);
if(!r) {
cli_message(r,"<< Error at fn. v_unmap_beta() \n");
OR(flag,0x01);
}

if(flag) {
AND(R(clip,*clipboard),0x00);
return(0x00);
}

return(0x01);
}
