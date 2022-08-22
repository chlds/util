# define CLIH_IRQ (0x01)
# define CLIH_QUIT (0x02)
# define CLIH_INIT (0x04)
# define CLIH_ERROR (0x08)

# define COLM (0x50)
# define OCTET (0x08)
# define ALIGN (OCTET)
# define NIBBLE (0x04)
# define OBJS (NIBBLE)
# define WORKSPACE (OBJS)
# define SNAPSHOTS (OBJS)
# define PAGES (OBJS)
# define FLAGS (OBJS)
# define HEADER_HEIGHT (0x02)
# define FOOTER_HEIGHT (0x02)

typedef signed(__cdecl*MAIN_T)(signed,signed char**,signed char**);
typedef void(__cdecl*SIGHDR_T)(signed);
// SIGHDR_T(__cdecl signal(signed(A),SIGHDR_T(B)));
// void(__cdecl*(__cdecl signal(signed(A),void(__cdecl*B)(signed))))(signed);

struct flh {
void *(v[OBJS]);
signed fd[OBJS];
} typedef flh_t;
// deprecated..

struct coord {
signed short x[OBJS];
signed short y[OBJS];
} typedef coord_t;

struct rect {
signed short left[OBJS];
signed short top[OBJS];
signed short right[OBJS];
signed short bottom[OBJS];
} typedef rect_t;

struct pixel {
signed x[OBJS];
signed y[OBJS];
} typedef pixel_t;

struct cli_virtual_terminal {
signed mode[OBJS];
signed short flag;
} typedef cli_virtual_terminal_t;
