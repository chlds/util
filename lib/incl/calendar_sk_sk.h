/* Notes

Slovak
C5.A0/C5.A1 : Latin Capital/Small Letter S with Caron

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_SK_SK[] = ("Slovak");
static signed char CALENDAR_LLSC_IN_SK_SK[] = {
'S',0xCA,0x9F,0xE1,0xB4,0x8F,0xE1,0xB4,0xA0,0xE1,0xB4,0x80,0xE1,0xB4,0x8B,0x00,
};

static signed char CALENDAR_NATIVE_IN_SK_SK[] = {
's','l','o','v','e','n','s','k',0xC3,0xBD,' ','j','a','z','y','k',\
' ','/',' ',\
's','l','o','v','e','n',0xC4,0x8D,'i','n','a',\
0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_SK_SK = (CALENDAR_NATIVE_IN_SK_SK);

static signed char FIRST_FEM_SK_SK[] = {
'p','r','v',0xC3,0xA1,0x00,
};
static signed char SECOND_FEM_SK_SK[] = {
'd','r','u','h',0xC3,0xA1,0x00,
};
static signed char THIRD_FEM_SK_SK[] = {
't','r','e','t','i','a',0x00,
};
static signed char FOURTH_FEM_SK_SK[] = {
0xC5,0xA1,'t','v','r','t',0xC3,0xA1,0x00,
};
static signed char FIFTH_FEM_SK_SK[] = {
'p','i','a','t','a',0x00,
};
static signed char AND_LAST_FEM_SK_SK[] = {
'a',' ','p','o','s','l','e','d','n',0xC3,0xA1,0x00,
};
static signed char *(CALENDAR_ORDER_FEMININE_IN_SK_SK[]) = {
"",
FIRST_FEM_SK_SK,
SECOND_FEM_SK_SK,
THIRD_FEM_SK_SK,
FOURTH_FEM_SK_SK,
FIFTH_FEM_SK_SK,
AND_LAST_FEM_SK_SK,
"v",
0x00,
};

static signed char FIRST_MASC_LIFE_SK_SK[] = {
'p','r','v',0xC3,0xBD,0x00,
};
static signed char SECOND_MASC_LIFE_SK_SK[] = {
'd','r','u','h',0xC3,0xBD,0x00,
};
static signed char THIRD_MASC_LIFE_SK_SK[] = {
't','r','e','t',0xC3,0xAD,0x00,
};
static signed char FOURTH_MASC_LIFE_SK_SK[] = {
0xC5,0xA1,'t','v','r','t',0xC3,0xBD,0x00,
};
static signed char FIFTH_MASC_LIFE_SK_SK[] = {
'p','i','a','t','y',0x00,
};
static signed char AND_LAST_MASC_LIFE_SK_SK[] = {
'a',' ','p','o','s','l','e','d','n',0xC3,0xBD,0x00,
};
static signed char *(CALENDAR_ORDER_MASCULINE_LIFE_IN_SK_SK[]) = {
"",
FIRST_MASC_LIFE_SK_SK,
SECOND_MASC_LIFE_SK_SK,
THIRD_MASC_LIFE_SK_SK,
FOURTH_MASC_LIFE_SK_SK,
FIFTH_MASC_LIFE_SK_SK,
AND_LAST_MASC_LIFE_SK_SK,
"v",
0x00,
};

static signed char FIRST_MASC_NONLIFE_SK_SK[] = {
'p','r','v',0xC3,0xBD,0x00,
};
static signed char SECOND_MASC_NONLIFE_SK_SK[] = {
'd','r','u','h',0xC3,0xBD,0x00,
};
static signed char THIRD_MASC_NONLIFE_SK_SK[] = {
't','r','e','t',0xC3,0xAD,0x00,
};
static signed char FOURTH_MASC_NONLIFE_SK_SK[] = {
0xC5,0xA1,'t','v','r','t',0xC3,0xBD,0x00,
};
static signed char FIFTH_MASC_NONLIFE_SK_SK[] = {
'p','i','a','t','y',0x00,
};
static signed char AND_LAST_MASC_NONLIFE_SK_SK[] = {
'a',' ','p','o','s','l','e','d','n',0xC3,0xBD,0x00,
};
static signed char *(CALENDAR_ORDER_MASCULINE_NONLIFE_IN_SK_SK[]) = {
"",
FIRST_MASC_NONLIFE_SK_SK,
SECOND_MASC_NONLIFE_SK_SK,
THIRD_MASC_NONLIFE_SK_SK,
FOURTH_MASC_NONLIFE_SK_SK,
FIFTH_MASC_NONLIFE_SK_SK,
AND_LAST_MASC_NONLIFE_SK_SK,
"v",
0x00,
};

static signed char FIRST_NEUT_SK_SK[] = {
'p','r','v',0xC3,0xA9,0x00,
};
static signed char SECOND_NEUT_SK_SK[] = {
'd','r','u','h',0xC3,0xA9,0x00,
};
static signed char THIRD_NEUT_SK_SK[] = {
't','r','e','t','i','e',0x00,
};
static signed char FOURTH_NEUT_SK_SK[] = {
0xC5,0xA1,'t','v','r','t',0xC3,0xA9,0x00,
};
static signed char FIFTH_NEUT_SK_SK[] = {
'p','i','a','t','e',0x00,
};
static signed char AND_LAST_NEUT_SK_SK[] = {
'a',' ','p','o','s','l','e','d','n',0xC3,0xA9,0x00,
};
static signed char *(CALENDAR_ORDER_NEUTER_IN_SK_SK[]) = {
"",
FIRST_NEUT_SK_SK,
SECOND_NEUT_SK_SK,
THIRD_NEUT_SK_SK,
FOURTH_NEUT_SK_SK,
FIFTH_NEUT_SK_SK,
AND_LAST_NEUT_SK_SK,
"v",
0x00,
};

static signed char THURSDAY_SK_SK[] = {
0xC5,0xA1,'t','v','r','t','o','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_SK_SK[]) = {
"nedel'a",
"pondelok",
"utorok",
"streda",
THURSDAY_SK_SK,
"piatok",
"sobota",
0x00,
};

static signed char THU_SK_SK[] = {
0xC5,0xA1,'t',0x00,
};
static signed char *(CALENDAR_WK_IN_SK_SK[]) = {
"ne",
"po",
"ut",
"st",
THU_SK_SK,
"pi",
"so",
0x00,
};

static signed char JANUARY_SK_SK[] = {
'j','a','n','u',0xC3,0xA1,'r','a',0x00,
};
static signed char FEBRUARY_SK_SK[] = {
'f','e','b','r','u',0xC3,0xA1,'r','a',0x00,
};
static signed char APRIL_SK_SK[] = {
'a','p','r',0xC3,0xAD,'l','a',0x00,
};
static signed char MAY_SK_SK[] = {
'm',0xC3,0xA1,'j','a',0x00,
};
static signed char JUNE_SK_SK[] = {
'j',0xC3,0xBA,'n','a',0x00,
};
static signed char JULY_SK_SK[] = {
'j',0xC3,0xBA,'l','a',0x00,
};
static signed char OCTOBER_SK_SK[] = {
'o','k','t',0xC3,0xB3,'b','r','a',0x00,
};
static signed char *(CALENDAR_MONTH_IN_SK_SK[]) = {
"",
JANUARY_SK_SK,
FEBRUARY_SK_SK,
"marca",
APRIL_SK_SK,
MAY_SK_SK,
JUNE_SK_SK,
JULY_SK_SK,
"augusta",
"septembra",
OCTOBER_SK_SK,
"novembra",
"decembra",
0x00,
};

static signed char JANUARY_NOM_SK_SK[] = {
'j','a','n','u',0xC3,0xA1,'r',0x00,
};
static signed char FEBRUARY_NOM_SK_SK[] = {
'f','e','b','r','u',0xC3,0xA1,'r',0x00,
};
static signed char APRIL_NOM_SK_SK[] = {
'a','p','r',0xC3,0xAD,'l',0x00,
};
static signed char MAY_NOM_SK_SK[] = {
'm',0xC3,0xA1,'j',0x00,
};
static signed char JUNE_NOM_SK_SK[] = {
'j',0xC3,0xBA,'n',0x00,
};
static signed char JULY_NOM_SK_SK[] = {
'j',0xC3,0xBA,'l',0x00,
};
static signed char OCTOBER_NOM_SK_SK[] = {
'o','k','t',0xC3,0xB3,'b','e','r',0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_SK_SK[]) = {
"",
JANUARY_NOM_SK_SK,
FEBRUARY_NOM_SK_SK,
"marec",
APRIL_NOM_SK_SK,
MAY_NOM_SK_SK,
JUNE_NOM_SK_SK,
JULY_NOM_SK_SK,
"august",
"september",
OCTOBER_NOM_SK_SK,
"november",
"december",
0x00,
};
