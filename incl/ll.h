/* **** **** Data types

Building a linked list (in C)

Remarks:
Based on a doubly linked list (i.e., not a circular linked list). */







# define CONCAT2LL (0x01)
# define REBASE2LL (0x02)
# define ABSORB2LL (0x04)

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

struct yarn {
signed char(*p);
signed short(flag);
signed int(uid);
struct knot(*d);
struct knot(*s);
void(*optl);
};

typedef struct coords {
signed short(X);
signed short(Y);
} COORDS;

typedef struct snapshot {
signed char(*p);
// signed(count); // deprecated..
signed(offset); // distance measured from depart.X of the knot e.g., measured from ((*((*argp).t)).depart.X)
COORDS(coords); // word-wrap
signed short(flag);
signed(uid);
struct snapshot(*d);
struct snapshot(*s);
void(*optl);
} SNAPSHOT;

typedef struct cli_history {
struct snapshot(*l);
struct snapshot(*b);
// Temporary
struct snapshot(*t);
} CLI_HISTORY;

typedef struct cmd_io {
signed(c);
signed char(*p);
signed short(flag);
signed int(uid);
signed char(*caret);
signed(limit);
signed(count);
signed(tail);
signed(recurred);
signed short(caret_pos_x);
signed short(caret_pos_y);
signed short(depart_x);
signed short(depart_y);
COORDS(caret_pos);
COORDS(depart);
signed(args);
CLI_HISTORY(clih); // Deprecated..
SNAPSHOT(ss); // Deprecated..
void(*optl);
} CMD_IO;

typedef struct knot {
signed char(*p);
signed short(linefeed); // Flag on a knot that ends with the (genuine) line break.
signed(length_with_ht);
signed short(flag);
signed int(uid);
struct knot(*d);
struct knot(*s);
// signed short(depart_x);
// signed short(depart_y);
COORDS(caret_pos);
COORDS(depart);
CLI_HISTORY(clih);
signed short(*cols); // word-wrap
signed(cumul); // word-wrap e.g., refer at fn. ctrl_b_beta or..
unsigned(tid); // a thread id e.g., returned by fn. _beginthreadex
void(*thread); // a thread handle e.g., returned by fn. _beginthreadex
void(*optl);
} KNOT;

typedef struct knot_stat {
struct knot(*l); // lead
struct knot(*t); // temporary
struct knot(*b); // base
void(*optl);
} KNOT_STAT;

// Deprecated..
typedef struct knots {
struct knot(*l); // lead
struct knot(*t); // temporary
struct knot(*b); // base
} KNOTS;

// Deprecated..
struct pknot {
signed char(*p);
signed short(flag);
signed int(uid);
struct knot(*l);
struct knot(*b);
void(*optl);
};
