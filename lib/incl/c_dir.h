/*

Depth-first searching
*/


enum {
CLI_LK_FILE,
CLI_LK_DIRECTORY,
CLI_LK_FILES,
};

enum {
CLI_LK_PATH,
CLI_LK_TARGET,
CLI_LK_PATHS,
};

struct dir_info_stored {
signed char *p_dir;
void *search;
WIN32_FIND_DATA wfd;
void *optl;
} typedef dir_info_stored_t;

struct c_dirs_info {
signed char *(b[CLI_LK_PATHS]);
signed r[CLI_LK_FILES];
signed short flag;
signed depth;
dir_info_stored_t *dis;
void *optl;
} typedef c_dirs_info_t;

// and more..
