/* Notes

Mongolian

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_MN_MN[] = ("Mongolian");
static signed char CALENDAR_LLSC_IN_MN_MN[] = {
0xE1,0xB4,0x8D,0xE1,0xB4,0x8F,0xC9,0xB4,0xC9,0xA2,0xE1,0xB4,0x8F,0xCA,0x9F,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};
static signed char CALENDAR_NATIVE_IN_MN_MN[] = {
0xD0,0xBC,0xD0,0xBE,0xD0,0xBD,0xD0,0xB3,0xD0,0xBE,0xD0,0xBB,0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_MN_MN = (CALENDAR_NATIVE_IN_MN_MN);

static signed char SUNDAY_MN_MN[] = {
0xD0,0xBD,0xD1,0x8F,0xD0,0xBC,0x00,
};
static signed char MONDAY_MN_MN[] = {
0xD0,0xB4,0xD0,0xB0,0xD0,0xB2,0xD0,0xB0,0xD0,0xB0,0x00,
};
static signed char TUESDAY_MN_MN[] = {
0xD0,0xBC,0xD1,0x8F,0xD0,0xB3,0xD0,0xBC,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char WEDNESDAY_MN_MN[] = {
0xD0,0xBB,0xD1,0x85,0xD0,0xB0,0xD0,0xB3,0xD0,0xB2,0xD0,0xB0,0x00,
};
static signed char THURSDAY_MN_MN[] = {
0xD0,0xBF,0xD2,0xAF,0xD1,0x80,0xD1,0x8D,0xD0,0xB2,0x00,
};
static signed char FRIDAY_MN_MN[] = {
0xD0,0xB1,0xD0,0xB0,0xD0,0xB0,0xD1,0x81,0xD0,0xB0,0xD0,0xBD,0x00,
};
static signed char SATURDAY_MN_MN[] = {
0xD0,0xB1,0xD1,0x8F,0xD0,0xBC,0xD0,0xB1,0xD0,0xB0,0x00,
};

static signed char *(CALENDAR_WEEK_IN_MN_MN[]) = {
SUNDAY_MN_MN,
MONDAY_MN_MN,
TUESDAY_MN_MN,
WEDNESDAY_MN_MN,
THURSDAY_MN_MN,
FRIDAY_MN_MN,
SATURDAY_MN_MN,
0x00,
};

static signed char SUN_MN_MN[] = {
0xD0,0x9D,0xD1,0x8F,0x00,
};
static signed char MON_MN_MN[] = {
0xD0,0x94,0xD0,0xB0,0x00,
};
static signed char TUE_MN_MN[] = {
0xD0,0x9C,0xD1,0x8F,0x00,
};
static signed char WED_MN_MN[] = {
0xD0,0x9B,0xD1,0x85,0x00,
};
static signed char THU_MN_MN[] = {
0xD0,0x9F,0xD2,0xAF,0x00,
};
static signed char FRI_MN_MN[] = {
0xD0,0x91,0xD0,0xB0,0x00,
};
static signed char SAT_MN_MN[] = {
0xD0,0x91,0xD1,0x8F,0x00,
};

static signed char *(CALENDAR_WK_IN_MN_MN[]) = {
SUN_MN_MN,
MON_MN_MN,
TUE_MN_MN,
WED_MN_MN,
THU_MN_MN,
FRI_MN_MN,
SAT_MN_MN,
0x00,
};

static signed char SUFFIX_OF_WEEK_MN_MN[] = {
0xD0,0xB3,0xD0,0xB0,0xD1,0x80,0xD0,0xB0,0xD0,0xB3,0x00,
};
static signed char SUFFIX_OF_YEAR_MN_MN[] = {
0xD0,0xBE,0xD0,0xBD,0xD1,0x8B,0x00,
};
static signed char SUFFIX_OF_MONTH_MN_MN[] = {
' ',0xD1,0x81,0xD0,0xB0,0xD1,0x80,0xD1,0x8B,0xD0,0xBD,0x00,
};
static signed char SUFX_OF_MONTH_MN_MN[] = {
' ',0xD1,0x81,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char JANUARY_MN_MN[] = {
0xD0,0xBD,0xD1,0x8D,0xD0,0xB3,0xD0,0xB4,
0xD2,0xAF,0xD0,0xB3,0xD1,0x8D,0xD1,0x8D,
0xD1,0x80,0x00,
};
static signed char FEBRUARY_MN_MN[] = {
0xD1,0x85,0xD0,0xBE,0xD1,0x91,0xD1,0x80,
0xD0,0xB4,0xD1,0x83,0xD0,0xB3,0xD0,0xB0,
0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char MARCH_MN_MN[] = {
0xD0,0xB3,0xD1,0x83,0xD1,0x80,0xD0,0xB0,
0xD0,0xB2,0xD0,0xB4,0xD1,0x83,0xD0,0xB3,
0xD0,0xB0,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char APRIL_MN_MN[] = {
0xD0,0xB4,0xD3,0xA9,0xD1,0x80,0xD3,0xA9,
0xD0,0xB2,0xD0,0xB4,0xD2,0xAF,0xD0,0xB3,
0xD1,0x8D,0xD1,0x8D,0xD1,0x80,0x00,
};
static signed char MAY_MN_MN[] = {
0xD1,0x82,0xD0,0xB0,0xD0,0xB2,0xD0,0xB4,
0xD1,0x83,0xD0,0xB3,0xD0,0xB0,0xD0,0xB0,
0xD1,0x80,0x00,
};
static signed char JUNE_MN_MN[] = {
0xD0,0xB7,0xD1,0x83,0xD1,0x80,0xD0,0xB3,
0xD0,0xB0,0xD0,0xB0,0xD0,0xB4,0xD1,0x83,
0xD0,0xB3,0xD0,0xB0,0xD0,0xB0,0xD1,0x80,
0x00,
};
static signed char JULY_MN_MN[] = {
0xD0,0xB4,0xD0,0xBE,0xD0,0xBB,0xD0,0xBE,
0xD0,0xBE,0xD0,0xB4,0xD1,0x83,0xD0,0xB3,
0xD0,0xB0,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char AUGUST_MN_MN[] = {
0xD0,0xBD,0xD0,0xB0,0xD0,0xB9,0xD0,0xBC,
0xD0,0xB4,0xD1,0x83,0xD0,0xB3,0xD0,0xB0,
0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char SEPTEMBER_MN_MN[] = {
0xD0,0xB5,0xD1,0x81,0xD0,0xB4,0xD2,0xAF,
0xD0,0xB3,0xD1,0x8D,0xD1,0x8D,0xD1,0x80,
0x00,
};
static signed char OCTOBER_MN_MN[] = {
0xD0,0xB0,0xD1,0x80,0xD0,0xB0,0xD0,0xB2,
0xD0,0xB4,0xD1,0x83,0xD0,0xB3,0xD0,0xB0,
0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char NOVEMBER_MN_MN[] = {
0xD0,0xB0,0xD1,0x80,0xD0,0xB2,0xD0,0xB0,
0xD0,0xBD,
' ',0xD0,0xBD,0xD1,0x8D,0xD0,0xB3,
0xD0,0xB4,0xD2,0xAF,0xD0,0xB3,0xD1,0x8D,
0xD1,0x8D,0xD1,0x80,0x00,
};
static signed char DECEMBER_MN_MN[] = {
0xD0,0xB0,0xD1,0x80,0xD0,0xB2,0xD0,0xB0,
0xD0,0xBD,
' ',0xD1,0x85,0xD0,0xBE,0xD1,0x91,
0xD1,0x80,0xD0,0xB4,0xD1,0x83,0xD0,0xB3,
0xD0,0xB0,0xD0,0xB0,0xD1,0x80,0x00,
};

static signed char *(CALENDAR_MONTH_IN_MN_MN[]) = {
"",
JANUARY_MN_MN,
FEBRUARY_MN_MN,
MARCH_MN_MN,
APRIL_MN_MN,
MAY_MN_MN,
JUNE_MN_MN,
JULY_MN_MN,
AUGUST_MN_MN,
SEPTEMBER_MN_MN,
OCTOBER_MN_MN,
NOVEMBER_MN_MN,
DECEMBER_MN_MN,
0x00,
};

static signed char JAN_MN_MN[] = {
'1','-',0xD1,0x80,0x00,
};
static signed char FEB_MN_MN[] = {
'2','-',0xD1,0x80,0x00,
};
static signed char MAR_MN_MN[] = {
'3','-',0xD1,0x80,0x00,
};
static signed char APR_MN_MN[] = {
'4','-',0xD1,0x80,0x00,
};
static signed char MAY_ABBREV_MN_MN[] = {
'5','-',0xD1,0x80,0x00,
};
static signed char JUN_MN_MN[] = {
'6','-',0xD1,0x80,0x00,
};
static signed char JUL_MN_MN[] = {
'7','-',0xD1,0x80,0x00,
};
static signed char AUG_MN_MN[] = {
'8','-',0xD1,0x80,0x00,
};
static signed char SEP_MN_MN[] = {
'9','-',0xD1,0x80,0x00,
};
static signed char OCT_MN_MN[] = {
'1','0','-',0xD1,0x80,0x00,
};
static signed char NOV_MN_MN[] = {
'1','1','-',0xD1,0x80,0x00,
};
static signed char DEC_MN_MN[] = {
'1','2','-',0xD1,0x80,0x00,
};

static signed char *(CALENDAR_MON_IN_MN_MN[]) = {
"",
JAN_MN_MN,
FEB_MN_MN,
MAR_MN_MN,
APR_MN_MN,
MAY_ABBREV_MN_MN,
JUN_MN_MN,
JUL_MN_MN,
AUG_MN_MN,
SEP_MN_MN,
OCT_MN_MN,
NOV_MN_MN,
DEC_MN_MN,
0x00,
};
