# define C_FILE (0x01)
# define C_DOTFILE (0x02)
# define C_DIR (0x04)
# define C_DOTDIR (0x08)
# define C_CURRDIR (0x10)
# define C_PDIR (0x20)
# define C_DIRS (C_DIR+(C_DOTDIR+(C_CURRDIR+(C_PDIR))))

# define OBJS (0x04)

struct fl {
void *(v[OBJS]);
signed fd[OBJS];
} typedef fl_t;

// and more..
