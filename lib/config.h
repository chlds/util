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

# ifndef DUAL_CONFIG_H
# define OBJS (NIBBLE)
# include "./incl/ctrl.h"
# include "./incl/dbg.h"
# include "./incl/al.h"
# endif

# ifdef CODEPAGE_H
# include "./incl/cli_codepage.h"
# endif

# ifdef STDIO_H
# include <stdio.h>
# endif

# ifdef STDLIB_H
# include <stdlib.h>
# endif

# ifdef TIME_H
# include <time.h>
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
# ifndef CALEND_H
# define CALEND_H
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

# ifdef CALEND_H
# include <time.h>
# include "./incl/calend.h"
# endif

# ifdef CALS_H
# include "./incl/cals.h"
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

# ifdef CLI_H
# include "./cli/obj/src/incl/cli.h"
# endif

# ifdef CAR_H
# include "./car/obj/src/incl/car.h"
# endif

# ifdef CAW_H
# include "./caw/obj/src/incl/caw.h"
# endif

# ifdef SAT_H
# include "./sat/obj/src/incl/sat.h"
# endif

# ifdef CK_H
# include "./ck/obj/src/incl/ck.h"
# endif

# ifdef PIN_H
# include "./pin/obj/src/incl/pin.h"
# endif

# ifdef DEPIN_H
# include "./depin/obj/src/incl/depin.h"
# endif

# ifdef UNPIN_H
# include "./unpin/obj/src/incl/unpin.h"
# endif

# ifdef DK_H
# include "./dk/obj/src/incl/dk.h"
# endif

# ifdef DUMP_H
# include "./dump/obj/src/incl/dump.h"
# endif

# ifdef PRIV_H
# include "./priv/obj/src/incl/priv.h"
# endif
