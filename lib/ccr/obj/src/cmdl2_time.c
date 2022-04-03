/* **** Notes

Commandlet to output the local time

Flow:
Create/map all the Objects on the RAM
----
Select all the handles of the created, loaded or mapped objects to the handles of the memory device context
----
Get a handle of the common device context
Bit Block Transfer to the common DC
Release the handle of the common device context
----
Get a handle of the common device context
Bit Block Transfer to the common DC
Release the handle of the common device context
----
De-select all the handles of the created, loaded or mapped objects out of the handles of the memory device context
----
Delete/unmap all the Objects on the RAM

Extra:
fn. GetStdHandle to retrieve a handle to the specified standard device (standard input, standard output, or standard error).
fn. GetConsoleWindow to retrieve the window handle used by the console associated with the calling process.
fn. GetDesktopWindow to retrieve a handle to the desktop window.
fn. GetWindowInfo to retrieve information about the specified window.
fn. EnumProcesses to retrieve the process identifier for each process object in the system.
fn. EnumDeviceDrivers to retrieve the load address for each device driver in the system.
Refer on site:docs.microsoft.com

Enhanced Metafiles for Device Independency:
fn. CreateEnhMetaFile()
creates a device context for an enhanced-format metafile. This device context
can be used to store a device-independent picture.
i.e., Map an enhmeta device context.
----
fn. CloseEnhMetaFile()
closes an enhanced-metafile device context
and returns a handle that identifies an enhanced-format metafile.
i.e., Unmap the enhmeta device context and return a handle for enhmeta file.
----
fn. DeleteEnhMetaFile()
Unmap an enhmeta object on the RAM but not delete an enhmeta file if the one is on the storage device.
i.e., delete the enhmeta file.
*/


# define CCR
# include <stdio.h>
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_time(SAT(*argp))) {

auto signed r;

if(!argp) printf("%s \n","<< Error at cmdl2_time()");

INC(R(Running,*argp));
r = cmdl2_time_r(argp);
if(!r) printf("%s \n","<< Error at cmdl2_time_r()");

DEC(R(Running,*argp));

return(r);
}
