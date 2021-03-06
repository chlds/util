/*

Support for function and arrow keys

Remarks:
Refer at fn. cli_io_beta, fn. cli_in and fn. cli_ctrl_at_beta.
*/


# define CAR

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_support_meta_keys(signed(*character),signed char(second),signed char(first))) {

/* **** DATA, BSS and STACK */
auto signed char const low = (0xE0);
auto signed char high[] = {
(signed char) (0x91),
(signed char) (0x8D),
(signed char) (0x74),
(signed char) (0x73),
(signed char) (0x50),
(signed char) (0x4D),
(signed char) (0x4B),
(signed char) (0x48),
(signed char) (0x00),
};

auto signed ctrl[] = {
(signed) (CTRL_N),
(signed) (CTRL_U),
(signed) (CTRL_G),
(signed) (CTRL_L),
(signed) (CTRL_N),
(signed) (CTRL_F),
(signed) (CTRL_B),
(signed) (CTRL_U),
(signed) (0x00),
};

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!character) return(0x00);

flag = (0x00);
if(!(low^(first))) flag = (0x01);
if(!first) flag = (0x01);
if(!flag) return(0x00);

// initialise
*character = (CTRL_AT);

if(!(low^(first))) {
i = (0x00);
while(*(high+(i))) {
if(!(second^(*(high+(i))))) *character = (*(ctrl+(i)));
i++;
}}

if(!first) {
*character = (CTRL_AT);
}

return(0x01);
}
