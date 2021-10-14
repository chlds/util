# define COLOR_DEFAULT (0x00)

# define COLOR_BLACK (30)
# define COLOR_RED (31)
# define COLOR_GREEN (32)
# define COLOR_YELLOW (33)
# define COLOR_BLUE (34)
# define COLOR_MAGENTA (35)
# define COLOR_CYAN (36)
# define COLOR_WHITE (37)
# define COLOR_RESET (39)

# define COLOR_BG_BLACK (40)
# define COLOR_BG_RED (41)
# define COLOR_BG_GREEN (42)
# define COLOR_BG_YELLOW (43)
# define COLOR_BG_BLUE (44)
# define COLOR_BG_MAGENTA (45)
# define COLOR_BG_CYAN (46)
# define COLOR_BG_WHITE (47)
# define COLOR_BG_RESET (49)

# define COLOR_BRIGHT_BLACK (90)
# define COLOR_BRIGHT_RED (91)
# define COLOR_BRIGHT_GREEN (92)
# define COLOR_BRIGHT_YELLOW (93)
# define COLOR_BRIGHT_BLUE (94)
# define COLOR_BRIGHT_MAGENTA (95)
# define COLOR_BRIGHT_CYAN (96)
# define COLOR_BRIGHT_WHITE (97)

# define COLOR_BG_BRIGHT_BLACK (100)
# define COLOR_BG_BRIGHT_RED (101)
# define COLOR_BG_BRIGHT_GREEN (102)
# define COLOR_BG_BRIGHT_YELLOW (103)
# define COLOR_BG_BRIGHT_BLUE (104)
# define COLOR_BG_BRIGHT_MAGENTA (105)
# define COLOR_BG_BRIGHT_CYAN (106)
# define COLOR_BG_BRIGHT_WHITE (107)

# define ALIGN_TAB (0x08)
# define CRLF (0x0A0D)

# define CLI_BB (0x0F)
# define CLI_OBJS (0x01+(0x03))

# define CLI_HEADER_HEIGHT (0x02)
# define CLI_FOOTER_HEIGHT (0x02)

# define CLI_WORKSPACE (CLI_OBJS)
# define CLI_SNAPSHOTS (CLI_OBJS)
# define CLI_PAGES (CLI_OBJS)

# define OBJS (0x04)
# define FLAGS (OBJS)
# define PAGES (OBJS)

typedef void(__cdecl*SIGHDR_T)(signed);
// SIGHDR_T(__cdecl signal(signed(A),SIGHDR_T(B)));
// void(__cdecl*(__cdecl signal(signed(A),void(__cdecl*B)(signed))))(signed);

struct coord {
signed short x[CLI_OBJS];
signed short y[CLI_OBJS];
} typedef coord_t;

struct rect {
signed short left[CLI_OBJS];
signed short top[CLI_OBJS];
signed short right[CLI_OBJS];
signed short bottom[CLI_OBJS];
} typedef rect_t;

struct pixel {
signed x[CLI_OBJS];
signed y[CLI_OBJS];
} typedef pixel_t;

struct rule {
signed char *(b[OBJS]);
} typedef rule_t;

struct page {
struct page *(page[PAGES]);
signed short flag[FLAGS];
rule_t rule[OBJS];
} typedef page_t;

struct ty {
signed char *(b[OBJS]);
signed short flag[OBJS];
signed r[OBJS];
page_t page;
} typedef ty_t;

struct cli_rule {
signed char *(b[CLI_OBJS]);
signed short flag;
void *optl;
} typedef cli_rule_t;

//* deprecated
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
//*/

struct cli_snapshot {
cli_rule_t *rule;
//* deprecated
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
//*/
void *optl;
} typedef cli_snapshot_t;

struct cli_history {
signed short insert;
cli_snapshot_t *(cache);
cli_snapshot_t *(snapshot[CLI_SNAPSHOTS]);
void *optl;
} typedef cli_history_t;

struct cli_page {
cli_rule_t *rule;
//* deprecated
signed char *(base[CLI_WORKSPACE]);
signed offset;
signed short flag;
signed c;
signed i;
signed r;
struct cli_page *d;
struct cli_page *s;
cli_history_t history;
CLI_COORD coord[CLI_OBJS];
CLI_RECT rect;
//*/
void *optl;
} typedef cli_page_t;

struct cli_spool {
signed short insert;
cli_page_t *(cache);
cli_page_t *(page[CLI_PAGES]);
void *optl;
} typedef cli_spool_t;

struct cli_text {
signed char *(cf[CLI_OBJS]); // to monitor
signed char *(sym[CLI_OBJS]);
cli_rule_t rule[CLI_OBJS];
cli_codepage_t codepage;
cli_spool_t spool;
signed attribute;
signed eol;
signed short align;
signed short width;
signed short height;
signed short flag;
void *optl;
} typedef cli_text_t;

struct cli_virtual_terminal {
signed mode[CLI_OBJS];
signed short flag;
void *optl;
} typedef cli_virtual_terminal_t;

struct cli_clipboard {
void *(base[CLI_OBJS]);
size_t size[CLI_OBJS];
signed flag[CLI_OBJS];
signed clip;
cli_spool_t spool;
void *optl;
} typedef cli_clipboard_t;

struct cli_property {
signed char **argv[CLI_OBJS]; // for UTF-8
void *(token[CLI_OBJS]);
void *(thread[CLI_OBJS]);
void *(process[CLI_OBJS]);
void *(window[CLI_OBJS]);
void *(device[CLI_OBJS]);
signed short flag[CLI_OBJS];
cli_text_t text;
cli_clipboard_t clipboard;
void *optl;
} typedef cli_property_t;
