# define CAT_DEBUG_HR (DBG_HR)
# define CAT_DEBUG_MN (DBG_MN)
// debug (signed or time_t)
# define CAT_CANONICAL (0x01)
# define CAT_SCALE (0x02)
# define CXXVIII (128)
# define CCLVI (256)
# define DXII (512)
# define MXXIV (1024)
# include "./cat_prime.h"
# include "./cat_subscripts.h"
# include "./cat_superscripts.h"

typedef struct tm *(__cdecl*thdr_t)(time_t const *argp);

enum {
N,I,II,III,IV,V,VI,VII,VIII,IX,
X,XI,XII,XIII,XIV,XV,XVI,XVII,XVIII,XIX,
XX,XXI,XXII,XXIII,XXIV,XXV,XXVI,XXVII,XXVIII,XXIX,
XXX,XXXI,XXXII,XXXIII,XXXIV,XXXV,XXXVI,XXXVII,XXXVIII,XXXIX,
XL,XLI,XLII,XLIII,XLIV,XLV,XLVI,XLVII,XLVIII,XLIX,
L,
};

enum {
CAT_WK,
CAT_DI,
CAT_MO,
CAT_YR,
CAT_DATE,
};

enum {
CAT_MS,
CAT_SM,
CAT_MN,
CAT_HR,
CAT_TIME,
};
