/* Notes

Norwegian Nynorsk

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_NN_NO[] = ("Norwegian Nynorsk");
static signed char CALENDAR_LLSC_IN_NN_NO[] = {
0xC9,0xB4,0xE1,0xB4,0x8F,0xCA,0x80,0xE1,0xB4,0xA1,0xE1,0xB4,0x87,0xC9,0xA2,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,\
' ',0xC9,0xB4,0xCA,0x8F,0xC9,0xB4,0xE1,0xB4,0x8F,0xCA,0x80,0xEA,0x9C,0xB1,0xE1,0xB4,0x8B,\
0x00,
};
static signed char CALENDAR_NATIVE_IN_NN_NO[] = ("nynorsk");
static signed char *CALENDAR_LLSC_NATIVE_IN_NN_NO = (CALENDAR_NATIVE_IN_NN_NO);

static signed char FIRST_NN_NO[] = {
'f',0xC3,0xB8,'r','s','t','e',0x00,
};
static signed char *(CALENDAR_ORDER_IN_NN_NO[]) = {
"",
FIRST_NN_NO,
"andre",
"tredje",
"fjerde",
"femte",
"og siste",
"i",
0x00,
};

static signed char SUNDAY_NN_NO[] = {
's',0xC3,0xB8,'n','d','a','g',0x00,
};
static signed char MONDAY_NN_NO[] = {
'm',0xC3,0xA5,'n','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_IN_NN_NO[]) = {
SUNDAY_NN_NO,
MONDAY_NN_NO,
"tysdag",
"onsdag",
"torsdag",
"fredag",
"laurdag",
0x00,
};

static signed char SUN_NN_NO[] = {
's',0xC3,0xB8,'.',0x00,
};
static signed char MON_NN_NO[] = {
'm',0xC3,0xA5,'.',0x00,
};
static signed char *(CALENDAR_WK_IN_NN_NO[]) = {
SUN_NN_NO,
MON_NN_NO,
"ty.",
"on.",
"to.",
"fr.",
"la.",
0x00,
};

static signed char *(CALENDAR_MONTH_IN_NN_NO[]) = {
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

static signed char *(CALENDAR_MON_IN_NN_NO[]) = {
"",
"jan.",
"feb.",
"mars",
"apr.",
"mai",
"juni",
"juli",
"aug.",
"sep.",
"okt.",
"nov.",
"des.",
0x00,
};
