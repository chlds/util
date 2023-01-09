/* Notes

Catalan

Remarks:
Based on UTF-8
*/


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
