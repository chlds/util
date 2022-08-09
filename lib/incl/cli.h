enum {
CLI_B,
CLI_W,
CLI_D,
CLI_Q,
};

enum {
CLIH_BASE,
CLIH_OFFSET,
CLIH_INDEX,
CLIH_DIFF,
};

enum {
CLIH_SI,
CLIH_DI,
};

struct coord {
signed short x[OBJS];
signed short y[OBJS];
} typedef coord_t;
