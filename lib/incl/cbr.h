/*

The constants, data types and functions for Typewriter

Along with C library

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/obj/src/cli_in.c and at util/lib/obj/src/cli_io.c
Refer at ./config.h
*/


# include "./car.h"
# include "./cli_dbg.h"

# include "./cbr_d.h"
# include "./cbr_e.h"
# include "./cbr_f.h"

# ifdef CLI_W32
# include <windows.h>
# include "./cbr_d_w32.h"
# include "./cbr_f_w32.h"
# endif

// and more..
