/*

Depth-first searching
*/


enum {
CLI_LK_DIRECTORY,
CLI_LK_FILE,
CLI_LK_FILES,
};

enum {
CLI_LK_PATH,
CLI_LK_TARGET,
};

struct dir_info_stored {
signed char *p_dir;
void *search;
WIN32_FIND_DATA wfd;
void *optl;
} typedef dir_info_stored_t;

struct c_dirs_info {
signed char *(b[0x02]);
signed r[0x02];
signed short flag;
signed depth;
dir_info_stored_t *dis;
void *optl;
} typedef c_dirs_info_t;

// and more..
