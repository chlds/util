/*

Along with C library

Remarks:
Call function _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
Refer at util/lib/obj/src/cli_in.c
and at util/lib/obj/src/cli_io.c
*/


# define CLI_DBG_Q (0x08)
# define CLI_DBG_D (0x04)
# define CLI_DBG_W (0x02)
# define CLI_DBG_B (0x01)

# define CLI_DBG (CLI_DBG_B)

# define CTRL_MASK (0x1F)
# define ALIGNE_TAB (0x08)

# define CLI_CODEPAGE_IO (0x01+(0x03))
# define CLI_OFFSETS (0x01+(0x03))
# define CLI_OBJS (0x01+(0x03))

enum {
CLI_IN,CLI_OUT,CLI_ERR,
};

enum {
CLI_OFFSET,CLI_OFFSET1,CLI_OFFSET2,// CLI_OFFSET3,
};

typedef struct cli_codepage {
unsigned (io[CLI_CODEPAGE_IO]);
}CLI_CODEPAGE;

typedef struct cli_coords {
signed short x;
signed short y;
}CLI_COORDS;

typedef struct cli_snapshot {
signed char *(base[CLI_OFFSETS]);
signed short linebreak;
signed short flag;
signed c;
signed i;
signed r;
struct cli_snapshot *d;
struct cli_snapshot *s;
CLI_COORDS depart;
void *optl;
}CLI_SNAPSHOT;

typedef struct cli_history {
CLI_SNAPSHOT *l;
CLI_SNAPSHOT *b;
CLI_SNAPSHOT *t;
void *optl;
}CLI_HISTORY;

typedef struct cli_page {
signed char *(base[CLI_OFFSETS]);
signed short linebreak;
signed short flag;
signed c;
signed i;
signed r;
struct cli_page *d;
struct cli_page *s;
CLI_HISTORY history;
CLI_COORDS depart;
void *optl;
}CLI_PAGE;

typedef struct cli_spool {
CLI_PAGE *l;
CLI_PAGE *b;
CLI_PAGE *t;
void *optl;
}CLI_SPOOL;

typedef struct cli_paper {
// charge buffers i.e., workspace
signed char *(base[CLI_OFFSETS]);
signed size;
signed short linebreak;
signed short flag;
signed c;
signed i;
signed r;
struct cli_paper *d;
struct cli_paper *s;
CLI_SPOOL spool;
CLI_COORDS depart;
void *optl;
}CLI_PAPER;

typedef struct cli_typewriter {
CLI_PAPER paper;
void(*optl);
} CLI_TYPEWRITER;

typedef struct cli_stat {
CLI_CODEPAGE codepage;
CLI_TYPEWRITER ty;
void(*optl);
} CLI_STAT;

// Based on a doubly linked list (i.e., not a circular linked list)
signed(__cdecl cli_init_pages(CLI_SPOOL(*argp)));
signed(__cdecl cli_concat_pages(CLI_PAGE(*cache),CLI_SPOOL(*argp)));
signed(__cdecl cli_unmap_pages(CLI_SPOOL(*argp)));

// along with an array of function pointers
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

signed(__cdecl cli_io(signed char *cur,signed size,CLI_STAT(*argp)));
/* Input/Output Unicode bytes/characters in UTF-8 out of the key board to the console screen along with fn. cli_in/cli_out. */

signed(__cdecl cli_in(signed(*character),signed char(*argp),signed(argp_size)));
/* Get Unicode bytes in UTF-8 out of the keyboard. */

signed(__cdecl encode2uni_internal(signed(nbyte),signed char(*arr),signed(arr_size),signed(character)));
signed(__cdecl encode2uni(signed char(*arr),signed(arr_size),signed(character)));
signed(__cdecl ncharbyte(signed(arg)));
/* Generate Unicode bytes encoded out of Unicode characters */

signed(__cdecl cli_outs(signed char(*argp)));
signed(__cdecl cli_out(signed char(*argp)));
signed(__cdecl decode2uni_internal(signed(nbyte),signed(*character),signed char(*argp)));
signed(__cdecl decode2uni(signed(*character),signed char(*argp)));
signed(__cdecl nbytechar(signed char(arg)));
/* Output Unicode characters decoded out of Unicode bytes */

// and more..
