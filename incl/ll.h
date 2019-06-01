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

typedef struct knot {
signed char(*p);
signed short(flag);
signed int(uid);
struct knot(*d);
struct knot(*s);
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
