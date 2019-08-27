/* **** Notes

Press an arrow key to invoke the function.

Remarks:
Launch on vu.exe
Refer at incl/cmdln.h and incl/config.h for the CMDLN_STAT structure
*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl support_arrowkeys(CMDLN_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(__cdecl*(arrowkey[])) (CMDLN_STAT(*argp)) = {
(signed(__cdecl*) (CMDLN_STAT*)) (cmdln_ctrl_b),
(signed(__cdecl*) (CMDLN_STAT*)) (cmdln_ctrl_f),
(signed(__cdecl*) (CMDLN_STAT*)) (cmdln_ctrl_u_beta),
(signed(__cdecl*) (CMDLN_STAT*)) (cmdln_ctrl_n_beta),
(signed(__cdecl*) (CMDLN_STAT*)) (0x00)
};

auto signed(low[]) = {
(signed) ('K'),
(signed) ('M'),
(signed) ('H'),
(signed) ('P'),
(signed) (0x00)
};

auto signed(c);
auto signed(i), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

c = (signed) ((*argp).c);

XOR(i,i);

while(*(i+(low))) {
if(!(c^(*(i+(low))))) {
r = (*(i+(arrowkey))) (argp);
if(!r) {
printf("%s", "<< Error at fn. (*(i+(arrowkey))) ()");
return(0x00);
}
else break;
}
INC(i);
}

return(0x01);
}
