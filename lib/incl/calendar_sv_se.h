/* Notes

Swedish

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_SV_SE[] = ("Swedish");
static signed char CALENDAR_LLSC_IN_SV_SE[] = {
0xEA,0x9C,0xB1,0xE1,0xB4,0xA1,0xE1,0xB4,0x87,0xE1,0xB4,0x85,0xC9,0xAA,0xEA,0x9C,0xB1,0xCA,0x9C,0x00,
};
static signed char CALENDAR_NATIVE_IN_SV_SE[] = ("svenska");
static signed char *CALENDAR_LLSC_NATIVE_IN_SV_SE = (CALENDAR_NATIVE_IN_SV_SE);

static signed char FIRST_SV_SE[] = {
'f',0xC3,0xB6,'r','s','t','a',0x00,
};
static signed char FOURTH_SV_SE[] = {
'f','j',0xC3,0xA4,'r','d','e',0x00,
};
static signed char *(CALENDAR_ORDER_IN_SV_SE[]) = {
"",
FIRST_SV_SE,
"andra",
"tredje",
FOURTH_SV_SE,
"femte",
"och sista",
"i",
0x00,
};

static signed char SUNDAY_ORDER_SV_SE[] = {
's',0xC3,0xB6,'n','d','a','g','e','n',0x00,
};
static signed char MONDAY_ORDER_SV_SE[] = {
'm',0xC3,0xA5,'n','d','a','g','e','n',0x00,
};
static signed char SATURDAY_ORDER_SV_SE[] = {
'l',0xC3,0xB6,'r','d','a','g','e','n',0x00,
};
static signed char *(CALENDAR_WEEK_ORDER_IN_SV_SE[]) = {
SUNDAY_ORDER_SV_SE,
MONDAY_ORDER_SV_SE,
"tisdagen",
"onsdagen",
"torsdagen",
"fredagen",
SATURDAY_ORDER_SV_SE,
0x00,
};

static signed char SUNDAY_SV_SE[] = {
's',0xC3,0xB6,'n','d','a','g',0x00,
};
static signed char MONDAY_SV_SE[] = {
'm',0xC3,0xA5,'n','d','a','g',0x00,
};
static signed char SATURDAY_SV_SE[] = {
'l',0xC3,0xB6,'r','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_IN_SV_SE[]) = {
SUNDAY_SV_SE,
MONDAY_SV_SE,
"tisdag",
"onsdag",
"torsdag",
"fredag",
SATURDAY_SV_SE,
0x00,
};

static signed char SUN_SV_SE[] = {
's',0xC3,0xB6,'n',0x00,
};
static signed char MON_SV_SE[] = {
'm',0xC3,0xA5,'n',0x00,
};
static signed char SAT_SV_SE[] = {
'l',0xC3,0xB6,'r',0x00,
};
static signed char *(CALENDAR_WK_IN_SV_SE[]) = {
SUN_SV_SE,
MON_SV_SE,
"tis",
"ons",
"tors",
"fre",
SAT_SV_SE,
0x00,
};

static signed char *(CALENDAR_MONTH_IN_SV_SE[]) = {
"",
"januari",
"februari",
"mars",
"april",
"maj",
"juni",
"juli",
"augusti",
"september",
"oktober",
"november",
"december",
0x00,
};

static signed char *(CALENDAR_MON_IN_SV_SE[]) = {
"",
"jan.",
"feb.",
"mars",
"apr.",
"maj",
"juni",
"juli",
"aug.",
"sep.",
"okt.",
"nov.",
"dec.",
0x00,
};
