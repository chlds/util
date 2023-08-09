/* Notes

Kyrgyz

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_KY_KG[] = ("Kyrgyz");
static signed char CALENDAR_LLSC_IN_KY_KG[] = {
'K',0xCA,0x8F,0xCA,0x80,0xC9,0xA2,0xCA,0x8F,0xE1,0xB4,0xA2,0x00,
};

static signed char CALENDAR_NATIVE_IN_KY_KG[] = {
0xD0,0x9A,0xD1,0x8B,0xD1,0x80,0xD0,0xB3,0xD1,0x8B,0xD0,0xB7,\
' ',\
0xD1,0x82,0xD0,0xB8,0xD0,0xBB,0xD0,0xB8,\
0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_KY_KG = (CALENDAR_NATIVE_IN_KY_KG);

static signed char SUNDAY_KY_KG[] = {
0xD0,0xB6,0xD0,0xB5,0xD0,0xBA,0xD1,0x88,0xD0,0xB5,0xD0,0xBC,0xD0,0xB1,0xD0,0xB8,0x00,
};
static signed char MONDAY_KY_KG[] = {
0xD0,0xB4,0xD2,0xAF,0xD0,0xB9,0xD1,0x88,0xD3,0xA9,0xD0,0xBC,0xD0,0xB1,0xD2,0xAF,0x00,
};
static signed char TUESDAY_KY_KG[] = {
0xD1,0x88,0xD0,0xB5,0xD0,0xB9,0xD1,0x88,0xD0,0xB5,0xD0,0xBC,0xD0,0xB1,0xD0,0xB8,0x00,
};
static signed char WEDNESDAY_KY_KG[] = {
0xD1,0x88,0xD0,0xB0,0xD1,0x80,0xD1,0x88,0xD0,0xB5,0xD0,0xBC,0xD0,0xB1,0xD0,0xB8,0x00,
};
static signed char THURSDAY_KY_KG[] = {
0xD0,0xB1,0xD0,0xB5,0xD0,0xB9,0xD1,0x88,0xD0,0xB5,0xD0,0xBC,0xD0,0xB1,0xD0,0xB8,0x00,
};
static signed char FRIDAY_KY_KG[] = {
0xD0,0xB6,0xD1,0x83,0xD0,0xBC,0xD0,0xB0,0x00,
};
static signed char SATURDAY_KY_KG[] = {
0xD0,0xB8,0xD1,0x88,0xD0,0xB5,0xD0,0xBC,0xD0,0xB1,0xD0,0xB8,0x00,
};
static signed char *(CALENDAR_WEEK_IN_KY_KG[]) = {
SUNDAY_KY_KG,
MONDAY_KY_KG,
TUESDAY_KY_KG,
WEDNESDAY_KY_KG,
THURSDAY_KY_KG,
FRIDAY_KY_KG,
SATURDAY_KY_KG,
0x00,
};

static signed char SUN_KY_KG[] = {
0xD0,0xB6,0xD0,0xB5,0xD0,0xBA,'.',0x00,
};
static signed char MON_KY_KG[] = {
0xD0,0xB4,0xD2,0xAF,0xD0,0xB9,'.',0x00,
};
static signed char TUE_KY_KG[] = {
0xD1,0x88,0xD0,0xB5,0xD0,0xB9,0xD1,0x88,'.',0x00,
};
static signed char WED_KY_KG[] = {
0xD1,0x88,0xD0,0xB0,0xD1,0x80,0xD1,0x88,'.',0x00,
};
static signed char THU_KY_KG[] = {
0xD0,0xB1,0xD0,0xB5,0xD0,0xB9,0xD1,0x88,'.',0x00,
};
static signed char FRI_KY_KG[] = {
0xD0,0xB6,0xD1,0x83,0xD0,0xBC,0xD0,0xB0,0x00,
};
static signed char SAT_KY_KG[] = {
0xD0,0xB8,0xD1,0x88,0xD0,0xBC,'.',0x00,
};
static signed char *(CALENDAR_WK_IN_KY_KG[]) = {
SUN_KY_KG,
MON_KY_KG,
TUE_KY_KG,
WED_KY_KG,
THU_KY_KG,
FRI_KY_KG,
SAT_KY_KG,
0x00,
};

static signed char JANUARY_KY_KG[] = {
0xD1,0x8F,0xD0,0xBD,0xD0,0xB2,0xD0,0xB0,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char FEBRUARY_KY_KG[] = {
0xD1,0x84,0xD0,0xB5,0xD0,0xB2,0xD1,0x80,0xD0,0xB0,0xD0,0xBB,0xD1,0x8C,0x00,
};
static signed char MARCH_KY_KG[] = {
0xD0,0xBC,0xD0,0xB0,0xD1,0x80,0xD1,0x82,0x00,
};
static signed char APRIL_KY_KG[] = {
0xD0,0xB0,0xD0,0xBF,0xD1,0x80,0xD0,0xB5,0xD0,0xBB,0xD1,0x8C,0x00,
};
static signed char MAY_KY_KG[] = {
0xD0,0xBC,0xD0,0xB0,0xD0,0xB9,0x00,
};
static signed char JUNE_KY_KG[] = {
0xD0,0xB8,0xD1,0x8E,0xD0,0xBD,0xD1,0x8C,0x00,
};
static signed char JULY_KY_KG[] = {
0xD0,0xB8,0xD1,0x8E,0xD0,0xBB,0xD1,0x8C,0x00,
};
static signed char AUGUST_KY_KG[] = {
0xD0,0xB0,0xD0,0xB2,0xD0,0xB3,0xD1,0x83,0xD1,0x81,0xD1,0x82,0x00,
};
static signed char SEPTEMBER_KY_KG[] = {
0xD1,0x81,0xD0,0xB5,0xD0,0xBD,0xD1,0x82,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char OCTOBER_KY_KG[] = {
0xD0,0xBE,0xD0,0xBA,0xD1,0x82,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char NOVEMBER_KY_KG[] = {
0xD0,0xBD,0xD0,0xBE,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char DECEMBER_KY_KG[] = {
0xD0,0xB4,0xD0,0xB5,0xD0,0xBA,0xD0,0xB0,0xD0,0xB1,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char *(CALENDAR_MONTH_IN_KY_KG[]) = {
"",
JANUARY_KY_KG,
FEBRUARY_KY_KG,
MARCH_KY_KG,
APRIL_KY_KG,
MAY_KY_KG,
JUNE_KY_KG,
JULY_KY_KG,
AUGUST_KY_KG,
SEPTEMBER_KY_KG,
OCTOBER_KY_KG,
NOVEMBER_KY_KG,
DECEMBER_KY_KG,
0x00,
};
