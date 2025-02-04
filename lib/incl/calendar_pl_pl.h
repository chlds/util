/* Notes

Polish

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_PL_PL[] = ("Polish");
static signed char CALENDAR_LLSC_IN_PL_PL[] = {
0xE1,0xB4,0x98,0xE1,0xB4,0x8F,0xCA,0x9F,0xC9,0xAA,0xEA,0x9C,0xB1,0xCA,0x9C,0x00,
};
static signed char CALENDAR_NATIVE_IN_PL_PL[] = ("polski");
static signed char *CALENDAR_LLSC_NATIVE_IN_PL_PL = (CALENDAR_NATIVE_IN_PL_PL);

static signed char FIFTH_FEM_PL_PL[] = {
'p','i',0xC4,0x85,'t','a',0x00,
};
static signed char *(CALENDAR_ORDER_FEMININE_IN_PL_PL[]) = {
"",
"pierwsza",
"druga",
"trzecia",
"czwarta",
FIFTH_FEM_PL_PL,
"i ostatnia",
0x00,
};

static signed char FIFTH_MASC_PL_PL[] = {
'p','i',0xC4,0x85,'t','y',0x00,
};
static signed char *(CALENDAR_ORDER_MASCULINE_IN_PL_PL[]) = {
"",
"pierwszy",
"drugi",
"trzeci",
"czwarty",
FIFTH_MASC_PL_PL,
"i ostatni",
0x00,
};

static signed char WED_PL_PL[] = {
0xC5,0x9B,'r','.',0x00,
};
static signed char *(CALENDAR_WK_IN_PL_PL[]) = {
"niedz.",
"pon.",
"wt.",
WED_PL_PL,
"czw.",
"pt.",
"sob.",
0x00,
};

static signed char MONDAY_PL_PL[] = {
'p','o','n','i','e','d','z','i','a',0xC5,0x82,'e','k',0x00,
};
static signed char WEDNESDAY_PL_PL[] = {
0xC5,0x9B,'r','o','d','a',0x00,
};
static signed char FRIDAY_PL_PL[] = {
'p','i',0xC4,0x85,'t','e','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_PL_PL[]) = {
"niedziela",
MONDAY_PL_PL,
"wtorek",
WEDNESDAY_PL_PL,
"czwartek",
FRIDAY_PL_PL,
"sobota",
0x00,
};

static signed char JANUARY_NOM_PL_PL[] = {
's','t','y','c','z','e',0xC5,0x84,0x00,
};
static signed char APRIL_NOM_PL_PL[] = {
'k','w','i','e','c','i','e',0xC5,0x84,0x00,
};
static signed char AUGUST_NOM_PL_PL[] = {
's','i','e','r','p','i','e',0xC5,0x84,0x00,
};
static signed char SEPTEMBER_NOM_PL_PL[] = {
'w','r','z','e','s','i','e',0xC5,0x84,0x00,
};
static signed char OCTOBER_NOM_PL_PL[] = {
'p','a',0xC5,0xBA,'d','z','i','e','r','n','i','k',0x00,
};
static signed char DECEMBER_NOM_PL_PL[] = {
'g','r','u','d','z','i','e',0xC5,0x84,0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_PL_PL[]) = {
"",
JANUARY_NOM_PL_PL,
"luty",
"marzec",
APRIL_NOM_PL_PL,
"maj",
"czerwiec",
"lipiec",
AUGUST_NOM_PL_PL,
SEPTEMBER_NOM_PL_PL,
OCTOBER_NOM_PL_PL,
"listopad",
DECEMBER_NOM_PL_PL,
0x00,
};

// genitives
static signed char SEPTEMBER_PL_PL[] = {
'w','r','z','e',0xC5,0x9B,'n','i','a',0x00,
};
static signed char OCTOBER_PL_PL[] = {
'p','a',0xC5,0xBA,'d','z','i','e','r','n','i','k','a',0x00,
};
static signed char *(CALENDAR_MONTH_IN_PL_PL[]) = {
"",
"stycznia",
"lutego",
"marca",
"kwietnia",
"maja",
"czerwca",
"lipca",
"sierpnia",
SEPTEMBER_PL_PL,
OCTOBER_PL_PL,
"listopada",
"grudnia",
0x00,
};

static signed char OCT_PL_PL[] = {
'p','a',0xC5,0xBA,0x00,
};
static signed char *(CALENDAR_MON_IN_PL_PL[]) = {
"",
"sty",
"lut",
"mar",
"kwi",
"maj",
"cze",
"lip",
"sie",
"wrz",
OCT_PL_PL,
"lis",
"gru",
0x00,
};
