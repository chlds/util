/* Notes

Norwegian

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_NB_NO[] = ("Norwegian");
static signed char CALENDAR_LLSC_IN_NB_NO[] = {
'N',0xE1,0xB4,0x8F,0xCA,0x80,0xE1,0xB4,0xA1,0xE1,0xB4,0x87,0xC9,0xA2,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,\
0x00,
};

static signed char CALENDAR_NATIVE_IN_NB_NO[] = ("norsk");
static signed char *CALENDAR_LLSC_NATIVE_IN_NB_NO = (CALENDAR_NATIVE_IN_NB_NO);

static signed char FIRST_NB_NO[] = {
'f',0xC3,0xB8,'r','s','t','e',0x00,
};
static signed char *(CALENDAR_ORDER_IN_NB_NO[]) = {
"",
FIRST_NB_NO,
"andre",
"tredje",
"fjerde",
"femte",
"og siste",
"i",
0x00,
};

static signed char SUNDAY_NB_NO[] = {
's',0xC3,0xB8,'n','d','a','g',0x00,
};
static signed char SATURDAY_NB_NO[] = {
'l',0xC3,0xB8,'r','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_IN_NB_NO[]) = {
SUNDAY_NB_NO,
"mandag",
"tirsdag",
"onsdag",
"torsdag",
"fredag",
SATURDAY_NB_NO,
0x00,
};

static signed char SUN_NB_NO[] = {
's',0xC3,0xB8,'n','.',0x00,
};
static signed char SAT_NB_NO[] = {
'l',0xC3,0xB8,'r','.',0x00,
};
static signed char *(CALENDAR_WK_IN_NB_NO[]) = {
SUN_NB_NO,
"man.",
"tir.",
"ons.",
"tor.",
"fre.",
SAT_NB_NO,
0x00,
};

static signed char *(CALENDAR_MONTH_IN_NB_NO[]) = {
"",
"januar",
"februar",
"mars",
"april",
"mai",
"juni",
"juli",
"august",
"september",
"oktober",
"november",
"desember",
0x00,
};
