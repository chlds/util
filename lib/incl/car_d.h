/*

Build a linked list.
*/


# define COMMON_OBJS (0x04)

typedef void(__cdecl*(SIGHDR_T)) (signed);
// SIGHDR_T(__cdecl signal(signed(A),SIGHDR_T(B)));
// void(__cdecl*(__cdecl signal(signed(A),void(__cdecl*(B)) (signed)))) (signed);

typedef struct coords {
signed short x;
signed short y;
} COORDS;

typedef struct encode_pack {
signed short flag;
signed gauge;
signed size;
signed char *base;
signed char *b;
signed short *w;
signed *d;
signed long long *q;
void *optl;
} ENCODE_PACK;

/*
struct count_info_stored {
signed directories;
signed files;
} typedef COUNT_INFO_STORED;
struct dir_info_stored {
signed char(*p_dir);
void(*search);
WIN32_FIND_DATA(wfd);
} typedef DIR_INFO_STORED;
//*/

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

// and more..
