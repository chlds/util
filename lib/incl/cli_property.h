# define CLI_OBJS (0x01+(0x03))

# include "./cli_flag.h"

struct cli_text {
signed short width;
signed short height;
signed short flag;
signed attribute;
void *optl;
} typedef cli_text_t;

struct cli_property {
signed char *(b[CLI_OBJS]);
signed short *(w[CLI_OBJS]);
void *(token[CLI_OBJS]);
void *(thread[CLI_OBJS]);
void *(process[CLI_OBJS]);
void *(window[CLI_OBJS]);
void *(handle[CLI_OBJS]);
void *(device[CLI_OBJS]);
signed short x;
signed short y;
signed short flag;
signed r;
cli_text_t text;
void *optl;
} typedef cli_property_t;

signed(__cdecl cli_replace_text_attributes_beta(signed(arg),cli_property_t(*argp)));
signed(__cdecl cli_restore_text_attributes_beta(cli_property_t(*argp)));
signed(__cdecl cli_retrieve_standard_handles_beta(void(**argp)));
signed(__cdecl cli_init_text(cli_text_t(*argp)));
signed(__cdecl cli_init_property(cli_property_t(*argp)));
