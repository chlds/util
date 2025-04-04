/* Notes

Lithuanian
C4.84/C4.85 : Latin Capital/Small Letter A with Ogonek
C4.8C/C4.8D : Latin Capital/Small Letter C with Caron
C4.96/C4.97 : Latin Capital/Small Letter E with Dot above
C4.98/C4.99 : Latin Capital/Small Letter E with Ogonek
C4.AE/C4.AF : Latin Capital/Small Letter I with Ogonek
C5.A0/C5.A1 : Latin Capital/Small Letter S with Caron
C5.AA/C5.AB : Latin Capital/Small Letter U with Macron
C5.B2/C5.B3 : Latin Capital/Small Letter U with Ogonek
C5.BD/C5.BE : Latin Capital/Small Letter Z with Caron

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_LT_LT[] = ("Lithuanian");
static signed char CALENDAR_LLSC_IN_LT_LT[] = {
0xCA,0x9F,0xC9,0xAA,0xE1,0xB4,0x9B,0xCA,0x9C,0xE1,0xB4,0x9C,0xE1,0xB4,0x80,0xC9,0xB4,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};
static signed char CALENDAR_NATIVE_IN_LT_LT[] = {
'l','i','e','t','u','v','i',0xC5,0xB3,' ','k','a','l','b','a',0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_LT_LT = (CALENDAR_NATIVE_IN_LT_LT);

static signed char THIRD_LT_LT[] = {
't','r','e',0xC4,0x8D,'i','a','s','i','s',0x00,
};
static signed char *(CALENDAR_ORDER_IN_LT_LT[]) = {
"",
"pirmasis",
"antrasis",
THIRD_LT_LT,
"ketvirtasis",
"penktasis",
"ir paskutinis",
0x00,
};

static signed char WEDNESDAY_LT_LT[] = {
't','r','e',0xC4,0x8D,'i','a','d','i','e','n','i','s',0x00,
};
static signed char SATURDAY_LT_LT[] = {
0xC5,0xA1,'e',0xC5,0xA1,'t','a','d','i','e','n','i','s',0x00,
};
static signed char *(CALENDAR_WEEK_IN_LT_LT[]) = {
"sekmadienis",
"pirmadienis",
"antradienis",
WEDNESDAY_LT_LT,
"ketvirtadienis",
"penktadienis",
SATURDAY_LT_LT,
0x00,
};

static signed char SAT_LT_LT[] = {
0xC5,0xA1,'t',0x00,
};
static signed char *(CALENDAR_WK_IN_LT_LT[]) = {
"sk",
"pr",
"an",
"tr",
"kt",
"pn",
SAT_LT_LT,
0x00,
};

// in genitive
static signed char APRIL_LT_LT[] = {
'b','a','l','a','n','d',0xC5,0xBE,'i','o',0x00,
};
static signed char MAY_LT_LT[] = {
'g','e','g','u',0xC5,0xBE,0xC4,0x97,'s',0x00,
};
static signed char JUNE_LT_LT[] = {
'b','i','r',0xC5,0xBE,'e','l','i','o',0x00,
};
static signed char AUGUST_LT_LT[] = {
'r','u','g','p','j',0xC5,0xAB,0xC4,0x8D,'i','o',0x00,
};
static signed char SEPTEMBER_LT_LT[] = {
'r','u','g','s',0xC4,0x97,'j','o',0x00,
};
static signed char NOVEMBER_LT_LT[] = {
'l','a','p','k','r','i',0xC4,0x8D,'i','o',0x00,
};
static signed char DECEMBER_LT_LT[] = {
'g','r','u','o','d',0xC5,0xBE,'i','o',0x00,
};
static signed char *(CALENDAR_MONTH_IN_LT_LT[]) = {
"",
"sausio",
"vasario",
"kovo",
APRIL_LT_LT,
MAY_LT_LT,
JUNE_LT_LT,
"liepos",
AUGUST_LT_LT,
SEPTEMBER_LT_LT,
"spalio",
NOVEMBER_LT_LT,
DECEMBER_LT_LT,
0x00,
};

static signed char APRIL_NOM_LT_LT[] = {
'b','a','l','a','n','d','i','s',0x00,
};
static signed char MAY_NOM_LT_LT[] = {
'g','e','g','u',0xC5,0xBE,0xC4,0x97,0x00,
};
static signed char JUNE_NOM_LT_LT[] = {
'b','i','r',0xC5,0xBE,'e','l','i','s',0x00,
};
static signed char AUGUST_NOM_LT_LT[] = {
'r','u','g','p','j',0xC5,0xAB,'t','i','s',0x00,
};
static signed char SEPTEMBER_NOM_LT_LT[] = {
'r','u','g','s',0xC4,0x97,'j','i','s',0x00,
};
static signed char NOVEMBER_NOM_LT_LT[] = {
'l','a','p','k','r','i','t','i','s',0x00,
};
static signed char DECEMBER_NOM_LT_LT[] = {
'g','r','u','o','d','i','s',0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_LT_LT[]) = {
"",
"sausis",
"vasaris",
"kovas",
APRIL_NOM_LT_LT,
MAY_NOM_LT_LT,
JUNE_NOM_LT_LT,
"liepa",
AUGUST_NOM_LT_LT,
SEPTEMBER_NOM_LT_LT,
"spalis",
NOVEMBER_NOM_LT_LT,
DECEMBER_NOM_LT_LT,
0x00,
};
