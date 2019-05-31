# include "./las.h"


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


# ifdef C_CALEND
# include "./calend.h"
# endif


# ifdef C_AS
// # include "./ascii_table.h"
# include "./datatype.h"
# include "./cmdl_fn.h"
# include "./fn.h"
# include "./ll.h"
# include "./recur.h"
# endif


# ifdef C_MT
# include <process.h>
# endif


# ifdef C_W32API
# include <windows.h>
# endif


# ifdef C_CMDLN
# ifndef C_W32API
# include <windows.h>
# endif
# include "./cmdln.h"
// using the CONSOLE_SCREEN_BUFFER_INFO structure(, user32.lib and more..)
# endif
