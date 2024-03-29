/* Configure

Remarks:
----
*/


# define __cdecl
// # define COMPILE_IN_GCC_WSL64

# ifdef COMPILE_IN_GCC_WSL64
# define __cdecl __attribute__((ms_abi))
# endif

# include "./ctrl.h"
# include "./dbg.h"
# include "./al.h"
# include "./cli_codepage.h"
# include "./cli_property.h"

# ifdef C_CODE_STDS
# include <io.h>
# include <conio.h>
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
# ifndef CALEND
# define CALEND
# endif
# endif

# ifdef C_MT
# include <process.h>
# endif

# ifdef C_W32API
# include <windows.h>
# include <psapi.h>
# include <tlhelp32.h>
# endif

# ifdef CALEND
# include <time.h>
# include "./calend.h"
# endif

# ifdef CLI_SYM
# include "./cli_sym.h"
# endif

# ifdef CLI_SYMB
# include "./cli_sym.h"
# include "./cue_sym.h"
# endif

# ifdef CLI_ASCII
# include "./cli_ascii.h"
# endif

# ifdef CAR
# define CAR_H
# include "./car.h"
# endif

# ifdef CAR_H
// # include "./../car/obj/src/incl/car.h"
# endif

# ifdef CBR
# include "./cbr.h"
# endif

# ifdef CAW
# define CAW_H
# include <windows.h>
# endif

# ifdef CAW_H
# include "./../caw/obj/src/incl/caw.h"
# endif
