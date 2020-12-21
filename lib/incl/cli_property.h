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

struct cli_frame {
coord_t coord;
rect_t rect;
pixel_t pixel;
signed short flag;
void *optl;
} typedef cli_frame_t;

struct cli_text {
signed short width;
signed short height;
signed short flag;
signed attribute;
void *optl;
} typedef cli_text_t;

struct cli_property {
signed char **argv[CLI_OBJS]; // for UTF-8
signed short **argv_w[CLI_OBJS]; // for UTF-16
signed char *(b[CLI_OBJS]);
signed short *(w[CLI_OBJS]);
void *(token[CLI_OBJS]);
void *(thread[CLI_OBJS]);
void *(process[CLI_OBJS]);
void *(window[CLI_OBJS]);
void *(device[CLI_OBJS]);
signed short flag;
signed r;
cli_text_t text;
cli_frame_t frame;
void *optl;
} typedef cli_property_t;

signed(__cdecl cli_replace_text_attributes_beta(signed(arg),cli_property_t(*argp)));
signed(__cdecl cli_restore_text_attributes_beta(cli_property_t(*argp)));
signed(__cdecl cli_retrieve_standard_handles_beta(void(**argp)));
signed(__cdecl coord_beta(signed short(io),signed short(arg),coord_t(*argp)));
signed(__cdecl rect_beta(signed short(io),signed short(arg),rect_t(*argp)));
signed(__cdecl cli_init_frames(cli_frame_t(*argp)));
signed(__cdecl cli_init_text(cli_text_t(*argp)));
signed(__cdecl cli_init_property(signed short(arg),cli_property_t(*argp)));
