/*

Build a linked list.
*/


# define LACE (0x8F8F8F)
# define SOLIDBRUSH (0x404040)
# define SHADE_TEXTCOLOR (0x303030|(SOLIDBRUSH))
# define TEXTCOLOR (0x808080|(SHADE_TEXTCOLOR))

# define SHADE_XPOS (0x02)
# define SHADE_YPOS (0x02)

typedef struct card {
signed char *(base[COMMON_OBJS]);
signed *(size[COMMON_OBJS]);
signed serial;
signed order;
signed uid;
signed tid;
signed short flag;
signed(__cdecl*(fn)) (void(*argp));
void *argp;
void *hdl;
void *optl;
} CARD;

struct time_font {
signed char *name;
signed width;
signed height;
void *(v[OBJS]);
} typedef time_font_t;

struct sat {
signed char *(cur[COMMON_OBJS]);
signed char *(base[COMMON_OBJS]);
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
