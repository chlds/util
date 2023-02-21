/* Notes

Danish

Remarks:
Based on UTF-8
*/


static signed char FIRST_DA_DK[] = {
'f',0xC3,0xB8,'r','s','t','e',0x00,
};
static signed char *(CALENDAR_ORDER_IN_DA_DK[]) = {
"",
FIRST_DA_DK,
"anden",
"tredje",
"fjerde",
"femte",
"og sidste",
"i",
0x00,
};

static signed char SUN_DA_DK[] = {
's',0xC3,0xB8,'n','.',0x00,
};
static signed char SAT_DA_DK[] = {
'l',0xC3,0xB8,'r','.',0x00,
};
static signed char *(CALENDAR_WK_IN_DA_DK[]) = {
SUN_DA_DK,
"man.",
"tirs.",
"ons.",
"tors.",
"fre.",
SAT_DA_DK,
0x00,
};

static signed char SUNDAY_DA_DK[] = {
's',0xC3,0xB8,'n','d','a','g',0x00,
};
static signed char SATURDAY_DA_DK[] = {
'l',0xC3,0xB8,'r','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_IN_DA_DK[]) = {
SUNDAY_DA_DK,
"mandag",
"tirsdag",
"onsdag",
"torsdag",
"fredag",
SATURDAY_DA_DK,
0x00,
};

static signed char *(CALENDAR_MONTH_IN_DA_DK[]) = {
"",
"januar",
"februar",
"marts",
"april",
"maj",
"juni",
"juli",
"august",
"september",
"oktober",
"november",
"december",
0x00,
};
