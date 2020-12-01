/* Configure

Remarks:
----
*/


# define CLI_CODEPAGES (0x01+(0x03))
# define CLI_UTF_8 (65001)

struct cli_codepage {
signed (io[CLI_CODEPAGES]);
signed short flag;
void *optl;
} typedef cli_codepage_t;

signed(__cdecl cli_init_codepages(cli_codepage_t(*argp)));
signed(__cdecl cli_backup_codepages_beta(signed short(flag),cli_codepage_t(*argp)));
signed(__cdecl cli_restore_codepages_beta(signed short(flag),cli_codepage_t(*argp)));
signed(__cdecl cli_set_codepages_beta(signed(codepage_input),signed(codepage_output)));
