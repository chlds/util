/* Notes

Russian
D0.90/D0.B0 : Cyrillic Capital/Small Letter A
D0.91/D0.B1 : Cyrillic Capital/Small Letter Be
D0.92/D0.B2 : Cyrillic Capital/Small Letter Ve
D0.93/D0.B3 : Cyrillic Capital/Small Letter Ghe
D0.94/D0.B4 : Cyrillic Capital/Small Letter De
D0.95/D0.B5 : Cyrillic Capital/Small Letter Ie
D0.96/D0.B6 : Cyrillic Capital/Small Letter Zhe
D0.97/D0.B7 : Cyrillic Capital/Small Letter Ze
D0.98/D0.B8 : Cyrillic Capital/Small Letter I
D0.99/D0.B9 : Cyrillic Capital/Small Letter Short I
D0.9A/D0.BA : Cyrillic Capital/Small Letter Ka
D0.9B/D0.BB : Cyrillic Capital/Small Letter El
D0.9C/D0.BC : Cyrillic Capital/Small Letter Em
D0.9D/D0.BD : Cyrillic Capital/Small Letter En
D0.9E/D0.BE : Cyrillic Capital/Small Letter O
D0.9F/D0.BF : Cyrillic Capital/Small Letter Pe
D0.A0/D1.80 : Cyrillic Capital/Small Letter Er
D0.A1/D1.81 : Cyrillic Capital/Small Letter Es
D0.A2/D1.82 : Cyrillic Capital/Small Letter Te
D0.A3/D1.83 : Cyrillic Capital/Small Letter U
D0.A4/D1.84 : Cyrillic Capital/Small Letter Ef
D0.A5/D1.85 : Cyrillic Capital/Small Letter Ha
D0.A6/D1.86 : Cyrillic Capital/Small Letter Tse
D0.A7/D1.87 : Cyrillic Capital/Small Letter Che
D0.A8/D1.88 : Cyrillic Capital/Small Letter Sha
D0.A9/D1.89 : Cyrillic Capital/Small Letter Shcha
D0.AA/D1.8A : Cyrillic Capital/Small Letter Hard Sign
D0.AB/D1.8B : Cyrillic Capital/Small Letter Yeru
D0.AC/D1.8C : Cyrillic Capital/Small Letter Soft Sign
D0.AD/D1.8D : Cyrillic Capital/Small Letter E
D0.AE/D1.8E : Cyrillic Capital/Small Letter Yu
D0.AF/D1.8F : Cyrillic Capital/Small Letter Ya

Remarks:
Based on UTF-8
*/


static signed char FIRST_FEM_RU_RU[] = {
0xD0,0xBF,0xD0,0xB5,0xD1,0x80,0xD0,0xB2,0xD0,0xB0,0xD1,0x8F,0x00,
};
static signed char SECOND_FEM_RU_RU[] = {
0xD0,0xB2,0xD1,0x82,0xD0,0xBE,0xD1,0x80,0xD0,0xB0,0xD1,0x8F,0x00,
};
static signed char THIRD_FEM_RU_RU[] = {
0xD1,0x82,0xD1,0x80,0xD0,0xB5,0xD1,0x82,0xD1,0x8C,0xD1,0x8F,0x00,
};
static signed char FOURTH_FEM_RU_RU[] = {
0xD1,0x87,0xD0,0xB5,0xD1,0x82,0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0xD1,0x82,0xD0,0xB0,0xD1,0x8F,0x00,
};
static signed char FIFTH_FEM_RU_RU[] = {
0xD0,0xBF,0xD1,0x8F,0xD1,0x82,0xD0,0xB0,0xD1,0x8F,0x00,
};
static signed char AND_LAST_FEM_RU_RU[] = {
0xD0,0xB8,' ',0xD0,0xBF,0xD0,0xBE,0xD1,0x81,0xD0,0xBB,0xD0,0xB5,0xD0,0xB4,0xD0,0xBD,0xD1,0x8F,0xD1,0x8F,0x00,
};
static signed char *(CALENDAR_ORDER_FEMININE_IN_RU_RU[]) = {
"",
FIRST_FEM_RU_RU,
SECOND_FEM_RU_RU,
THIRD_FEM_RU_RU,
FOURTH_FEM_RU_RU,
FIFTH_FEM_RU_RU,
AND_LAST_FEM_RU_RU,
0x00,
};

static signed char FIRST_MASC_RU_RU[] = {
0xD0,0xBF,0xD0,0xB5,0xD1,0x80,0xD0,0xB2,0xD1,0x8B,0xD0,0xB9,0x00,
};
static signed char SECOND_MASC_RU_RU[] = {
0xD0,0xB2,0xD1,0x82,0xD0,0xBE,0xD1,0x80,0xD0,0xBE,0xD0,0xB9,0x00,
};
static signed char THIRD_MASC_RU_RU[] = {
0xD1,0x82,0xD1,0x80,0xD0,0xB5,0xD1,0x82,0xD0,0xB8,0xD0,0xB9,0x00,
};
static signed char FOURTH_MASC_RU_RU[] = {
0xD1,0x87,0xD0,0xB5,0xD1,0x82,0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0xD1,0x82,0xD1,0x8B,0xD0,0xB9,0x00,
};
static signed char FIFTH_MASC_RU_RU[] = {
0xD0,0xBF,0xD1,0x8F,0xD1,0x82,0xD1,0x8B,0xD0,0xB9,0x00,
};
static signed char AND_LAST_MASC_RU_RU[] = {
0xD0,0xB8,' ',0xD0,0xBF,0xD0,0xBE,0xD1,0x81,0xD0,0xBB,0xD0,0xB5,0xD0,0xB4,0xD0,0xBD,0xD0,0xB8,0xD0,0xB9,0x00,
};
static signed char *(CALENDAR_ORDER_MASCULINE_IN_RU_RU[]) = {
"",
FIRST_MASC_RU_RU,
SECOND_MASC_RU_RU,
THIRD_MASC_RU_RU,
FOURTH_MASC_RU_RU,
FIFTH_MASC_RU_RU,
AND_LAST_MASC_RU_RU,
0x00,
};

static signed char FIRST_NEUT_RU_RU[] = {
0xD0,0xBF,0xD0,0xB5,0xD1,0x80,0xD0,0xB2,0xD0,0xBE,0xD0,0xB5,0x00,
};
static signed char SECOND_NEUT_RU_RU[] = {
0xD0,0xB2,0xD1,0x82,0xD0,0xBE,0xD1,0x80,0xD0,0xBE,0xD0,0xB5,0x00,
};
static signed char THIRD_NEUT_RU_RU[] = {
0xD1,0x82,0xD1,0x80,0xD0,0xB5,0xD1,0x82,0xD1,0x8A,0xD0,0xB5,0x00,
};
static signed char FOURTH_NEUT_RU_RU[] = {
0xD1,0x87,0xD0,0xB5,0xD1,0x82,0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0xD1,0x82,0xD0,0xBE,0xD0,0xB5,0x00,
};
static signed char FIFTH_NEUT_RU_RU[] = {
0xD0,0xBF,0xD1,0x8F,0xD1,0x82,0xD0,0xBE,0xD0,0xB5,0x00,
};
static signed char AND_LAST_NEUT_RU_RU[] = {
0xD0,0xB8,' ',0xD0,0xBF,0xD0,0xBE,0xD1,0x81,0xD0,0xBB,0xD0,0xB5,0xD0,0xB4,0xD0,0xBD,0xD0,0xB5,0xD0,0xB5,0x00,
};
static signed char *(CALENDAR_ORDER_NEUTER_IN_RU_RU[]) = {
"",
FIRST_NEUT_RU_RU,
SECOND_NEUT_RU_RU,
THIRD_NEUT_RU_RU,
FOURTH_NEUT_RU_RU,
FIFTH_NEUT_RU_RU,
AND_LAST_NEUT_RU_RU,
0x00,
};

/*
static signed char SUN_RU_RU[] = {
0xD0,0x92,0xD1,0x81,0x00,
};
static signed char MON_RU_RU[] = {
0xD0,0x9F,0xD0,0xBD,0x00,
};
static signed char TUE_RU_RU[] = {
0xD0,0x92,0xD1,0x82,0x00,
};
static signed char WED_RU_RU[] = {
0xD0,0xA1,0xD1,0x80,0x00,
};
static signed char THU_RU_RU[] = {
0xD0,0xA7,0xD1,0x82,0x00,
};
static signed char FRI_RU_RU[] = {
0xD0,0x9F,0xD1,0x82,0x00,
};
static signed char SAT_RU_RU[] = {
0xD0,0xA1,0xD0,0xB1,0x00,
};
//*/

// small letters only
static signed char SUN_RU_RU[] = {
0xD0,0xB2,0xD1,0x81,0x00,
};
static signed char MON_RU_RU[] = {
0xD0,0xBF,0xD0,0xBD,0x00,
};
static signed char TUE_RU_RU[] = {
0xD0,0xB2,0xD1,0x82,0x00,
};
static signed char WED_RU_RU[] = {
0xD1,0x81,0xD1,0x80,0x00,
};
static signed char THU_RU_RU[] = {
0xD1,0x87,0xD1,0x82,0x00,
};
static signed char FRI_RU_RU[] = {
0xD0,0xBF,0xD1,0x82,0x00,
};
static signed char SAT_RU_RU[] = {
0xD1,0x81,0xD0,0xB1,0x00,
};
static signed char *(CALENDAR_WK_IN_RU_RU[]) = {
SUN_RU_RU,\
MON_RU_RU,\
TUE_RU_RU,\
WED_RU_RU,\
THU_RU_RU,\
FRI_RU_RU,\
SAT_RU_RU,\
0x00,
};

/*
static signed char SUNDAY_RU_RU[] = {
0xD0,0x92,0xD0,0xBE,0xD1,0x81,0xD0,0xBA,0xD1,0x80,0xD0,0xB5,0xD1,0x81,0xD0,0xB5,0xD0,0xBD,0xD1,0x8C,0xD0,0xB5,0x00,
};
static signed char MONDAY_RU_RU[] = {
0xD0,0x9F,0xD0,0xBE,0xD0,0xBD,0xD0,0xB5,0xD0,0xB4,0xD0,0xB5,0xD0,0xBB,0xD1,0x8C,0xD0,0xBD,0xD0,0xB8,0xD0,0xBA,0x00,
};
static signed char TUESDAY_RU_RU[] = {
0xD0,0x92,0xD1,0x82,0xD0,0xBE,0xD1,0x80,0xD0,0xBD,0xD0,0xB8,0xD0,0xBA,0x00,
};
static signed char WEDNESDAY_RU_RU[] = {
0xD0,0xA1,0xD1,0x80,0xD0,0xB5,0xD0,0xB4,0xD0,0xB0,0x00,
};
static signed char THURSDAY_RU_RU[] = {
0xD0,0xA7,0xD0,0xB5,0xD1,0x82,0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0xD0,0xB3,0x00,
};
static signed char FRIDAY_RU_RU[] = {
0xD0,0x9F,0xD1,0x8F,0xD1,0x82,0xD0,0xBD,0xD0,0xB8,0xD1,0x86,0xD0,0xB0,0x00,
};
static signed char SATURDAY_RU_RU[] = {
0xD0,0xA1,0xD1,0x83,0xD0,0xB1,0xD0,0xB1,0xD0,0xBE,0xD1,0x82,0xD0,0xB0,0x00,
};
static signed char *(CALENDAR_WEEK_IN_RU_RU[]) = {
SUNDAY_RU_RU,\
MONDAY_RU_RU,\
TUESDAY_RU_RU,\
WEDNESDAY_RU_RU,\
THURSDAY_RU_RU,\
FRIDAY_RU_RU,\
SATURDAY_RU_RU,\
0x00,
};
//*/

// small letters only
static signed char SUNDAY_RU_RU[] = {
0xD0,0xB2,0xD0,0xBE,0xD1,0x81,0xD0,0xBA,0xD1,0x80,0xD0,0xB5,0xD1,0x81,0xD0,0xB5,0xD0,0xBD,0xD1,0x8C,0xD0,0xB5,0x00,
};
static signed char MONDAY_RU_RU[] = {
0xD0,0xBF,0xD0,0xBE,0xD0,0xBD,0xD0,0xB5,0xD0,0xB4,0xD0,0xB5,0xD0,0xBB,0xD1,0x8C,0xD0,0xBD,0xD0,0xB8,0xD0,0xBA,0x00,
};
static signed char TUESDAY_RU_RU[] = {
0xD0,0xB2,0xD1,0x82,0xD0,0xBE,0xD1,0x80,0xD0,0xBD,0xD0,0xB8,0xD0,0xBA,0x00,
};
static signed char WEDNESDAY_RU_RU[] = {
0xD1,0x81,0xD1,0x80,0xD0,0xB5,0xD0,0xB4,0xD0,0xB0,0x00,
};
static signed char THURSDAY_RU_RU[] = {
0xD1,0x87,0xD0,0xB5,0xD1,0x82,0xD0,0xB2,0xD0,0xB5,0xD1,0x80,0xD0,0xB3,0x00,
};
static signed char FRIDAY_RU_RU[] = {
0xD0,0xBF,0xD1,0x8F,0xD1,0x82,0xD0,0xBD,0xD0,0xB8,0xD1,0x86,0xD0,0xB0,0x00,
};
static signed char SATURDAY_RU_RU[] = {
0xD1,0x81,0xD1,0x83,0xD0,0xB1,0xD0,0xB1,0xD0,0xBE,0xD1,0x82,0xD0,0xB0,0x00,
};
static signed char *(CALENDAR_WEEK_IN_RU_RU[]) = {
SUNDAY_RU_RU,\
MONDAY_RU_RU,\
TUESDAY_RU_RU,\
WEDNESDAY_RU_RU,\
THURSDAY_RU_RU,\
FRIDAY_RU_RU,\
SATURDAY_RU_RU,\
0x00,
};

/*
static signed char JANUARY_RU_RU[] = {
0xD0,0xAF,0xD0,0xBD,0xD0,0xB2,0xD0,0xB0,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char FEBRUARY_RU_RU[] = {
0xD0,0xA4,0xD0,0xB5,0xD0,0xB2,0xD1,0x80,0xD0,0xB0,0xD0,0xBB,0xD1,0x8C,0x00,
};
static signed char MARCH_RU_RU[] = {
0xD0,0x9C,0xD0,0xB0,0xD1,0x80,0xD1,0x82,0x00,
};
static signed char APRIL_RU_RU[] = {
0xD0,0x90,0xD0,0xBF,0xD1,0x80,0xD0,0xB5,0xD0,0xBB,0xD1,0x8C,0x00,
};
static signed char MAY_RU_RU[] = {
0xD0,0x9C,0xD0,0xB0,0xD0,0xB9,0x00,
};
static signed char JUNE_RU_RU[] = {
0xD0,0x98,0xD1,0x8E,0xD0,0xBD,0xD1,0x8C,0x00,
};
static signed char JULY_RU_RU[] = {
0xD0,0x98,0xD1,0x8E,0xD0,0xBB,0xD1,0x8C,0x00,
};
static signed char AUGUST_RU_RU[] = {
0xD0,0x90,0xD0,0xB2,0xD0,0xB3,0xD1,0x83,0xD1,0x81,0xD1,0x82,0x00,
};
static signed char SEPTEMBER_RU_RU[] = {
0xD0,0xA1,0xD0,0xB5,0xD0,0xBD,0xD1,0x82,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char OCTOBER_RU_RU[] = {
0xD0,0x9E,0xD0,0xBA,0xD1,0x82,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char NOVEMBER_RU_RU[] = {
0xD0,0x9D,0xD0,0xBE,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char DECEMBER_RU_RU[] = {
0xD0,0x94,0xD0,0xB5,0xD0,0xBA,0xD0,0xB0,0xD0,0xB1,0xD1,0x80,0xD1,0x8C,0x00,
};
static signed char *(CALENDAR_MONTH_IN_RU_RU[]) = {
"",\
JANUARY_RU_RU,\
FEBRUARY_RU_RU,\
MARCH_RU_RU,\
APRIL_RU_RU,\
MAY_RU_RU,\
JUNE_RU_RU,\
JULY_RU_RU,\
AUGUST_RU_RU,\
SEPTEMBER_RU_RU,\
OCTOBER_RU_RU,\
NOVEMBER_RU_RU,\
DECEMBER_RU_RU,\
0x00,
};
//*/

/* in the genitives
static signed char JANUARY_RU_RU[] = {
0xD0,0xAF,0xD0,0xBD,0xD0,0xB2,0xD0,0xB0,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char FEBRUARY_RU_RU[] = {
0xD0,0xA4,0xD0,0xB5,0xD0,0xB2,0xD1,0x80,0xD0,0xB0,0xD0,0xBB,0xD1,0x8F,0x00,
};
static signed char MARCH_RU_RU[] = {
0xD0,0x9C,0xD0,0xB0,0xD1,0x80,0xD1,0x82,0xD0,0xB0,0x00,
};
static signed char APRIL_RU_RU[] = {
0xD0,0x90,0xD0,0xBF,0xD1,0x80,0xD0,0xB5,0xD0,0xBB,0xD1,0x8F,0x00,
};
static signed char MAY_RU_RU[] = {
0xD0,0x9C,0xD0,0xB0,0xD1,0x8F,0x00,
};
static signed char JUNE_RU_RU[] = {
0xD0,0x98,0xD1,0x8E,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char JULY_RU_RU[] = {
0xD0,0x98,0xD1,0x8E,0xD0,0xBB,0xD1,0x8F,0x00,
};
static signed char AUGUST_RU_RU[] = {
0xD0,0x90,0xD0,0xB2,0xD0,0xB3,0xD1,0x83,0xD1,0x81,0xD1,0x82,0xD0,0xB0,0x00,
};
static signed char SEPTEMBER_RU_RU[] = {
0xD0,0xA1,0xD0,0xB5,0xD0,0xBD,0xD1,0x82,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char OCTOBER_RU_RU[] = {
0xD0,0x9E,0xD0,0xBA,0xD1,0x82,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char NOVEMBER_RU_RU[] = {
0xD0,0x9D,0xD0,0xBE,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char DECEMBER_RU_RU[] = {
0xD0,0x94,0xD0,0xB5,0xD0,0xBA,0xD0,0xB0,0xD0,0xB1,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char *(CALENDAR_MONTH_IN_RU_RU[]) = {
"",\
JANUARY_RU_RU,\
FEBRUARY_RU_RU,\
MARCH_RU_RU,\
APRIL_RU_RU,\
MAY_RU_RU,\
JUNE_RU_RU,\
JULY_RU_RU,\
AUGUST_RU_RU,\
SEPTEMBER_RU_RU,\
OCTOBER_RU_RU,\
NOVEMBER_RU_RU,\
DECEMBER_RU_RU,\
0x00,
};
//*/

// small letters in the genitives
static signed char JANUARY_RU_RU[] = {
0xD1,0x8F,0xD0,0xBD,0xD0,0xB2,0xD0,0xB0,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char FEBRUARY_RU_RU[] = {
0xD1,0x84,0xD0,0xB5,0xD0,0xB2,0xD1,0x80,0xD0,0xB0,0xD0,0xBB,0xD1,0x8F,0x00,
};
static signed char MARCH_RU_RU[] = {
0xD0,0xBC,0xD0,0xB0,0xD1,0x80,0xD1,0x82,0xD0,0xB0,0x00,
};
static signed char APRIL_RU_RU[] = {
0xD0,0xB0,0xD0,0xBF,0xD1,0x80,0xD0,0xB5,0xD0,0xBB,0xD1,0x8F,0x00,
};
static signed char MAY_RU_RU[] = {
0xD0,0xBC,0xD0,0xB0,0xD1,0x8F,0x00,
};
static signed char JUNE_RU_RU[] = {
0xD0,0xB8,0xD1,0x8E,0xD0,0xBD,0xD1,0x8F,0x00,
};
static signed char JULY_RU_RU[] = {
0xD0,0xB8,0xD1,0x8E,0xD0,0xBB,0xD1,0x8F,0x00,
};
static signed char AUGUST_RU_RU[] = {
0xD0,0xB0,0xD0,0xB2,0xD0,0xB3,0xD1,0x83,0xD1,0x81,0xD1,0x82,0xD0,0xB0,0x00,
};
static signed char SEPTEMBER_RU_RU[] = {
0xD1,0x81,0xD0,0xB5,0xD0,0xBD,0xD1,0x82,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char OCTOBER_RU_RU[] = {
0xD0,0xBE,0xD0,0xBA,0xD1,0x82,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char NOVEMBER_RU_RU[] = {
0xD0,0xBD,0xD0,0xBE,0xD1,0x8F,0xD0,0xB1,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char DECEMBER_RU_RU[] = {
0xD0,0xB4,0xD0,0xB5,0xD0,0xBA,0xD0,0xB0,0xD0,0xB1,0xD1,0x80,0xD1,0x8F,0x00,
};
static signed char *(CALENDAR_MONTH_IN_RU_RU[]) = {
"",\
JANUARY_RU_RU,\
FEBRUARY_RU_RU,\
MARCH_RU_RU,\
APRIL_RU_RU,\
MAY_RU_RU,\
JUNE_RU_RU,\
JULY_RU_RU,\
AUGUST_RU_RU,\
SEPTEMBER_RU_RU,\
OCTOBER_RU_RU,\
NOVEMBER_RU_RU,\
DECEMBER_RU_RU,\
0x00,
};
