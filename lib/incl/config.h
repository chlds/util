/* Configure

Remarks:
----
*/


# include "./dbg.h"
# include "./ctrl.h"
# include "./cli_codepage.h"
# include "./cli_property.h"
# include "./cli_macro.h"

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

# ifdef CLI_ASCII
# include "./cli_ascii.h"
# endif

# ifdef CAR
# include "./car.h"
# endif

# ifdef CBR
# include "./cbr.h"
# endif

# ifdef CCR
# include "./ccr.h"
# endif
