/* Configure

Remarks:
----
*/


# define __cdecl
// # define COMPILE_IN_GCC_WSL64

# ifdef COMPILE_IN_GCC_WSL64
# define __cdecl __attribute__((ms_abi))
# endif

# define OCTET (0x08)
# define NIBBLE (0x04)

# include "./incl/ctrl.h"
# include "./incl/dbg.h"
# include "./incl/al.h"

# ifdef CODEPAGE_H
# include "./cli_codepage.h"
# endif

# ifdef CLI_H
# include "./cli_property.h"
# endif

# ifdef C_H
# include <errno.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/utime.h>
# include <locale.h>
# include <wchar.h>
# include <signal.h>
# ifndef CALENDAR_H
# define CALENDAR_H
# endif
# endif

# ifdef MT_H
# include <process.h>
# endif

# ifdef WIN32_H
# include <windows.h>
# include <psapi.h>
# include <tlhelp32.h>
# endif

# ifdef CALENDAR_H
# include <time.h>
# include "./calend.h"
# endif

# ifdef SYM_H
# include "./cli_sym.h"
# endif

# ifdef SYMB_H
# include "./cli_sym.h"
# include "./cue_sym.h"
# endif

# ifdef ASCII_H
# include "./cli_ascii.h"
# endif

# ifdef CAR_H
# include "./car/obj/src/incl/car.h"
# endif

# ifdef CAW_H
# include "./caw/obj/src/incl/caw.h"
# endif
