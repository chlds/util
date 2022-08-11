/*

Retrieve a handle to the specified standard device i.e.,
standard input, standard output or standard error

Remarks:
It is not required to CloseHandle when done with the handle retrieved from GetStdHandle.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

void *(__cdecl currently_working_standard_handle(signed(arg))) {
auto void *v;
auto signed hdl[] = {
STD_INPUT_HANDLE,
STD_OUTPUT_HANDLE,
STD_ERROR_HANDLE,
0x00,
};
auto signed *(a[]) = {
(0x00+(hdl)),
(0x01+(hdl)),
(0x02+(hdl)),
0x00,
};
if(arg<(0x00)) return(0x00);
if(!(arg<(ct_v_d(a)))) return(0x00);
v = GetStdHandle(*(arg+(hdl)));
if(EQ(INVALID_HANDLE_VALUE,v)) v = (0x00);
return(v);
}
