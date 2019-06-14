/* **** **** Data types

Building a linked list (in C)

Remarks:
Based on a doubly linked list (i.e., not a circular linked list). */







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

typedef struct snapshot {
signed char(*p);
signed short(flag);
signed int(uid);
signed char(*caret_p);
signed(count);
signed(tail);
signed short(caret_pos_x);
signed short(caret_pos_y);
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
CLI_HISTORY(clih);
void(*optl);
} KNOT;

struct pknot {
signed char(*p);
signed short(flag);
signed int(uid);
struct knot(*l);
struct knot(*b);
void(*optl);
};
