/* Notes

Serbian
D0.90/D0.B0 : Cyrillic Capital/Small Letter A
D0.91/D0.B1 : Cyrillic Capital/Small Letter Be
D0.92/D0.B2 : Cyrillic Capital/Small Letter Ve
D0.93/D0.B3 : Cyrillic Capital/Small Letter Ghe
D0.94/D0.B4 : Cyrillic Capital/Small Letter De
D0.82/D1.92 : Cyrillic Capital/Small Letter Dje
D0.95/D0.B5 : Cyrillic Capital/Small Letter Ie
D0.96/D0.B6 : Cyrillic Capital/Small Letter Zhe
D0.97/D0.B7 : Cyrillic Capital/Small Letter Ze
D0.98/D0.B8 : Cyrillic Capital/Small Letter I
D0.88/D1.98 : Cyrillic Capital/Small Letter Je
D0.9A/D0.BA : Cyrillic Capital/Small Letter Ka
D0.9B/D0.BB : Cyrillic Capital/Small Letter El
D0.89/D1.99 : Cyrillic Capital/Small Letter Lje
D0.9C/D0.BC : Cyrillic Capital/Small Letter Em
D0.9D/D0.BD : Cyrillic Capital/Small Letter En
D0.8A/D1.9A : Cyrillic Capital/Small Letter Nje
D0.9E/D0.BE : Cyrillic Capital/Small Letter O
D0.9F/D0.BF : Cyrillic Capital/Small Letter Pe
D0.A0/D1.80 : Cyrillic Capital/Small Letter Er
D0.A1/D1.81 : Cyrillic Capital/Small Letter Es
D0.A2/D1.82 : Cyrillic Capital/Small Letter Te
D0.8B/D1.9B : Cyrillic Capital/Small Letter Tshe
D0.A3/D1.83 : Cyrillic Capital/Small Letter U
D0.A4/D1.84 : Cyrillic Capital/Small Letter Ef
D0.A5/D1.85 : Cyrillic Capital/Small Letter Ha
D0.A6/D1.86 : Cyrillic Capital/Small Letter Tse
D0.A7/D1.87 : Cyrillic Capital/Small Letter Che
D0.8F/D1.9F : Cyrillic Capital/Small Letter Dzhe
D0.A8/D1.88 : Cyrillic Capital/Small Letter Sha

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_SR_CYRL_RS[] = ("Serbian");
static signed char CALENDAR_LLSC_IN_SR_CYRL_RS[] = {
'S',0xE1,0xB4,0x87,0xCA,0x80,0xCA,0x99,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char SUNDAY_SR_CYRL_RS[] = {
0xD0,0xBD,0xD0,0xB5,0xD0,0xB4,0xD0,0xB5,0xD1,0x99,0xD0,0xB0,0x00,
};
static signed char MONDAY_SR_CYRL_RS[] = {
0xD0,0xBF,0xD0,0xBE,0xD0,0xBD,0xD0,0xB5,0xD0,0xB4,0xD0,0xB5,0xD1,0x99,0xD0,0xB0,0xD0,0xBA,0x00,
};
static signed char TUESDAY_SR_CYRL_RS[] = {
0xD1,0x83,0xD1,0x82,0xD0,0xBE,0xD1,0x80,0xD0,0xB0,0xD0,0xBA,0x00,
};
static signed char WEDNESDAY_SR_CYRL_RS[] = {
0xD1,0x81,0xD1,0x80,0xD0,0xB5,0xD0,0xB4,0xD0,0xB0,0x00,
};
static signed char THURSDAY_SR_CYRL_RS[] = {
0xD1,0x87,0xD0,0xB5,0xD1,0x82,0xD0,0xB2,0xD1,0x80,0xD1,0x82,0xD0,0xB0,0xD0,0xBA,0x00,
};
static signed char FRIDAY_SR_CYRL_RS[] = {
0xD0,0xBF,0xD0,0xB5,0xD1,0x82,0xD0,0xB0,0xD0,0xBA,0x00,
};
static signed char SATURDAY_SR_CYRL_RS[] = {
0xD1,0x81,0xD1,0x83,0xD0,0xB1,0xD0,0xBE,0xD1,0x82,0xD0,0xB0,0x00,
};
static signed char *(CALENDAR_WEEK_IN_SR_CYRL_RS[]) = {
SUNDAY_SR_CYRL_RS,
MONDAY_SR_CYRL_RS,
TUESDAY_SR_CYRL_RS,
WEDNESDAY_SR_CYRL_RS,
THURSDAY_SR_CYRL_RS,
FRIDAY_SR_CYRL_RS,
SATURDAY_SR_CYRL_RS,
0x00,
};

static signed char SUN_SR_CYRL_RS[] = {
0xD0,0xBD,0xD0,0xB5,0xD0,0xB4,0x00,
};
static signed char MON_SR_CYRL_RS[] = {
0xD0,0xBF,0xD0,0xBE,0xD0,0xBD,0x00,
};
static signed char TUE_SR_CYRL_RS[] = {
0xD1,0x83,0xD1,0x82,0xD0,0xBE,0x00,
};
static signed char WED_SR_CYRL_RS[] = {
0xD1,0x81,0xD1,0x80,0xD0,0xB5,0x00,
};
static signed char THU_SR_CYRL_RS[] = {
0xD1,0x87,0xD0,0xB5,0xD1,0x82,0x00,
};
static signed char FRI_SR_CYRL_RS[] = {
0xD0,0xBF,0xD0,0xB5,0xD1,0x82,0x00,
};
static signed char SAT_SR_CYRL_RS[] = {
0xD1,0x81,0xD1,0x83,0xD0,0xB1,0x00,
};
static signed char *(CALENDAR_WK_IN_SR_CYRL_RS[]) = {
SUN_SR_CYRL_RS,
MON_SR_CYRL_RS,
TUE_SR_CYRL_RS,
WED_SR_CYRL_RS,
THU_SR_CYRL_RS,
FRI_SR_CYRL_RS,
SAT_SR_CYRL_RS,
0x00,
};

// genitive case
static signed char JANUARY_SR_CYRL_RS[] = {
0xD1,0x98,0xD0,0xB0,0xD0,0xBD,0xD1,0x83,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char FEBRUARY_SR_CYRL_RS[] = {
0xD1,0x84,0xD0,0xB5,0xD0,0xB1,0xD1,0x80,0xD1,0x83,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char MARCH_SR_CYRL_RS[] = {
0xD0,0xBC,0xD0,0xB0,0xD1,0x80,0xD1,0x82,0x00,
};
static signed char APRIL_SR_CYRL_RS[] = {
0xD0,0xB0,0xD0,0xBF,0xD1,0x80,0xD0,0xB8,0xD0,0xBB,0x00,
};
static signed char MAY_SR_CYRL_RS[] = {
0xD0,0xBC,0xD0,0xB0,0xD1,0x98,0x00,
};
static signed char JUNE_SR_CYRL_RS[] = {
0xD1,0x98,0xD1,0x83,0xD0,0xBD,0x00,
};
static signed char JULY_SR_CYRL_RS[] = {
0xD1,0x98,0xD1,0x83,0xD0,0xBB,0x00,
};
static signed char AUGUST_SR_CYRL_RS[] = {
0xD0,0xB0,0xD0,0xB2,0xD0,0xB3,0xD1,0x83,0xD1,0x81,0xD1,0x82,0x00,
};
static signed char SEPTEMBER_SR_CYRL_RS[] = {
0xD1,0x81,0xD0,0xB5,0xD0,0xBF,0xD1,0x82,0xD0,0xB5,0xD0,0xBC,0xD0,0xB1,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char OCTOBER_SR_CYRL_RS[] = {
0xD0,0xBE,0xD0,0xBA,0xD1,0x82,0xD0,0xBE,0xD0,0xB1,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char NOVEMBER_SR_CYRL_RS[] = {
0xD0,0xBD,0xD0,0xBE,0xD0,0xB2,0xD0,0xB5,0xD0,0xBC,0xD0,0xB1,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char DECEMBER_SR_CYRL_RS[] = {
0xD0,0xB4,0xD0,0xB5,0xD1,0x86,0xD0,0xB5,0xD0,0xBC,0xD0,0xB1,0xD0,0xB0,0xD1,0x80,0x00,
};
static signed char *(CALENDAR_MONTH_IN_SR_CYRL_RS[]) = {
"",
JANUARY_SR_CYRL_RS,
FEBRUARY_SR_CYRL_RS,
MARCH_SR_CYRL_RS,
APRIL_SR_CYRL_RS,
MAY_SR_CYRL_RS,
JUNE_SR_CYRL_RS,
JULY_SR_CYRL_RS,
AUGUST_SR_CYRL_RS,
SEPTEMBER_SR_CYRL_RS,
OCTOBER_SR_CYRL_RS,
NOVEMBER_SR_CYRL_RS,
DECEMBER_SR_CYRL_RS,
0x00,
};
