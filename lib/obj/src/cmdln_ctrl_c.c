/* **** Notes

Press <Ctrl-C> to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


signed(__cdecl cmdln_ctrl_c(void(*argp))) {

/* **** DATA, BSS and STACK */
extern signed(terminate);
auto signed(i), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

printf("%s\n", "Ctrl-C;");

terminate++;

return(0x01);
}
