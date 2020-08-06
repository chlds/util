/*

The constants, data types and functions for Typewriter

Along with C library

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/obj/src/cli_in.c and at util/lib/obj/src/cli_io.c
Refer at ./config.h
*/


# define CLI_QUIT (0x01)
# define CLI_IRR (0x02)
# define CLI_MORPH (0x04)
# define CLI_HELP (0x08)
# define CL_QUIT (0x10)
# define CL_IRR (0x20)
# define CL_SEARCH (0x40)
# define CL_REPLACE (0x80)
# define CLI_ALREADY_EXIST (0x100)
# define CLI_OVERWRITE (0x200)
# define CLI_REFRESH (0x400)
# define CLI_FORCED (0x800)
# define CLI_PBR (0x1000)
# define CLI_BR (0x2000)

# define CTRL_MASK (0x1F)

# define CLI_NONE (0x02)
# define CLI_SIMPLE (0x01)
# define CLI_ROWS_LIMITED (16384)
# define CLI_ROWS (8000)
# define ALIGN_TAB (0x08)
# define LINEBREAK_CRLF (0x0A0D)
# define LINEBREAK_LF (0x0A)

# define CLI_CONFIG_FILE (0x04*(0x1000))
# define CLI_EDIT_FILE (0x100000)
# define CLI_NAME (0x02*(0x100))

# define CLI_BUFF (0x02*(0x10000))
# define CLI_EMPTY (0x01+(0x07))

# define CLI_HEADER_HEIGHT (0x02)
# define CLI_FOOTER_HEIGHT (0x02)

# define CLI_CODEPAGE_IO (0x01+(0x03))
# define CLI_OBJS (0x01+(0x03))
# define CLI_CLIPBOARDS (CLI_OBJS)
# define CLI_WORKSPACE (CLI_OBJS)
# define CLI_SNAPSHOTS (CLI_OBJS)
# define CLI_PAGES (CLI_OBJS)
# define CLI_ROLLS (CLI_OBJS)

typedef struct cli_codepage {
unsigned (io[CLI_CODEPAGE_IO]);
} CLI_CODEPAGE;

typedef struct cli_pixel {
signed x;
signed y;
} CLI_PIXEL;

typedef struct cli_coord {
signed short x;
signed short y;
} CLI_COORD;

typedef struct cli_rect {
signed short left;
signed short top;
signed short right;
signed short bottom;
} CLI_RECT;

typedef struct cli_snapshot {
signed char *(base[CLI_WORKSPACE]);
signed offset;
signed short flag;
signed c;
signed i;
signed r;
struct cli_snapshot *d;
struct cli_snapshot *s;
CLI_COORD coord[CLI_OBJS];
CLI_RECT rect;
void *optl;
} CLI_SNAPSHOT;

typedef struct cli_history {
signed short insert;
signed undo;
signed redo;
CLI_SNAPSHOT *(cache);
CLI_SNAPSHOT *(snapshot[CLI_SNAPSHOTS]);
void *optl;
} CLI_HISTORY;

typedef struct cli_page {
signed char *(base[CLI_WORKSPACE]);
signed offset;
signed short flag;
signed c;
signed i;
signed r;
struct cli_page *d;
struct cli_page *s;
CLI_HISTORY history;
CLI_COORD coord[CLI_OBJS];
CLI_RECT rect;
void *optl;
} CLI_PAGE;

typedef struct cli_spool {
signed short insert;
signed undo;
signed redo;
CLI_PAGE *(cache);
CLI_PAGE *(page[CLI_PAGES]);
void *optl;
} CLI_SPOOL;

typedef struct cli_roll {
signed char *(base[CLI_WORKSPACE]);
signed size[CLI_WORKSPACE];
void *optl;
} CLI_ROLL;

/*
typedef struct cli_paper {
CLI_ROLL *(roll[CLI_ROLLS]);
void *optl;
} CLI_PAPER;
//*/

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
CLI_SPOOL spool;
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
CLI_SPOOL spool;
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
CLI_HISTORY history;
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
CLI_SPOOL spool;
CLI_COORD coord[CLI_OBJS];
CLI_RECT rect;
CLI_PIXEL pixel;
void *optl;
} CLI_TYPEWRITER;

typedef struct cli_stat {
CLI_CODEPAGE codepage;
CLI_TYPEWRITER ty;
void *optl;
} CLI_STAT;

// and more..
