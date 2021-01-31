# define CTRL_MASK (0x1F)

# define ALIGN_TAB (0x08)
# define CRLF (0x0A0D)

# define CLI_BB (0x0F)
# define CLI_OBJS (0x01+(0x03))

# define CLI_WORKSPACE (CLI_OBJS)
# define CLI_SNAPSHOTS (CLI_OBJS)
# define CLI_PAGES (CLI_OBJS)

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

struct cli_b {
signed char *(base[CLI_OBJS]);
signed short flag;
void *optl;
} typedef cli_b_t;

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
cli_b_t b;
void *optl;
} typedef cli_snapshot_t;

struct cli_history {
signed short insert;
signed undo;
signed redo;
cli_snapshot_t *(cache);
cli_snapshot_t *(snapshot[CLI_SNAPSHOTS]);
void *optl;
} typedef cli_history_t;

struct cli_page {
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
cli_b_t b;
void *optl;
} typedef cli_page_t;

struct cli_spool {
signed short insert;
signed undo;
signed redo;
cli_page_t *(cache);
cli_page_t *(page[CLI_PAGES]);
void *optl;
} typedef cli_spool_t;

struct cli_text {
cli_b_t b;
cli_b_t append;
cli_codepage_t codepage;
cli_spool_t spool;
signed attribute;
signed short width;
signed short height;
signed short flag;
void *optl;
} typedef cli_text_t;

struct cli_frame {
coord_t coord;
rect_t rect;
pixel_t pixel;
signed short flag;
void *optl;
} typedef cli_frame_t;

struct cli_property {
signed char **argv[CLI_OBJS]; // for UTF-8
signed short **argv_w[CLI_OBJS]; // for UTF-16
void *(token[CLI_OBJS]);
void *(thread[CLI_OBJS]);
void *(process[CLI_OBJS]);
void *(window[CLI_OBJS]);
void *(device[CLI_OBJS]);
signed short flag[CLI_OBJS];
cli_frame_t frame;
cli_text_t text;
void *optl;
} typedef cli_property_t;
