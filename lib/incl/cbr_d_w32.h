/*

The constants, data types and functions for Typewriter

Along with C and Windows libraries

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/obj/src/cli_in.c and at util/lib/obj/src/cli_io_beta.c
Refer at ./config.h
*/


# define CG_COMEBACK (0x08)
# define CG_CLEAR (0x04)
# define CG_SYNC (0x02)
# define CG_EMUL (0x01)

# define CLI_W32_OBJS (0x01+(0x03))
# define CLI_DEVICES (CLI_W32_OBJS)
# define CLI_MODULES (CLI_W32_OBJS)
# define CLI_SEARCHES (CLI_W32_OBJS)
# define CLI_WINDOWS (CLI_W32_OBJS)

typedef struct cli_w32_stat {
cli_codepage_t codepage;
cli_virtual_terminal_t vt;
CLI_TYPEWRITER ty;
CONSOLE_SCREEN_BUFFER_INFO csbi;
void *(window[CLI_WINDOWS]);
void *(search[CLI_SEARCHES]);
void *(module[CLI_MODULES]);
void *(device[CLI_DEVICES]);
void *optl;
} CLI_W32_STAT;

// and more..
