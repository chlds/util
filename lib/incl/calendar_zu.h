/* Synopsis

Zulu

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_ZU[] = ("Zulu");
static signed char CALENDAR_LLSC_IN_ZU[] = {
'Z',0xE1,0xB4,0x9C,0xCA,0x9F,0xE1,0xB4,0x9C,0x00,
};

static signed char CALENDAR_NATIVE_IN_ZU[] = ("IsiZulu");
static signed char CALENDAR_LLSC_NATIVE_IN_ZU[] = {
'I',0xEA,0x9C,0xB1,0xC9,0xAA,'Z',0xE1,0xB4,0x9C,0xCA,0x9F,0xE1,0xB4,0x9C,0x00,
};

static signed char SUNDAY_ZU[] = ("ISonto");
static signed char MONDAY_ZU[] = ("UMsombuluko");
static signed char TUESDAY_ZU[] = ("ULwesibili");
static signed char WEDNESDAY_ZU[] = ("ULwesithathu");
static signed char THURSDAY_ZU[] = ("ULwesine");
static signed char FRIDAY_ZU[] = ("ULwesihlanu");
static signed char SATURDAY_ZU[] = ("UMgqibelo");
static signed char *(CALENDAR_WEEK_IN_ZU[]) = {
SUNDAY_ZU,
MONDAY_ZU,
TUESDAY_ZU,
WEDNESDAY_ZU,
THURSDAY_ZU,
FRIDAY_ZU,
SATURDAY_ZU,
0x00,
};

static signed char SUN_ZU[] = ("Son");
static signed char MON_ZU[] = ("Mso");
static signed char TUE_ZU[] = ("Bil");
static signed char WED_ZU[] = ("Tha");
static signed char THU_ZU[] = ("Sin");
static signed char FRI_ZU[] = ("Hla");
static signed char SAT_ZU[] = ("Mgq");
static signed char *(CALENDAR_WK_IN_ZU[]) = {
SUN_ZU,
MON_ZU,
TUE_ZU,
WED_ZU,
THU_ZU,
FRI_ZU,
SAT_ZU,
0x00,
};

static signed char JANUARY_ZU[] = ("Januwari");
static signed char FEBRUARY_ZU[] = ("Februwari");
static signed char MARCH_ZU[] = ("Mashi");
static signed char APRIL_ZU[] = ("Ephreli");
static signed char MAY_ZU[] = ("Meyi");
static signed char JUNE_ZU[] = ("Juni");
static signed char JULY_ZU[] = ("Julayi");
static signed char AUGUST_ZU[] = ("Agasti");
static signed char SEPTEMBER_ZU[] = ("Septhemba");
static signed char OCTOBER_ZU[] = ("Okthoba");
static signed char NOVEMBER_ZU[] = ("Novemba");
static signed char DECEMBER_ZU[] = ("Disemba");
static signed char *(CALENDAR_MONTH_IN_ZU[]) = {
"",
JANUARY_ZU,
FEBRUARY_ZU,
MARCH_ZU,
APRIL_ZU,
MAY_ZU,
JUNE_ZU,
JULY_ZU,
AUGUST_ZU,
SEPTEMBER_ZU,
OCTOBER_ZU,
NOVEMBER_ZU,
DECEMBER_ZU,
0x00,
};

static signed char JAN_ZU[] = ("Jan");
static signed char FEB_ZU[] = ("Feb");
static signed char MAR_ZU[] = ("Mas");
static signed char APR_ZU[] = ("Eph");
static signed char MAY_ABBREV_ZU[] = ("Mey");
static signed char JUN_ZU[] = ("Jun");
static signed char JUL_ZU[] = ("Jul");
static signed char AUG_ZU[] = ("Aga");
static signed char SEP_ZU[] = ("Sep");
static signed char OCT_ZU[] = ("Okt");
static signed char NOV_ZU[] = ("Nov");
static signed char DEC_ZU[] = ("Dis");
static signed char *(CALENDAR_MON_IN_ZU[]) = {
"",
JAN_ZU,
FEB_ZU,
MAR_ZU,
APR_ZU,
MAY_ABBREV_ZU,
JUN_ZU,
JUL_ZU,
AUG_ZU,
SEP_ZU,
OCT_ZU,
NOV_ZU,
DEC_ZU,
0x00,
};
