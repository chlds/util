/* Notes

Catalan

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_CA_ES[] = ("Catalan");
static signed char CALENDAR_LLSC_IN_CA_ES[] = {
'C',0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0xE1,0xB4,0x80,0xCA,0x9F,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char *(CALENDAR_WK_IN_CA_ES[]) = {
"dg.",
"dl.",
"dt.",
"dc.",
"dj.",
"dv.",
"ds.",
0x00,
};

static signed char *(CALENDAR_WEEK_IN_CA_ES[]) = {
"diumenge",
"dilluns",
"dimarts",
"dimecres",
"dijous",
"divendres",
"dissabte",
0x00,
};

static signed char MARCH_CA_ES[] = {
'd','e',' ','m','a','r',0xC3,0xA7,0x00,
};
static signed char *(CALENDAR_MONTH_IN_CA_ES[]) = {
"",
"de gener",
"de febrer",
MARCH_CA_ES,
"d'abril",
"de maig",
"de juny",
"de juliol",
"d'agost",
"de setembre",
"d'octubre",
"de novembre",
"de desembre",
0x00,
};

static signed char MARCH_NOM_CA_ES[] = {
'm','a','r',0xC3,0xA7,0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_CA_ES[]) = {
"",
"gener",
"febrer",
MARCH_NOM_CA_ES,
"abril",
"maig",
"juny",
"juliol",
"agost",
"setembre",
"octubre",
"novembre",
"desembre",
0x00,
};
