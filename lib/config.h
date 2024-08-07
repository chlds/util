/* Configure

Remarks:
----
*/


# define __cdecl
// # define COMPILE_IN_GCC_WSL64

# ifdef COMPILE_IN_GCC_WSL64
# define __cdecl __attribute__((ms_abi))
# endif

# ifndef DUAL_CONFIG_H
# include "./incl/ctrl.h"
# include "./incl/cli.h"
# include "./incl/dbg.h"
# include "./incl/al.h"
// # include "./incl/typ.h"
# endif

# ifdef COLOR_H
# include "./incl/cli_colors.h"
# endif

# ifdef CODEPAGE_H
# include "./incl/cli_codepage.h"
# endif

# ifdef STDDEF_H
# include <stddef.h>
# endif

# ifdef STDIO_H
# include <stdio.h>
# endif

# ifdef STDLIB_H
# include <stdlib.h>
# endif

# ifdef TIME_H
# ifndef READY_FOR_TIME_H
# define READY_FOR_TIME_H
# include <time.h>
# endif
# endif

# ifdef MATH_H
# include <math.h>
# endif

# ifdef ERRNO_H
# include <errno.h>
# endif

# ifdef SYS_TYPES_H
# include <sys/types.h>
# endif

# ifdef SYS_STAT_H
# include <sys/stat.h>
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
# ifndef READY_FOR_WIN32_H
# define READY_FOR_WIN32_H
# include <windows.h>
# include <shellapi.h>
# include <psapi.h>
# include <tlhelp32.h>
# endif
# endif

# ifdef DECOR_H
# include "./incl/decor.h"
# endif

# ifdef CALENDAR_INTL_H
// # include <time.h>
# include "./incl/calendar_intl.h"
# ifdef CALENDAR_DECOR_H
# include "./incl/calendar_decor.h"
# endif
# endif

# ifdef MERIDIEM_H
// # include <time.h>
# include "./incl/meridiem.h"
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
# include "./incl/cli_ascii.h"
# endif

/*
# ifdef CLI_H
# include "./cli/obj/src/incl/cli.h"
# endif
// CLI I/O
//*/

# ifdef CAR_H
# ifndef READY_FOR_CAR_H
# define READY_FOR_CAR_H
# include "./car/obj/src/incl/car.h"
# endif
# endif
// C, A and Essentials

# ifdef CAT_H
# ifndef READY_FOR_CAT_H
# define READY_FOR_CAT_H
# include "./cat/obj/src/incl/cat.h"
# endif
# endif
// C, A and Time

# ifdef CAW_H
# ifndef READY_FOR_CAW_H
# define READY_FOR_CAW_H
# include "./caw/obj/src/incl/caw.h"
# endif
# endif
// C, A and Win32

# ifdef CAL_H
# include "./cal/obj/src/incl/cal.h"
# endif

# ifdef SAT_H
# include "./sat/obj/src/incl/sat.h"
# endif

# ifdef CK_H
# ifndef READY_FOR_CK_H
# define READY_FOR_CK_H
# include "./ck/obj/src/incl/ck.h"
# endif
# endif

# ifdef CK_RES_H
# ifndef READY_FOR_CK_RES_H
# define READY_FOR_CK_RES_H
# include "./ck/obj/src/res/resource.h"
# endif
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

# ifdef CRE_H
# include "./cre/obj/src/incl/cre.h"
# endif

# ifdef DK_H
# include "./dk/obj/src/incl/dk.h"
# endif

# ifdef SI_H
# include "./si/obj/src/incl/si.h"
# endif

# ifdef DUMP_H
# include "./dump/obj/src/incl/dump.h"
# endif

# ifdef SCHED_H
# include "./sched/obj/src/incl/sched.h"
# endif

# ifdef PRIV_H
# include "./priv/obj/src/incl/priv.h"
# endif
