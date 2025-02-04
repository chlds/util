/* Notes

Belarusian

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_BE_BY[] = ("Belarusian");
static signed char CALENDAR_LLSC_IN_BE_BY[] = {
0xCA,0x99,0xE1,0xB4,0x87,0xCA,0x9F,0xE1,0xB4,0x80,0xCA,0x80,0xE1,0xB4,0x9C,0xEA,0x9C,0xB1,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};
static signed char CALENDAR_NATIVE_IN_BE_BY[] = {
0xD0,0xB1,0xD0,0xB5,0xD0,0xBB,0xD0,0xB0,0xD1,0x80,0xD1,0x83,0xD1,0x81,0xD0,0xBA,0xD0,0xB0,0xD1,0x8F,\
' ',\
0xD0,0xBC,0xD0,0xBE,0xD0,0xB2,0xD0,0xB0,\
0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_BE_BY = (CALENDAR_NATIVE_IN_BE_BY);

static signed char SUNDAY_BE_BY[] = {
0xD0,0xBD,0xD1,0x8F,0xD0,0xB4,0xD0,0xB7,0xD0,0xB5,0xD0,0xBB,0xD1,0x8F,0x00,
};
static signed char MONDAY_BE_BY[] = {
0xD0,0xBF,0xD0,0xB0,0xD0,0xBD,0xD1,0x8F,0xD0,0xB4,0xD0,0xB7,0xD0,0xB5,0xD0,0xBB,0xD0,0xB0,0xD0,0xBA,0x00,
};
static signed char TUESDAY_BE_BY[] = {
0xD0,0xB0,0xD1,0x9E,0xD1,0x82,0xD0,0xBE,0xD1,0x80,0xD0,0xB0,0xD0,0xBA,0x00,
};
static signed char WEDNESDAY_BE_BY[] = {
0xD1,0x81,0xD0,0xB5,0xD1,0x80,0xD0,0xB0,0xD0,0xB4,0xD0,0xB0,0x00,
};
static signed char THURSDAY_BE_BY[] = {
0xD1,0x87,0xD0,0xB0,0xD1,0x86,0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0x00,
};
static signed char FRIDAY_BE_BY[] = {
0xD0,0xBF,0xD1,0x8F,0xD1,0x82,0xD0,0xBD,0xD1,0x96,0xD1,0x86,0xD0,0xB0,0x00,
};
static signed char SATURDAY_BE_BY[] = {
0xD1,0x81,0xD1,0x83,0xD0,0xB1,0xD0,0xBE,0xD1,0x82,0xD0,0xB0,0x00,
};
static signed char *(CALENDAR_WEEK_IN_BE_BY[]) = {
SUNDAY_BE_BY,
MONDAY_BE_BY,
TUESDAY_BE_BY,
WEDNESDAY_BE_BY,
THURSDAY_BE_BY,
FRIDAY_BE_BY,
SATURDAY_BE_BY,
0x00,
};

static signed char SUN_BE_BY[] = {
0xD0,0xBD,0xD0,0xB4,0x00,
};
static signed char MON_BE_BY[] = {
0xD0,0xBF,0xD0,0xBD,0x00,
};
static signed char TUE_BE_BY[] = {
0xD0,0xB0,0xD1,0x9E,0x00,
};
static signed char WED_BE_BY[] = {
0xD1,0x81,0xD1,0x80,0x00,
};
static signed char THU_BE_BY[] = {
0xD1,0x87,0xD1,0x86,0x00,
};
static signed char FRI_BE_BY[] = {
0xD0,0xBF,0xD1,0x82,0x00,
};
static signed char SAT_BE_BY[] = {
0xD1,0x81,0xD0,0xB1,0x00,
};
static signed char *(CALENDAR_WK_IN_BE_BY[]) = {
SUN_BE_BY,
MON_BE_BY,
TUE_BE_BY,
WED_BE_BY,
THU_BE_BY,
FRI_BE_BY,
SAT_BE_BY,
0x00,
};

static signed char JANUARY_GEN_BE_BY[] = {
0xD1,0x81,0xD1,0x82,0xD1,0x83,0xD0,0xB4,0xD0,0xB7,0xD0,0xB5,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char FEBRUARY_GEN_BE_BY[] = {
0xD0,0xBB,0xD1,0x8E,0xD1,0x82,0xD0,0xB0,0xD0,0xB3,0xD0,0xB0,0x00,
};
static signed char MARCH_GEN_BE_BY[] = {
0xD1,0x81,0xD0,0xB0,0xD0,0xBA,0xD0,0xB0,0xD0,0xB2,0xD1,0x96,0xD0,0xBA,0xD0,0xB0,0x00,
};
static signed char APRIL_GEN_BE_BY[] = {
0xD0,0xBA,0xD1,0x80,0xD0,0xB0,0xD1,0x81,0xD0,0xB0,0xD0,0xB2,0xD1,0x96,0xD0,0xBA,0xD0,0xB0,0x00,
};
static signed char MAY_GEN_BE_BY[] = {
0xD0,0xBC,0xD0,0xB0,0xD1,0x8F,0x00,
};
static signed char JUNE_GEN_BE_BY[] = {
0xD1,0x87,0xD1,0x8D,0xD1,0x80,0xD0,0xB2,0xD0,0xB5,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char JULY_GEN_BE_BY[] = {
0xD0,0xBB,0xD1,0x96,0xD0,0xBF,0xD0,0xB5,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char AUGUST_GEN_BE_BY[] = {
0xD0,0xB6,0xD0,0xBD,0xD1,0x96,0xD1,0x9E,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char SEPTEMBER_GEN_BE_BY[] = {
0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0xD0,0xB0,0xD1,0x81,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char OCTOBER_GEN_BE_BY[] = {
0xD0,0xBA,0xD0,0xB0,0xD1,0x81,0xD1,0x82,0xD1,0x80,0xD1,0x8B,0xD1,0x87,0xD0,0xBD,0xD1,0x96,0xD0,0xBA,0xD0,0xB0,0x00,
};
static signed char NOVEMBER_GEN_BE_BY[] = {
0xD0,0xBB,0xD1,0x96,0xD1,0x81,0xD1,0x82,0xD0,0xB0,0xD0,0xBF,0xD0,0xB0,0xD0,0xB4,0xD0,0xB0,0x00,
};
static signed char DECEMBER_GEN_BE_BY[] = {
0xD1,0x81,0xD0,0xBD,0xD0,0xB5,0xD0,0xB6,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char *(CALENDAR_MONTH_GENITIVE_IN_BE_BY[]) = {
"",
JANUARY_GEN_BE_BY,
FEBRUARY_GEN_BE_BY,
MARCH_GEN_BE_BY,
APRIL_GEN_BE_BY,
MAY_GEN_BE_BY,
JUNE_GEN_BE_BY,
JULY_GEN_BE_BY,
AUGUST_GEN_BE_BY,
SEPTEMBER_GEN_BE_BY,
OCTOBER_GEN_BE_BY,
NOVEMBER_GEN_BE_BY,
DECEMBER_GEN_BE_BY,
0x00,
};

static signed char JANUARY_NOM_BE_BY[] = {
0xD1,0x81,0xD1,0x82,0xD1,0x83,0xD0,0xB4,0xD0,0xB7,0xD0,0xB5,0xD0,0xBD,0xD1,0x8C,0x00,
};
static signed char FEBRUARY_NOM_BE_BY[] = {
0xD0,0xBB,0xD1,0x8E,0xD1,0x82,0xD1,0x8B,0x00,
};
static signed char MARCH_NOM_BE_BY[] = {
0xD1,0x81,0xD0,0xB0,0xD0,0xBA,0xD0,0xB0,0xD0,0xB2,0xD1,0x96,0xD0,0xBA,0x00,
};
static signed char APRIL_NOM_BE_BY[] = {
0xD0,0xBA,0xD1,0x80,0xD0,0xB0,0xD1,0x81,0xD0,0xB0,0xD0,0xB2,0xD1,0x96,0xD0,0xBA,0x00,
};
static signed char MAY_NOM_BE_BY[] = {
0xD0,0xBC,0xD0,0xB0,0xD0,0xB9,0x00,
};
static signed char JUNE_NOM_BE_BY[] = {
0xD1,0x87,0xD1,0x8D,0xD1,0x80,0xD0,0xB2,0xD0,0xB5,0xD0,0xBD,0xD1,0x8C,0x00,
};
static signed char JULY_NOM_BE_BY[] = {
0xD0,0xBB,0xD1,0x96,0xD0,0xBF,0xD0,0xB5,0xD0,0xBD,0xD1,0x8C,0x00,
};
static signed char AUGUST_NOM_BE_BY[] = {
0xD0,0xB6,0xD0,0xBD,0xD1,0x96,0xD0,0xB2,0xD0,0xB5,0xD0,0xBD,0xD1,0x8C,0x00,
};
static signed char SEPTEMBER_NOM_BE_BY[] = {
0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0xD0,0xB0,0xD1,0x81,0xD0,0xB5,0xD0,0xBD,0xD1,0x8C,0x00,
};
static signed char OCTOBER_NOM_BE_BY[] = {
0xD0,0xBA,0xD0,0xB0,0xD1,0x81,0xD1,0x82,0xD1,0x80,0xD1,0x8B,0xD1,0x87,0xD0,0xBD,0xD1,0x96,0xD0,0xBA,0x00,
};
static signed char NOVEMBER_NOM_BE_BY[] = {
0xD0,0xBB,0xD1,0x96,0xD1,0x81,0xD1,0x82,0xD0,0xB0,0xD0,0xBF,0xD0,0xB0,0xD0,0xB4,0x00,
};
static signed char DECEMBER_NOM_BE_BY[] = {
0xD1,0x81,0xD0,0xBD,0xD0,0xB5,0xD0,0xB6,0xD0,0xB0,0xD0,0xBD,0xD1,0x8C,0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_BE_BY[]) = {
"",
JANUARY_NOM_BE_BY,
FEBRUARY_NOM_BE_BY,
MARCH_NOM_BE_BY,
APRIL_NOM_BE_BY,
MAY_NOM_BE_BY,
JUNE_NOM_BE_BY,
JULY_NOM_BE_BY,
AUGUST_NOM_BE_BY,
SEPTEMBER_NOM_BE_BY,
OCTOBER_NOM_BE_BY,
NOVEMBER_NOM_BE_BY,
DECEMBER_NOM_BE_BY,
0x00,
};

static signed char JAN_BE_BY[] = {
0xD1,0x81,0xD1,0x82,0xD1,0x83,0x00,
};
static signed char FEB_BE_BY[] = {
0xD0,0xBB,0xD1,0x8E,0xD1,0x82,0x00,
};
static signed char MAR_BE_BY[] = {
0xD1,0x81,0xD0,0xB0,0xD0,0xBA,0x00,
};
static signed char APR_BE_BY[] = {
0xD0,0xBA,0xD1,0x80,0xD0,0xB0,0x00,
};
static signed char JUN_BE_BY[] = {
0xD1,0x87,0xD1,0x8D,0xD1,0x80,0x00,
};
static signed char JUL_BE_BY[] = {
0xD0,0xBB,0xD1,0x96,0xD0,0xBF,0x00,
};
static signed char AUG_BE_BY[] = {
0xD0,0xB6,0xD0,0xBD,0xD1,0x96,0x00,
};
static signed char SEP_BE_BY[] = {
0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0x00,
};
static signed char OCT_BE_BY[] = {
0xD0,0xBA,0xD0,0xB0,0xD1,0x81,0x00,
};
static signed char NOV_BE_BY[] = {
0xD0,0xBB,0xD1,0x96,0xD1,0x81,0x00,
};
static signed char DEC_BE_BY[] = {
0xD1,0x81,0xD0,0xBD,0xD0,0xB5,0x00,
};

static signed char *(CALENDAR_MON_NOMINATIVE_IN_BE_BY[]) = {
"",
JAN_BE_BY,
FEB_BE_BY,
MAR_BE_BY,
APR_BE_BY,
MAY_NOM_BE_BY,
JUN_BE_BY,
JUL_BE_BY,
AUG_BE_BY,
SEP_BE_BY,
OCT_BE_BY,
NOV_BE_BY,
DEC_BE_BY,
0x00,
};

static signed char *(CALENDAR_MON_GENITIVE_IN_BE_BY[]) = {
"",
JAN_BE_BY,
FEB_BE_BY,
MAR_BE_BY,
APR_BE_BY,
MAY_GEN_BE_BY,
JUN_BE_BY,
JUL_BE_BY,
AUG_BE_BY,
SEP_BE_BY,
OCT_BE_BY,
NOV_BE_BY,
DEC_BE_BY,
0x00,
};
