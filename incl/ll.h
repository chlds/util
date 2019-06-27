/* **** **** Data types

Building a linked list (in C)

Remarks:
Based on a doubly linked list (i.e., not a circular linked list). */







# define CONCAT2LL (0x01)
# define REBASE2LL (0x02)
# define ABSORB2LL (0x04)

struct card {
signed char(*p);
signed short(flag);
signed int(uid);
signed int(numbering);
signed int(curr_order);
signed int(__cdecl*(fn)) (void(*argp));
void(*argp);
void(*hdl);
unsigned int(thread_id);
void(*optl);
};

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
CLI_HISTORY(clih);
SNAPSHOT(ss);
void(*optl);
} CMD_IO;

typedef struct knot {
signed char(*p);
signed(length_with_ht);
signed short(flag);
signed int(uid);
struct knot(*d);
struct knot(*s);
signed short(depart_x);
signed short(depart_y);
COORDS(caret_pos);
COORDS(depart);
CLI_HISTORY(clih);
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
