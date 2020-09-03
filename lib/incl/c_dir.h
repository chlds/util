/*

Depth-first searching
*/


struct dir_info_stored {
signed char *p_dir;
void *search;
WIN32_FIND_DATA wfd;
void *optl;
} typedef DIR_INFO_STORED;

struct c_dirs_info {
signed char *path;
signed char *target;
signed short flag;
signed depth;
signed directories;
signed files;
DIR_INFO_STORED *dis;
void *optl;
} typedef C_DIRS_INFO;

// and more..
