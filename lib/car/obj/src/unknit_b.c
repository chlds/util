/* **** Notes

Terminate a thread.

Remarks:
You can call fn. _endthread explicitly to terminate a thread, however,
_endthread is automatically called when the thread returns from the routine that's passed as a parameter.
*/


# define CAR
# include <process.h>
# include "./../../../incl/config.h"

void(__cdecl unknit_b(void)) {
_endthread();
}
