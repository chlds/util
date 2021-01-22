# define CLI_BB (0x0F)
# define CLI_OBJS (0x01+(0x03))

# include "./cli_flag.h"
# include "./cli_e.h"

struct coord {
signed short x[CLI_OBJS];
signed short y[CLI_OBJS];
} typedef coord_t;

struct rect {
signed short left[CLI_OBJS];
signed short top[CLI_OBJS];
signed short right[CLI_OBJS];
signed short bottom[CLI_OBJS];
} typedef rect_t;

struct pixel {
signed x[CLI_OBJS];
signed y[CLI_OBJS];
} typedef pixel_t;

struct cli_b {
signed char *(base[CLI_OBJS]);
signed short flag;
void *optl;
} typedef cli_b_t;

struct cli_leaf {
cli_b_t b;
signed short flag;
struct cli_leaf *d;
struct cli_leaf *s;
void *optl;
} typedef cli_leaf_t;

struct cli_leaflet {
cli_leaf_t *(leaf[CLI_OBJS]);
signed short flag;
void *optl;
} typedef cli_leaflet_t;

struct cli_text {
cli_codepage_t codepage;
cli_b_t b;
cli_b_t append;
signed attribute;
signed short width;
signed short height;
signed short flag;
void *optl;
} typedef cli_text_t;

struct cli_frame {
coord_t coord;
rect_t rect;
pixel_t pixel;
signed short flag;
void *optl;
} typedef cli_frame_t;

struct cli_property {
signed char **argv[CLI_OBJS]; // for UTF-8
signed short **argv_w[CLI_OBJS]; // for UTF-16
void *(token[CLI_OBJS]);
void *(thread[CLI_OBJS]);
void *(process[CLI_OBJS]);
void *(window[CLI_OBJS]);
void *(device[CLI_OBJS]);
signed short flag[CLI_OBJS];
cli_frame_t frame;
cli_text_t text;
cli_leaflet_t leaflet;
void *optl;
} typedef cli_property_t;

signed(__cdecl cli_replace_text_attributes_beta(signed(arg),cli_property_t(*argp)));
signed(__cdecl cli_restore_text_attributes_beta(cli_property_t(*argp)));
signed(__cdecl cli_retrieve_standard_handles_beta(void(**argp)));
signed(__cdecl coord_beta(signed short(io),signed short(arg),coord_t(*argp)));
signed(__cdecl rect_beta(signed short(io),signed short(arg),rect_t(*argp)));
signed(__cdecl cli_init_frames(cli_frame_t(*argp)));
signed(__cdecl cli_init_text(signed(arg),cli_text_t(*argp)));
signed(__cdecl cli_init_rule(signed(arg),cli_b_t(*argp)));
signed(__cdecl cli_restore_base(signed(arg),signed char(**argp)));
signed(__cdecl cli_restore_rule(signed char(*cache),cli_b_t(*argp)));
signed(__cdecl cli_restore(signed(arg),cli_text_t(*argp)));
signed(__cdecl cli_init_property(signed(arg),cli_property_t(*argp)));
