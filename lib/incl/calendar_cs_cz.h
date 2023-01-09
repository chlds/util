/* Notes

Czech

Remarks:
Based on UTF-8
*/


static signed char SUN_CS_CZ[] = {
'n','e',0x00,
};
static signed char MON_CS_CZ[] = {
'p','o',0x00,
};
static signed char TUE_CS_CZ[] = {
0xC3,0xBA,'t',0x00,
};
static signed char WED_CS_CZ[] = {
's','t',0x00,
};
static signed char THU_CS_CZ[] = {
0xC4,0x8D,'t',0x00,
};
static signed char FRI_CS_CZ[] = {
'p',0xC3,0xA1,0x00,
};
static signed char *(CALENDAR_WK_IN_CS_CZ[]) = {
SUN_CS_CZ,
MON_CS_CZ,
TUE_CS_CZ,
WED_CS_CZ,
THU_CS_CZ,
FRI_CS_CZ,
"so",
0x00,
};

static signed char SUNDAY_CS_CZ[] = {
'n','e','d',0xC4,0x9B,'l','e',0x00,
};
static signed char MONDAY_CS_CZ[] = {
'p','o','n','d',0xC4,0x9B,'l',0xC3,0xAD,0x00,
};
static signed char TUESDAY_CS_CZ[] = {
0xC3,0xBA,'t','e','r',0xC3,0xBD,0x00,
};
static signed char WEDNESDAY_CS_CZ[] = {
's','t',0xC5,0x99,'e','d','a',0x00,
};
static signed char THURSDAY_CS_CZ[] = {
0xC4,0x8D,'t','v','r','t','e','k',0x00,
};
static signed char FRIDAY_CS_CZ[] = {
'p',0xC3,0xA1,'t','e','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_CS_CZ[]) = {
SUNDAY_CS_CZ,
MONDAY_CS_CZ,
TUESDAY_CS_CZ,
WEDNESDAY_CS_CZ,
THURSDAY_CS_CZ,
FRIDAY_CS_CZ,
"sobota",
0x00,
};

/*
static signed char FEBRUARY_CS_CZ[] = {
0xC3,0xBA,'n','o','r',0x00,
};
static signed char MARCH_CS_CZ[] = {
'b',0xC5,0x99,'e','z','e','n',0x00,
};
static signed char MAY_CS_CZ[] = {
'k','v',0xC4,0x9B,'t','e','n',0x00,
};
static signed char JUNE_CS_CZ[] = {
0xC4,0x8D,'e','r','v','e','n',0x00,
};
static signed char JULY_CS_CZ[] = {
0xC4,0x8D,'e','r','v','e','n','e','c',0x00,
};
static signed char SEPTEMBER_CS_CZ[] = {
'z',0xC3,0xA1,0xC5,0x99,0xC3,0xAD,0x00,
};
static signed char OCTOBER_CS_CZ[] = {
0xC5,0x99,0xC3,0xAD,'j','e','n',0x00,
};
static signed char *(CALENDAR_MONTH_IN_CS_CZ[]) = {
"",
"leden",
FEBRUARY_CS_CZ,
MARCH_CS_CZ,
"duben",
MAY_CS_CZ,
JUNE_CS_CZ,
JULY_CS_CZ,
"srpen",
SEPTEMBER_CS_CZ,
OCTOBER_CS_CZ,
"listopad",
"prosinec",
0x00,
};
//*/

// genitives
static signed char FEBRUARY_CS_CZ[] = {
0xC3,0xBA,'n','o','r','a',0x00,
};
static signed char MARCH_CS_CZ[] = {
'b',0xC5,0x99,'e','z','n','a',0x00,
};
static signed char MAY_CS_CZ[] = {
'k','v',0xC4,0x9B,'t','n','a',0x00,
};
static signed char JUNE_CS_CZ[] = {
0xC4,0x8D,'e','r','v','n','a',0x00,
};
static signed char JULY_CS_CZ[] = {
0xC4,0x8D,'e','r','v','e','n','c','e',0x00,
};
static signed char SEPTEMBER_CS_CZ[] = {
'z',0xC3,0xA1,0xC5,0x99,0xC3,0xAD,0x00,
};
static signed char OCTOBER_CS_CZ[] = {
0xC5,0x99,0xC3,0xAD,'j','n','a',0x00,
};
static signed char *(CALENDAR_MONTH_IN_CS_CZ[]) = {
"",
"ledna",
FEBRUARY_CS_CZ,
MARCH_CS_CZ,
"dubna",
MAY_CS_CZ,
JUNE_CS_CZ,
JULY_CS_CZ,
"srpna",
SEPTEMBER_CS_CZ,
OCTOBER_CS_CZ,
"listopadu",
"prosince",
0x00,
};
