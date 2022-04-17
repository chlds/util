/*

Build a linked list.
*/


# define LACE (0x8F8F8F)
# define SOLIDBRUSH (0x404040)
# define SHADE_TEXTCOLOR (0x303030|(SOLIDBRUSH))
# define TEXTCOLOR (0x808080|(SHADE_TEXTCOLOR))

# define SHADE_XPOS (0x02)
# define SHADE_YPOS (0x02)

struct time_font {
signed char *name;
signed width;
signed height;
void *(v[OBJS]);
} typedef time_font_t;

# ifndef DUAL_CONFIG_H
struct knot {
signed char *p;
signed short flag;
signed offset;
signed uid;
struct knot *d;
struct knot *s;
unsigned tid; // a thread id e.g., returned by fn. _beginthreadex
void *thread; // a thread handle e.g., returned by fn. _beginthreadex
void *optl;
} typedef KNOT;
struct reel {
signed short insert;
signed undo;
signed redo;
KNOT *cache;
KNOT *(knot[OBJS]);
void *optl;
} typedef REEL;
# endif

struct sat {
signed char *(cur[OBJS]);
signed char *(base[OBJS]);
signed short flag;
signed short announce;
signed short toggle;
signed run;
signed period;
time_font_t font;
REEL reel;
void *(brush[OBJS]);
void *(region[OBJS]);
} typedef SAT;

// and more..
