/*

Retrieve the identifier of the thread that created the specified window
and optionally the identifier of the process that created the window.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl currently_working_window_tid_pid(signed(*di),void(*si))) {

auto signed pid;
auto signed r;

if(!si) return(0x00);

r = GetWindowThreadProcessId(si,&pid);
if(di) *di = (pid);

AND(pid,0x00);

return(r);
}
