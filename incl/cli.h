/*

The constants, data types and functions for Typewriter

Along with C library

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/obj/src/cli_in.c and at util/lib/obj/src/cli_io.c
Refer at ./config_ty.h
*/


/*
# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <locale.h>
# include <fcntl.h>
# include <stdarg.h>
# include <string.h>
# include <wchar.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <sys/utime.h>
# include <process.h>
//*/

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
# define CLI_QREFRESH (0x800)

# define CLI_DBG_Q (0x08)
# define CLI_DBG_D (0x04)
# define CLI_DBG_W (0x02)
# define CLI_DBG_B (0x01)
# define CLI_DBG (CLI_DBG_D)

# define CTRL_MASK (0x1F)

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

enum {
CTRL_AT,CTRL_A,CTRL_B,CTRL_C,
CTRL_D,CTRL_E,CTRL_F,CTRL_G,
CTRL_H,CTRL_I,CTRL_J,CTRL_K,
CTRL_L,CTRL_M,CTRL_N,CTRL_O,
CTRL_P,CTRL_Q,CTRL_R,CTRL_S,
CTRL_T,CTRL_U,CTRL_V,CTRL_W,
CTRL_X,CTRL_Y,CTRL_Z,CTRL_LSB,
CTRL_RS,CTRL_RSB,CTRL_CA,CTRL_LL,
CTRL_KEYS,
};

enum {
CLI_BASE,
CLI_OFFSET,
CLI_INDEX,
CLI_LEAD,
};

enum {
CLI_IN,
CLI_OUT,
CLI_ERR,
};

enum {
CLI_UNDO,
CLI_REDO,
};

typedef struct cli_codepage {
unsigned (io[CLI_CODEPAGE_IO]);
} CLI_CODEPAGE;

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
signed short linebreak;
signed short offset;
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
signed short linebreak;
signed short offset;
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
void *optl;
} CLI_CONFIG;

typedef struct cli_clipboard {
void *(base[CLI_WORKSPACE]);
size_t size;
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

typedef struct cli_emul {
signed char *(cur[CLI_OBJS]);
signed char *(append[CLI_OBJS]);
// signed appendant[CLI_OBJS];
signed gauge;
signed short offset;
signed short linebreak;
signed short flag;
} CLI_EMUL;

typedef struct cli_commandline {
signed char *(cur[CLI_OBJS]);
signed char *(append[CLI_OBJS]);
// signed appendant[CLI_OBJS];
signed gauge;
signed short offset;
signed short linebreak;
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
signed short offset;
signed short linebreak;
signed short flag;
signed short align_tab;
signed short linebreak_form;
signed old[CLI_OBJS];
CLI_COMMANDLINE commandline;
CLI_EMUL emul;
CLI_DEBUG debug;
CLI_SEARCH search;
CLI_CLIPBOARD clipboard;
CLI_CONFIG config;
CLI_EDIT edit;
CLI_ROLL roll;
CLI_SPOOL spool;
CLI_COORD coord[CLI_OBJS];
CLI_RECT rect;
void *optl;
} CLI_TYPEWRITER;

typedef struct cli_stat {
CLI_CODEPAGE codepage;
CLI_TYPEWRITER ty;
void *optl;
} CLI_STAT;

signed(__cdecl cli_prev_word_internal(signed char(**retrv),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_prev_word(signed char(**retrv),CLI_TYPEWRITER(*argp)));
// retrieve an address of the previous word.

signed(__cdecl cli_emul(signed short(emul),CLI_TYPEWRITER(*argp)));
// backup or restore parameters for workspace

signed(__cdecl cl_extend(signed short(cue),signed(extra),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_extend(signed short(channel),signed short(cue),signed(extra),CLI_TYPEWRITER(*argp)));
// extend workspace

signed(__cdecl cli_append(signed char(*appendant),CLI_TYPEWRITER(*argp)));
// append

signed(__cdecl cli_display_header(CLI_TYPEWRITER(*argp)));
// display the two-row header

signed(__cdecl cli_eq_tab(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_eol(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq_internal(signed short(term),signed(fd),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_eq(signed(fd),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_parse(CLI_TYPEWRITER(*argp)));
// parse a config file for the typewriter

signed(__cdecl cli_init_ty(signed(size),CLI_TYPEWRITER(*argp)));
// initialise

signed(__cdecl cli_init_rolls(signed(size),CLI_ROLL(*argp)));
signed(__cdecl cli_unmap_rolls(CLI_ROLL(*argp)));
// charge rolls

signed(__cdecl cli_search_pages_internal(CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_search_pages(CLI_TYPEWRITER(*argp)));
// search pages out of the index page to find characters.

signed(__cdecl cli_load_internal(signed(count),CLI_TYPEWRITER(*argp)));
signed(__cdecl cli_load(CLI_TYPEWRITER(*argp)));
// load

signed(__cdecl cli_write(signed(descriptor),CLI_TYPEWRITER(*argp)));
// write

signed(__cdecl cli_save(signed short(update_flag),CLI_TYPEWRITER(*argp)));
// save

signed(__cdecl cli_book(CLI_TYPEWRITER(*argp)));
// copy characters on workspace to the current page.

signed(__cdecl cli_init_workspace(CLI_TYPEWRITER(*argp)));
// initialise workspace.

signed(__cdecl cli_connect_with_workspace(CLI_PAGE(*page),CLI_TYPEWRITER(*argp)));
// connect a page with workspace.

signed(__cdecl cli_init_pages(CLI_SPOOL(*argp)));

signed(__cdecl cli_concat_pages(CLI_PAGE(*cache),CLI_SPOOL(*argp)));
signed(__cdecl cli_bind_pages(CLI_SPOOL(*argp)));
signed(__cdecl cli_merge_pages(CLI_SPOOL(*argp)));
signed(__cdecl cli_reconcat_pages(signed short(*backward),CLI_SPOOL(*argp)));
signed(__cdecl cli_unmap_pages(CLI_SPOOL(*argp)));

signed(__cdecl cli_insert_pages(CLI_PAGE(*cache),CLI_SPOOL(*argp)));
signed(__cdecl cli_copy_to_pages_internal(CLI_SPOOL(*argp),signed char(*buff),signed char(*base)));
signed(__cdecl cli_copy_to_pages(CLI_SPOOL(*argp),signed char(*base)));
signed(__cdecl cli_copy_pages(signed short(linebreak_form),signed(count),signed(size),signed short(*w),CLI_PAGE(*argp)));
signed(__cdecl cli_count_pages(CLI_PAGE(*argp)));

signed(__cdecl cli_page_internal(CLI_SPOOL(*argp),signed(n)));
signed(__cdecl cli_page(CLI_PAGE(**di),CLI_SPOOL(*argp),CLI_PAGE(*si),signed(n)));
// page n times.

signed(__cdecl cli_concat_snapshots(CLI_SNAPSHOT(*cache),CLI_HISTORY(*argp)));
signed(__cdecl cli_bind_snapshots(CLI_HISTORY(*argp)));
signed(__cdecl cli_unmap_snapshots(CLI_HISTORY(*argp)));
// based on a doubly linked list (i.e., not a circular linked list)

signed(__cdecl cli_diff_history(signed short(*diff),signed char(*base),CLI_PAGE(*argp)));
signed(__cdecl cli_history(CLI_PAGE(*argp)));
// take snapshots to undo and redo.

signed(__cdecl cl_ctrl_at(void(*argp)));
signed(__cdecl cl_ctrl_a(void(*argp)));
signed(__cdecl cl_ctrl_b(void(*argp)));
signed(__cdecl cl_ctrl_c(void(*argp)));
signed(__cdecl cl_ctrl_d(void(*argp)));
signed(__cdecl cl_ctrl_e(void(*argp)));
signed(__cdecl cl_ctrl_f(void(*argp)));
signed(__cdecl cl_ctrl_g(void(*argp)));

signed(__cdecl cl_ctrl_h(void(*argp)));
signed(__cdecl cl_ctrl_i(void(*argp)));
signed(__cdecl cl_ctrl_j(void(*argp)));
signed(__cdecl cl_ctrl_k(void(*argp)));
signed(__cdecl cl_ctrl_l(void(*argp)));
signed(__cdecl cl_ctrl_m(void(*argp)));
signed(__cdecl cl_ctrl_n(void(*argp)));
signed(__cdecl cl_ctrl_o(void(*argp)));

signed(__cdecl cl_ctrl_p(void(*argp)));
signed(__cdecl cl_ctrl_q(void(*argp)));
signed(__cdecl cl_ctrl_r(void(*argp)));
signed(__cdecl cl_ctrl_s(void(*argp)));
signed(__cdecl cl_ctrl_t(void(*argp)));
signed(__cdecl cl_ctrl_u(void(*argp)));
signed(__cdecl cl_ctrl_v(void(*argp)));
signed(__cdecl cl_ctrl_w(void(*argp)));

signed(__cdecl cl_ctrl_x(void(*argp)));
signed(__cdecl cl_ctrl_y(void(*argp)));
signed(__cdecl cl_ctrl_z(void(*argp)));
signed(__cdecl cl_ctrl_lsb(void(*argp)));
signed(__cdecl cl_ctrl_rs(void(*argp)));
signed(__cdecl cl_ctrl_rsb(void(*argp)));
signed(__cdecl cl_ctrl_ca(void(*argp)));
signed(__cdecl cl_ctrl_ll(void(*argp)));
// along with an array of function pointers for command lines

signed(__cdecl cli_ctrl_at(void(*argp)));
signed(__cdecl cli_ctrl_a(void(*argp)));
signed(__cdecl cli_ctrl_b(void(*argp)));
signed(__cdecl cli_ctrl_c(void(*argp)));
signed(__cdecl cli_ctrl_d(void(*argp)));
signed(__cdecl cli_ctrl_e(void(*argp)));
signed(__cdecl cli_ctrl_f(void(*argp)));
signed(__cdecl cli_ctrl_g(void(*argp)));

signed(__cdecl cli_ctrl_h(void(*argp)));
signed(__cdecl cli_ctrl_i(void(*argp)));
signed(__cdecl cli_ctrl_j(void(*argp)));
signed(__cdecl cli_ctrl_k(void(*argp)));
signed(__cdecl cli_ctrl_l(void(*argp)));
signed(__cdecl cli_ctrl_m(void(*argp)));
signed(__cdecl cli_ctrl_n(void(*argp)));
signed(__cdecl cli_ctrl_o(void(*argp)));

signed(__cdecl cli_ctrl_p(void(*argp)));
signed(__cdecl cli_ctrl_q(void(*argp)));
signed(__cdecl cli_ctrl_r(void(*argp)));
signed(__cdecl cli_ctrl_s(void(*argp)));
signed(__cdecl cli_ctrl_t(void(*argp)));
signed(__cdecl cli_ctrl_u(void(*argp)));
signed(__cdecl cli_ctrl_v(void(*argp)));
signed(__cdecl cli_ctrl_w(void(*argp)));

signed(__cdecl cli_ctrl_x(void(*argp)));
signed(__cdecl cli_ctrl_y(void(*argp)));
signed(__cdecl cli_ctrl_z(void(*argp)));
signed(__cdecl cli_ctrl_lsb(void(*argp)));
signed(__cdecl cli_ctrl_rs(void(*argp)));
signed(__cdecl cli_ctrl_rsb(void(*argp)));
signed(__cdecl cli_ctrl_ca(void(*argp)));
signed(__cdecl cli_ctrl_ll(void(*argp)));
// along with an array of function pointers for text

signed(__cdecl cli_io(signed char *cur,signed size,CLI_STAT(*argp)));
/* input/Output Unicode bytes/characters in UTF-8 out of the key board to the console screen along with fn. cli_in/cli_out. */

// and more..
