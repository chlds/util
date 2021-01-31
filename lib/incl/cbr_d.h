/*

The constants, data types and functions for Typewriter

Along with C library

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/obj/src/cli_in.c and at util/lib/obj/src/cli_io.c
Refer at ./config.h
*/


# define CLI_NONE (0x02)
# define CLI_SIMPLE (0x01)
# define CLI_ROWS_LIMITED (16384)
# define CLI_ROWS (8000)

# define LINEBREAK_CRLF (0x0A0D)
# define LINEBREAK_LF (0x0A)

# define CLI_CONFIG_FILE (0x04*(0x1000))
# define CLI_EDIT_FILE (0x100000)
# define CLI_NAME (0x02*(0x100))

# define CLI_BUFF (0x02*(0x10000))
# define CLI_EMPTY (0x01+(0x07))

# define CLI_HEADER_HEIGHT (0x02)
# define CLI_FOOTER_HEIGHT (0x02)

# define CLI_CLIPBOARDS (CLI_OBJS)
# define CLI_ROLLS (CLI_OBJS)

typedef struct cli_roll {
signed char *(base[CLI_WORKSPACE]);
signed size[CLI_WORKSPACE];
void *optl;
} CLI_ROLL;

typedef struct cli_edit {
signed char *file;
signed l;
signed size;
signed modified;
signed fd;
void *optl;
} CLI_EDIT;

typedef struct cli_config {
signed char *file;
signed l;
signed size;
signed modified;
signed fd;
//* to be overridden in a config file
signed short compact_frame;
signed short display_header;
signed short end_of_roll;
signed short load_file;
signed short debug_monitor;
signed short wrap_words;
signed short align_tab;
signed short linebreak_form;
//*/
void *optl;
} CLI_CONFIG;

typedef struct cli_clipboard {
void *(base[CLI_WORKSPACE]);
size_t size[CLI_WORKSPACE];
signed clip;
signed flag;
cli_spool_t spool;
void *optl;
} CLI_CLIPBOARD;

typedef struct cli_search {
signed char *(cur[CLI_OBJS]);
signed offset;
signed short flag;
void *optl;
} CLI_SEARCH;

typedef struct cli_debug {
signed char *cur;
signed gauge;
void *optl;
} CLI_DEBUG;

typedef struct cli_wrap {
signed char *(cur[CLI_OBJS]);
signed char *(append[CLI_OBJS]);
signed offset;
signed short flag;
cli_spool_t spool;
CLI_COORD coord[CLI_OBJS];
CLI_RECT rect;
void *optl;
} CLI_WRAP;
/* automatically bound and booked after wrapping words */

typedef struct cli_emul {
signed char *(cur[CLI_OBJS]);
signed char *(append[CLI_OBJS]);
// signed appendant[CLI_OBJS];
signed gauge;
signed offset;
signed short flag;
} CLI_EMUL;

typedef struct cli_commandline {
signed char *(cur[CLI_OBJS]);
signed char *(append[CLI_OBJS]);
// signed appendant[CLI_OBJS];
signed gauge;
signed offset;
signed short flag;
CLI_DEBUG debug;
cli_history_t history;
CLI_COORD coord[CLI_OBJS];
CLI_RECT rect;
void *optl;
} CLI_COMMANDLINE;

typedef struct cli_typewriter {
signed char *(cur[CLI_OBJS]);
signed char *(append[CLI_OBJS]);
// signed appendant[CLI_OBJS];
signed gauge;
signed offset;
signed short flag;
signed old[CLI_OBJS];
CLI_COMMANDLINE commandline;
CLI_EMUL emul;
CLI_WRAP wrap;
CLI_DEBUG debug;
CLI_SEARCH search;
CLI_CLIPBOARD clipboard;
CLI_CONFIG config;
CLI_EDIT edit;
CLI_ROLL roll;
cli_spool_t spool;
CLI_COORD coord[CLI_OBJS];
CLI_RECT rect;
CLI_PIXEL pixel;
void *optl;
} CLI_TYPEWRITER;

typedef struct cli_stat {
cli_codepage_t codepage;
CLI_TYPEWRITER ty;
void *optl;
} CLI_STAT;

// and more..
