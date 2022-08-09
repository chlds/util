/* **** Refer at cli_flag.h
# define CLI_IRR (0x01)
# define CLI_MORPH (0x02)
# define CLI_BR (0x04)
# define CLI_QUIT (0x08)
# define CLI_INIT (0x10)
# define CLI_MONITOR (0x20)
# define CLI_APPEND (0x40)
# define CLI_INSERT (0x80)
# define CLI_BACKUP (0x100)
# define CLI_RESTORE (0x200)
# define CLI_SEARCH (0x400)
# define CLI_REPLACE (0x800)
# define CLI_ALREADY (0x1000)
# define CLI_OVERWRITE (0x2000)
# define CLI_REFRESH (0x4000)
# define CLI_ERROR (0x8000)
//*/

# define ALIGN (0x08)
# define CRLF (0x0A0D)

# define CLI_BB (0x0F)

typedef signed(__cdecl*MAIN_T)(signed,signed char**,signed char**);
typedef void(__cdecl*SIGHDR_T)(signed);
// SIGHDR_T(__cdecl signal(signed(A),SIGHDR_T(B)));
// void(__cdecl*(__cdecl signal(signed(A),void(__cdecl*B)(signed))))(signed);

/*
struct coord {
signed short x[OBJS];
signed short y[OBJS];
} typedef coord_t;
//*/

struct rect {
signed short left[OBJS];
signed short top[OBJS];
signed short right[OBJS];
signed short bottom[OBJS];
} typedef rect_t;

struct pixel {
signed x[OBJS];
signed y[OBJS];
} typedef pixel_t;

struct rule {
signed char *(b[OBJS]);
} typedef rule_t;

struct page {
signed char *(b[OBJS]);
struct page *(page[OBJS]);
signed short flag[OBJS];
} typedef page_t;

struct config {
signed char *(b[OBJS]);
signed r[OBJS];
signed short flag[OBJS];
} typedef config_t;

struct edit {
signed char *(b[OBJS]);
signed r[OBJS];
} typedef edit_t;

struct debug {
signed char *(b[OBJS]);
signed r[OBJS];
signed short flag[OBJS];
rule_t rule[OBJS];
} typedef debug_t;

struct ty {
signed char *(b[OBJS]);
signed short flag[OBJS];
page_t page;
config_t config;
edit_t edit;
debug_t debug;
rule_t rule[OBJS];
} typedef ty_t;

struct cli_virtual_terminal {
signed mode[OBJS];
signed short flag;
void *optl;
} typedef cli_virtual_terminal_t;
