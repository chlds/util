# define CAT_DEBUG_HR (DBG_HR)
# define CAT_DEBUG_MN (DBG_MN)
// debug (signed or time_t)

# define CAT_SCALE (0x02)
# include "./cat_prime.h"
# include "./cat_subscripts.h"
# include "./cat_superscripts.h"

typedef struct tm *(__cdecl*thdr_t)(time_t const *argp);

static signed char WORD_SEPARATOR_MIDDLE_DOT[] = {
0xE2,0xB8,0xB1,0x00,
};
static signed char MIDDLE_DOT[] = {
0xC2,0xB7,0x00,
};
static signed char *MDOT = (WORD_SEPARATOR_MIDDLE_DOT);

static signed char *(CAT_DIGIT[]) = {
"00","1","2","3","4","5","6","7","8","9",
"10","11","12","13","14","15","16","17","18","19",
"20","21","22","23","24","25","26","27","28","29",
"30","31","32","33","34","35","36","37","38","39",
"40","41","42","43","44","45","46","47","48","49",
"50","51","52","53","54","55","56","57","58","59",
0x00,
};
