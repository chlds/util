# define SCHED_INIT (0x01)
# define SCHED_IRR (0x02)
# define SCHED_MORPH (0x04)
# define SCHED_ERROR (0x08)
# define SCHED_ALREADY (0x10)
# define SCHED_MONITOR (0x20)

struct sched {
signed r[OBJS];
signed short flag[OBJS];
signed short date[SCHED_DATE];
signed short time[SCHED_TIME];
} typedef sched_t;
