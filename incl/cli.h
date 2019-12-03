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

# define CLI_OFFSETS (0x01+(0x03))
# define CLI_OBJS (0x01+(0x03))

enum {
CLI_IN,CLI_OUT,CLI_ERR,
};

enum {
CLI_OFFSET,CLI_OFFSET1,CLI_OFFSET2,// CLI_OFFSET3,
};

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

typedef struct cli_verse {
signed char *(base[CLI_OFFSETS]);
signed short linebreak;
signed short flag;
signed c;
signed i;
signed r;
struct cli_verse *d;
struct cli_verse *s;
CLI_HISTORY history;
CLI_COORDS depart;
void *optl;
}CLI_VERSE;

typedef struct cli_page {
CLI_VERSE *l;
CLI_VERSE *b;
CLI_VERSE *t;
void *optl;
}CLI_PAGE;

typedef struct cli_paper {
signed char *(base[CLI_OFFSETS]);
signed short linebreak;
signed short flag;
signed c;
signed i;
signed r;
struct cli_paper *d;
struct cli_paper *s;
CLI_PAGE page;
CLI_COORDS depart;
void *optl;
}CLI_PAPER;

typedef struct cli_typewriter {
CLI_PAPER paper;
void(*optl);
} CLI_TYPEWRITER;

typedef struct cli_stat {
CLI_TYPEWRITER ty;
void(*optl);
} CLI_STAT;

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
