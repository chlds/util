/* **** Notes

Press <Ctrl-#> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


signed(__cdecl cmdln_ctrl_hash(void(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(command_mode);

auto signed(cache), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(command_mode) return(0x01);

printf("%s", "Ctrl-#;");

return(0x01);
}
