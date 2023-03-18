/* Notes

Czech
C4.84/C4.85 : Latin Capital/Small Letter A with Ogonek
C4.8C/C4.8D : Latin Capital/Small Letter C with Caron
C4.96/C4.97 : Latin Capital/Small Letter E with Dot above
C4.98/C4.99 : Latin Capital/Small Letter E with Ogonek
C4.9A/C4.9B : Latin Capital/Small Letter E with Caron
C4.AE/C4.AF : Latin Capital/Small Letter I with Ogonek
C5.87/C5.88 : Latin Capital/Small Letter N with Caron
C5.98/C5.99 : Latin Capital/Small Letter R with Caron
C5.9E/C5.9F : Latin Capital/Small Letter S with Cedilla
C5.A0/C5.A1 : Latin Capital/Small Letter S with Caron
C5.AA/C5.AB : Latin Capital/Small Letter U with Macron
C5.B2/C5.B3 : Latin Capital/Small Letter U with Ogonek
C5.BD/C5.BE : Latin Capital/Small Letter Z with Caron

Remarks:
Feminine, masculine life, masculine non-life and neuter
Based on UTF-8
*/


static signed char FIRST_FEM_CS_CZ[] = {
'p','r','v','n',0xC3,0xAD,0x00,
};
static signed char SECOND_FEM_CS_CZ[] = {
'd','r','u','h',0xC3,0xA1,0x00,
};
static signed char THIRD_FEM_CS_CZ[] = {
't',0xC5,0x99,'e','t',0xC3,0xAD,0x00,
};
static signed char FOURTH_FEM_CS_CZ[] = {
0xC4,0x8D,'t','v','r','t',0xC3,0xA1,0x00,
};
static signed char FIFTH_FEM_CS_CZ[] = {
'p',0xC3,0xA1,'t',0xC3,0xA1,0x00,
};
static signed char AND_LAST_FEM_CS_CZ[] = {
'a',' ','p','o','s','l','e','d','n',0xC3,0xAD,0x00,
};
static signed char *(CALENDAR_ORDER_FEMININE_IN_CS_CZ[]) = {
"",
FIRST_FEM_CS_CZ,
SECOND_FEM_CS_CZ,
THIRD_FEM_CS_CZ,
FOURTH_FEM_CS_CZ,
FIFTH_FEM_CS_CZ,
AND_LAST_FEM_CS_CZ,
"v",
0x00,
};

static signed char FIRST_MASC_LIFE_CS_CZ[] = {
'p','r','v','n',0xC3,0xAD,0x00,
};
static signed char SECOND_MASC_LIFE_CS_CZ[] = {
'd','r','u','h',0xC3,0xBD,0x00,
};
static signed char THIRD_MASC_LIFE_CS_CZ[] = {
't',0xC5,0x99,'e','t',0xC3,0xAD,0x00,
};
static signed char FOURTH_MASC_LIFE_CS_CZ[] = {
0xC4,0x8D,'t','v','r','t',0xC3,0xBD,0x00,
};
static signed char FIFTH_MASC_LIFE_CS_CZ[] = {
'p',0xC3,0xA1,'t',0xC3,0xBD,0x00,
};
static signed char AND_LAST_MASC_LIFE_CS_CZ[] = {
'a',' ','p','o','s','l','e','d','n',0xC3,0xAD,0x00,
};
static signed char *(CALENDAR_ORDER_MASCULINE_LIFE_IN_CS_CZ[]) = {
"",
FIRST_MASC_LIFE_CS_CZ,
SECOND_MASC_LIFE_CS_CZ,
THIRD_MASC_LIFE_CS_CZ,
FOURTH_MASC_LIFE_CS_CZ,
FIFTH_MASC_LIFE_CS_CZ,
AND_LAST_MASC_LIFE_CS_CZ,
"v",
0x00,
};

static signed char FIRST_MASC_NONLIFE_CS_CZ[] = {
'p','r','v','n',0xC3,0xAD,0x00,
};
static signed char SECOND_MASC_NONLIFE_CS_CZ[] = {
'd','r','u','h',0xC3,0xBD,0x00,
};
static signed char THIRD_MASC_NONLIFE_CS_CZ[] = {
't',0xC5,0x99,'e','t',0xC3,0xAD,0x00,
};
static signed char FOURTH_MASC_NONLIFE_CS_CZ[] = {
0xC4,0x8D,'t','v','r','t',0xC3,0xBD,0x00,
};
static signed char FIFTH_MASC_NONLIFE_CS_CZ[] = {
'p',0xC3,0xA1,'t',0xC3,0xBD,0x00,
};
static signed char AND_LAST_MASC_NONLIFE_CS_CZ[] = {
'a',' ','p','o','s','l','e','d','n',0xC3,0xAD,0x00,
};
static signed char *(CALENDAR_ORDER_MASCULINE_NONLIFE_IN_CS_CZ[]) = {
"",
FIRST_MASC_NONLIFE_CS_CZ,
SECOND_MASC_NONLIFE_CS_CZ,
THIRD_MASC_NONLIFE_CS_CZ,
FOURTH_MASC_NONLIFE_CS_CZ,
FIFTH_MASC_NONLIFE_CS_CZ,
AND_LAST_MASC_NONLIFE_CS_CZ,
"v",
0x00,
};

static signed char FIRST_NEUT_CS_CZ[] = {
'p','r','v','n',0xC3,0xAD,0x00,
};
static signed char SECOND_NEUT_CS_CZ[] = {
'd','r','u','h',0xC3,0xA9,0x00,
};
static signed char THIRD_NEUT_CS_CZ[] = {
't',0xC5,0x99,'e','t',0xC3,0xAD,0x00,
};
static signed char FOURTH_NEUT_CS_CZ[] = {
0xC4,0x8D,'t','v','r','t',0xC3,0xA9,0x00,
};
static signed char FIFTH_NEUT_CS_CZ[] = {
'p',0xC3,0xA1,'t',0xC3,0xA9,0x00,
};
static signed char AND_LAST_NEUT_CS_CZ[] = {
'a',' ','p','o','s','l','e','d','n',0xC3,0xAD,0x00,
};
static signed char *(CALENDAR_ORDER_NEUTER_IN_CS_CZ[]) = {
"",
FIRST_NEUT_CS_CZ,
SECOND_NEUT_CS_CZ,
THIRD_NEUT_CS_CZ,
FOURTH_NEUT_CS_CZ,
FIFTH_NEUT_CS_CZ,
AND_LAST_NEUT_CS_CZ,
"v",
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

static signed char FEBRUARY_ORDER_CS_CZ[] = {
0xC3,0xBA,'n','o','r','u',0x00,
};
static signed char MARCH_ORDER_CS_CZ[] = {
'b',0xC5,0x99,'e','z','n','u',0x00,
};
static signed char MAY_ORDER_CS_CZ[] = {
'k','v',0xC4,0x9B,'t','n','u',0x00,
};
static signed char JUNE_ORDER_CS_CZ[] = {
0xC4,0x8D,'e','r','v','n','u',0x00,
};
static signed char JULY_ORDER_CS_CZ[] = {
0xC4,0x8D,'e','r','v','e','n','c','i',0x00,
};
static signed char SEPTEMBER_ORDER_CS_CZ[] = {
'z',0xC3,0xA1,0xC5,0x99,0xC3,0xAD,0x00,
};
static signed char OCTOBER_ORDER_CS_CZ[] = {
0xC5,0x99,0xC3,0xAD,'j','n','u',0x00,
};
static signed char *(CALENDAR_MONTH_ORDER_IN_CS_CZ[]) = {
"",
"lednu",
FEBRUARY_ORDER_CS_CZ,
MARCH_ORDER_CS_CZ,
"dubnu",
MAY_ORDER_CS_CZ,
JUNE_ORDER_CS_CZ,
JULY_ORDER_CS_CZ,
"srpnu",
SEPTEMBER_ORDER_CS_CZ,
OCTOBER_ORDER_CS_CZ,
"listopadu",
"prosinci",
0x00,
};
