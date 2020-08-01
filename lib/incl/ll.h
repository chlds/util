/* **** **** Data types

Building a linked list (in C)

Remarks:
Based on a doubly linked list (i.e., not a circular linked list).
*/


# define COMMON_OBJS (0x04)

enum {
CARD_EXIT,
CARD_HELP,
CARD_CLEAR,
CARD_TIME,
CARD_SAVE,
CARD_OPEN,
CARD_OUTPUT,
CARD_HISTORY,
CARDS,
};

typedef struct card {
signed char(*(base[COMMON_OBJS]));
signed(*(gauge[COMMON_OBJS]));
signed(*(size[COMMON_OBJS]));
signed char(*p);
signed(serial);
signed(order);
signed(uid);
signed(tid);
signed short(flag);
signed(__cdecl*(fn)) (void(*argp));
void(*argp);
void(*hdl);
void(*optl);
} CARD;

typedef struct coords {
signed short(X);
signed short(Y);
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
