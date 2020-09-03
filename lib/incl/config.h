/* Configure

Remarks:
----
*/


# include "./dbg.h"
# include "./cli_macro.h"

# ifdef C_CODE_STDS
# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <time.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/utime.h>
# include <locale.h>
# include <wchar.h>
# endif

# ifdef C_MT
# include <process.h>
# endif

# ifdef C_W32API
# include <windows.h>
# endif

# ifdef CALEND
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