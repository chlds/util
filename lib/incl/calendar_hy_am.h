/* Notes

Armenian / Hayeren

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_HY_AM[] = ("Armenian / Hayeren");
static signed char CALENDAR_LLSC_IN_HY_AM[] = {
0xE1,0xB4,0x80,0xCA,0x80,0xE1,0xB4,0x8D,0xE1,0xB4,0x87,0xC9,0xB4,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,\
' ','/',\
' ',0xCA,0x9C,0xE1,0xB4,0x80,0xCA,0x8F,0xE1,0xB4,0x87,0xCA,0x80,0xE1,0xB4,0x87,0xC9,0xB4,\
0x00,
};
static signed char CALENDAR_NATIVE_IN_HY_AM[] = {
0xD5,0xB0,0xD5,0xA1,0xD5,0xB5,0xD5,0xA5,0xD6,0x80,0xD5,0xA7,0xD5,0xB6,\
' ','/',' ',\
0xD5,0xB0,0xD5,0xA1,0xD5,0xB5,0xD5,0xA5,0xD6,0x80,0xD5,0xA5,0xD5,0xB6,\
0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_HY_AM = (CALENDAR_NATIVE_IN_HY_AM);

static signed char SUNDAY_HY_AM[] = {
0xD5,0xAF,0xD5,0xAB,0xD6,0x80,0xD5,0xA1,0xD5,0xAF,0xD5,0xAB,0x00,
};
static signed char MONDAY_HY_AM[] = {
0xD5,0xA5,0xD6,0x80,0xD5,0xAF,0xD5,0xB8,0xD6,0x82,0xD5,0xB7,0xD5,0xA1,0xD5,0xA2,0xD5,0xA9,0xD5,0xAB,0x00,
};
static signed char TUESDAY_HY_AM[] = {
0xD5,0xA5,0xD6,0x80,0xD5,0xA5,0xD6,0x84,0xD5,0xB7,0xD5,0xA1,0xD5,0xA2,0xD5,0xA9,0xD5,0xAB,0x00,
};
static signed char WEDNESDAY_HY_AM[] = {
0xD5,0xB9,0xD5,0xB8,0xD6,0x80,0xD5,0xA5,0xD6,0x84,0xD5,0xB7,0xD5,0xA1,0xD5,0xA2,0xD5,0xA9,0xD5,0xAB,0x00,
};
static signed char THURSDAY_HY_AM[] = {
0xD5,0xB0,0xD5,0xAB,0xD5,0xB6,0xD5,0xA3,0xD5,0xB7,0xD5,0xA1,0xD5,0xA2,0xD5,0xA9,0xD5,0xAB,0x00,
};
static signed char FRIDAY_HY_AM[] = {
0xD5,0xB8,0xD6,0x82,0xD6,0x80,0xD5,0xA2,0xD5,0xA1,0xD5,0xA9,0x00,
};
static signed char SATURDAY_HY_AM[] = {
0xD5,0xB7,0xD5,0xA1,0xD5,0xA2,0xD5,0xA1,0xD5,0xA9,0x00,
};
static signed char *(CALENDAR_WEEK_IN_HY_AM[]) = {
SUNDAY_HY_AM,
MONDAY_HY_AM,
TUESDAY_HY_AM,
WEDNESDAY_HY_AM,
THURSDAY_HY_AM,
FRIDAY_HY_AM,
SATURDAY_HY_AM,
0x00,
};

static signed char SUN_HY_AM[] = {
0xD5,0xAF,0xD5,0xAB,0xD6,0x80,0x00,
};
static signed char MON_HY_AM[] = {
0xD5,0xA5,0xD6,0x80,0xD5,0xAF,0x00,
};
static signed char TUE_HY_AM[] = {
0xD5,0xA5,0xD6,0x80,0xD6,0x84,0x00,
};
static signed char WED_HY_AM[] = {
0xD5,0xB9,0xD6,0x80,0xD6,0x84,0x00,
};
static signed char THU_HY_AM[] = {
0xD5,0xB0,0xD5,0xB6,0xD5,0xA3,0x00,
};
static signed char FRI_HY_AM[] = {
0xD5,0xB8,0xD6,0x82,0xD6,0x80,0x00,
};
static signed char SAT_HY_AM[] = {
0xD5,0xB7,0xD5,0xA2,0xD5,0xA9,0x00,
};
static signed char *(CALENDAR_WK_IN_HY_AM[]) = {
SUN_HY_AM,
MON_HY_AM,
TUE_HY_AM,
WED_HY_AM,
THU_HY_AM,
FRI_HY_AM,
SAT_HY_AM,
0x00,
};

static signed char JANUARY_HY_AM[] = {
0xD5,0xB0,0xD5,0xB8,0xD6,0x82,0xD5,0xB6,0xD5,0xBE,0xD5,0xA1,0xD6,0x80,0xD5,0xAB,0x00,
};
static signed char FEBRUARY_HY_AM[] = {
0xD6,0x83,0xD5,0xA5,0xD5,0xBF,0xD6,0x80,0xD5,0xBE,0xD5,0xA1,0xD6,0x80,0xD5,0xAB,0x00,
};
static signed char MARCH_HY_AM[] = {
0xD5,0xB4,0xD5,0xA1,0xD6,0x80,0xD5,0xBF,0xD5,0xAB,0x00,
};
static signed char APRIL_HY_AM[] = {
0xD5,0xA1,0xD5,0xBA,0xD6,0x80,0xD5,0xAB,0xD5,0xAC,0xD5,0xAB,0x00,
};
static signed char MAY_HY_AM[] = {
0xD5,0xB4,0xD5,0xA1,0xD5,0xB5,0xD5,0xAB,0xD5,0xBD,0xD5,0xAB,0x00,
};
static signed char JUNE_HY_AM[] = {
0xD5,0xB0,0xD5,0xB8,0xD6,0x82,0xD5,0xB6,0xD5,0xAB,0xD5,0xBD,0xD5,0xAB,0x00,
};
static signed char JULY_HY_AM[] = {
0xD5,0xB0,0xD5,0xB8,0xD6,0x82,0xD5,0xAC,0xD5,0xAB,0xD5,0xBD,0xD5,0xAB,0x00,
};
static signed char AUGUST_HY_AM[] = {
0xD6,0x85,0xD5,0xA3,0xD5,0xB8,0xD5,0xBD,0xD5,0xBF,0xD5,0xB8,0xD5,0xBD,0xD5,0xAB,0x00,
};
static signed char SEPTEMBER_HY_AM[] = {
0xD5,0xBD,0xD5,0xA5,0xD5,0xBA,0xD5,0xBF,0xD5,0xA5,0xD5,0xB4,0xD5,0xA2,0xD5,0xA5,0xD6,0x80,0xD5,0xAB,0x00,
};
static signed char OCTOBER_HY_AM[] = {
0xD5,0xB0,0xD5,0xB8,0xD5,0xAF,0xD5,0xBF,0xD5,0xA5,0xD5,0xB4,0xD5,0xA2,0xD5,0xA5,0xD6,0x80,0xD5,0xAB,0x00,
};
static signed char NOVEMBER_HY_AM[] = {
0xD5,0xB6,0xD5,0xB8,0xD5,0xB5,0xD5,0xA5,0xD5,0xB4,0xD5,0xA2,0xD5,0xA5,0xD6,0x80,0xD5,0xAB,0x00,
};
static signed char DECEMBER_HY_AM[] = {
0xD5,0xA4,0xD5,0xA5,0xD5,0xAF,0xD5,0xBF,0xD5,0xA5,0xD5,0xB4,0xD5,0xA2,0xD5,0xA5,0xD6,0x80,0xD5,0xAB,0x00,
};
static signed char *(CALENDAR_MONTH_IN_HY_AM[]) = {
"",
JANUARY_HY_AM,
FEBRUARY_HY_AM,
MARCH_HY_AM,
APRIL_HY_AM,
MAY_HY_AM,
JUNE_HY_AM,
JULY_HY_AM,
AUGUST_HY_AM,
SEPTEMBER_HY_AM,
OCTOBER_HY_AM,
NOVEMBER_HY_AM,
DECEMBER_HY_AM,
0x00,
};

static signed char JANUARY_NOM_HY_AM[] = {
0xD5,0xB0,0xD5,0xB8,0xD6,0x82,0xD5,0xB6,0xD5,0xBE,0xD5,0xA1,0xD6,0x80,0x00,
};
static signed char FEBRUARY_NOM_HY_AM[] = {
0xD6,0x83,0xD5,0xA5,0xD5,0xBF,0xD6,0x80,0xD5,0xBE,0xD5,0xA1,0xD6,0x80,0x00,
};
static signed char MARCH_NOM_HY_AM[] = {
0xD5,0xB4,0xD5,0xA1,0xD6,0x80,0xD5,0xBF,0x00,
};
static signed char APRIL_NOM_HY_AM[] = {
0xD5,0xA1,0xD5,0xBA,0xD6,0x80,0xD5,0xAB,0xD5,0xAC,0x00,
};
static signed char MAY_NOM_HY_AM[] = {
0xD5,0xB4,0xD5,0xA1,0xD5,0xB5,0xD5,0xAB,0xD5,0xBD,0x00,
};
static signed char JUNE_NOM_HY_AM[] = {
0xD5,0xB0,0xD5,0xB8,0xD6,0x82,0xD5,0xB6,0xD5,0xAB,0xD5,0xBD,0x00,
};
static signed char JULY_NOM_HY_AM[] = {
0xD5,0xB0,0xD5,0xB8,0xD6,0x82,0xD5,0xAC,0xD5,0xAB,0xD5,0xBD,0x00,
};
static signed char AUGUST_NOM_HY_AM[] = {
0xD6,0x85,0xD5,0xA3,0xD5,0xB8,0xD5,0xBD,0xD5,0xBF,0xD5,0xB8,0xD5,0xBD,0x00,
};
static signed char SEPTEMBER_NOM_HY_AM[] = {
0xD5,0xBD,0xD5,0xA5,0xD5,0xBA,0xD5,0xBF,0xD5,0xA5,0xD5,0xB4,0xD5,0xA2,0xD5,0xA5,0xD6,0x80,0x00,
};
static signed char OCTOBER_NOM_HY_AM[] = {
0xD5,0xB0,0xD5,0xB8,0xD5,0xAF,0xD5,0xBF,0xD5,0xA5,0xD5,0xB4,0xD5,0xA2,0xD5,0xA5,0xD6,0x80,0x00,
};
static signed char NOVEMBER_NOM_HY_AM[] = {
0xD5,0xB6,0xD5,0xB8,0xD5,0xB5,0xD5,0xA5,0xD5,0xB4,0xD5,0xA2,0xD5,0xA5,0xD6,0x80,0x00,
};
static signed char DECEMBER_NOM_HY_AM[] = {
0xD5,0xA4,0xD5,0xA5,0xD5,0xAF,0xD5,0xBF,0xD5,0xA5,0xD5,0xB4,0xD5,0xA2,0xD5,0xA5,0xD6,0x80,0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_HY_AM[]) = {
"",
JANUARY_NOM_HY_AM,
FEBRUARY_NOM_HY_AM,
MARCH_NOM_HY_AM,
APRIL_NOM_HY_AM,
MAY_NOM_HY_AM,
JUNE_NOM_HY_AM,
JULY_NOM_HY_AM,
AUGUST_NOM_HY_AM,
SEPTEMBER_NOM_HY_AM,
OCTOBER_NOM_HY_AM,
NOVEMBER_NOM_HY_AM,
DECEMBER_NOM_HY_AM,
0x00,
};

static signed char JAN_HY_AM[] = {
0xD5,0xB0,0xD5,0xB6,0xD5,0xBE,0x00,
};
static signed char FEB_HY_AM[] = {
0xD6,0x83,0xD5,0xBF,0xD5,0xBE,0x00,
};
static signed char MAR_HY_AM[] = {
0xD5,0xB4,0xD6,0x80,0xD5,0xBF,0x00,
};
static signed char APR_HY_AM[] = {
0xD5,0xA1,0xD5,0xBA,0xD6,0x80,0x00,
};
static signed char MAY_ABBREV_HY_AM[] = {
0xD5,0xB4,0xD5,0xB5,0xD5,0xBD,0x00,
};
static signed char JUN_HY_AM[] = {
0xD5,0xB0,0xD5,0xB6,0xD5,0xBD,0x00,
};
static signed char JUL_HY_AM[] = {
0xD5,0xB0,0xD5,0xAC,0xD5,0xBD,0x00,
};
static signed char AUG_HY_AM[] = {
0xD6,0x85,0xD5,0xA3,0xD5,0xBD,0x00,
};
static signed char SEP_HY_AM[] = {
0xD5,0xBD,0xD5,0xA5,0xD5,0xBA,0x00,
};
static signed char OCT_HY_AM[] = {
0xD5,0xB0,0xD5,0xB8,0xD5,0xAF,0x00,
};
static signed char NOV_HY_AM[] = {
0xD5,0xB6,0xD5,0xB8,0xD5,0xB5,0x00,
};
static signed char DEC_HY_AM[] = {
0xD5,0xA4,0xD5,0xA5,0xD5,0xAF,0x00,
};
static signed char *(CALENDAR_MON_IN_HY_AM[]) = {
"",
JAN_HY_AM,
FEB_HY_AM,
MAR_HY_AM,
APR_HY_AM,
MAY_ABBREV_HY_AM,
JUN_HY_AM,
JUL_HY_AM,
AUG_HY_AM,
SEP_HY_AM,
OCT_HY_AM,
NOV_HY_AM,
DEC_HY_AM,
0x00,
};
