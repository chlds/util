/*

Build a linked list.
*/


# define C_FILE (0x01)
# define C_DOTFILE (0x02)
# define C_DIR (0x04)
# define C_DOTDIR (0x08)
# define C_CURRDIR (0x10)
# define C_PDIR (0x20)
# define C_DIRS (C_DIR+(C_DOTDIR+(C_CURRDIR+(C_PDIR))))

# define OPT_ERROR (0x8000)
# define OPT_IGNORE (0x200)
# define OPT_ENTRY (0x100)
# define OPT_MODULES (0x80)
# define OPT_DIRECTORIES (0x40)
# define OPT_VERBOSE (0x20)
# define OPT_VISIBLE (0x10)
# define OPT_UNLIMITED (0x08)
# define OPT_DEPTH (0x04)
# define OPT_RECURSION (0x02)
# define OPT_ATTRIBS (0x01)

# define COMMON_OBJS (0x04)

struct flh {
void *(v[OBJS]);
signed fd[OBJS];
} typedef flh_t;

struct fl {
void *(v[OBJS]);
signed fd[OBJS];
} typedef fl_t;

typedef struct coords {
signed short x;
signed short y;
} COORDS;

typedef struct knot {
signed char *p;
signed short flag;
signed offset;
signed uid;
struct knot *d;
struct knot *s;
unsigned tid; // a thread id e.g., returned by fn. _beginthreadex
void *thread; // a thread handle e.g., returned by fn. _beginthreadex
void *optl;
} KNOT;

typedef struct reel {
signed short insert;
signed undo;
signed redo;
KNOT *(cache);
KNOT *(knot[COMMON_OBJS/* KNOTS */]);
void *optl;
} REEL;

struct sat_v2 {
signed run;
rule_t rule[OBJS];
signed short flag[OBJS];
page_t *(page[OBJS]);
void *optl;
} typedef sat_t;

// and more..
