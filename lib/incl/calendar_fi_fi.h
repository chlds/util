/* Notes

Finnish

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_FI_FI[] = ("Finnish");
static signed char CALENDAR_LLSC_IN_FI_FI[] = {
0xEA,0x9C,0xB0,0xC9,0xAA,0xC9,0xB4,0xC9,0xB4,0xC9,0xAA,0xEA,0x9C,0xB1,0xCA,0x9C,0x00,
};
static signed char CALENDAR_NATIVE_IN_FI_FI[] = ("suomi");
static signed char *CALENDAR_LLSC_NATIVE_IN_FI_FI = (CALENDAR_NATIVE_IN_FI_FI);

static signed char FIRST_FI_FI[] = {
'e','n','s','i','m','m',0xC3,0xA4,'i','n','e','n',0x00,
};
static signed char FOURTH_FI_FI[] = {
'n','e','l','j',0xC3,0xA4,'s',0x00,
};
static signed char *(CALENDAR_ORDER_IN_FI_FI[]) = {
"",
FIRST_FI_FI,
"toinen",
"kolmas",
FOURTH_FI_FI,
"viides",
"ja viimeinen",
0x00,
};

static signed char *(CALENDAR_WK_IN_FI_FI[]) = {
"su",
"ma",
"ti",
"ke",
"to",
"pe",
"la",
0x00,
};

static signed char *(CALENDAR_WEEK_IN_FI_FI[]) = {
"sunnuntai",
"maanantai",
"tiistai",
"keskiviikko",
"torstai",
"perjantai",
"lauantai",
0x00,
};

static signed char JUNE_PAR_FI_FI[] = {
'k','e','s',0xC3,0xA4,'k','u','u','t','a',0x00,
};
static signed char JULY_PAR_FI_FI[] = {
'h','e','i','n',0xC3,0xA4,'k','u','u','t','a',0x00,
};
static signed char *(CALENDAR_MONTH_PARTITIVE_IN_FI_FI[]) = {
"",
"tammikuuta",
"helmikuuta",
"maaliskuuta",
"huhtikuuta",
"toukokuuta",
JUNE_PAR_FI_FI,
JULY_PAR_FI_FI,
"elokuuta",
"syyskuuta",
"lokakuuta",
"marraskuuta",
"joulukuuta",
0x00,
};

static signed char JUNE_GEN_FI_FI[] = {
'k','e','s',0xC3,0xA4,'k','u','u','n',0x00,
};
static signed char JULY_GEN_FI_FI[] = {
'h','e','i','n',0xC3,0xA4,'k','u','u','n',0x00,
};
static signed char *(CALENDAR_MONTH_GENITIVE_IN_FI_FI[]) = {
"",
"tammikuun",
"helmikuun",
"maaliskuun",
"huhtikuun",
"toukokuun",
JUNE_GEN_FI_FI,
JULY_GEN_FI_FI,
"elokuun",
"syyskuun",
"lokakuun",
"marraskuun",
"joulukuun",
0x00,
};

static signed char JUNE_NOM_FI_FI[] = {
'k','e','s',0xC3,0xA4,'k','u','u',0x00,
};
static signed char JULY_NOM_FI_FI[] = {
'h','e','i','n',0xC3,0xA4,'k','u','u',0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_FI_FI[]) = {
"",
"tammikuu",
"helmikuu",
"maaliskuu",
"huhtikuu",
"toukokuu",
JUNE_NOM_FI_FI,
JULY_NOM_FI_FI,
"elokuu",
"syyskuu",
"lokakuu",
"marraskuu",
"joulukuu",
0x00,
};

static signed char JUN_PAR_FI_FI[] = {
'k','e','s',0xC3,0xA4,'k','.',0x00,
};
static signed char JUL_PAR_FI_FI[] = {
'h','e','i','n',0xC3,0xA4,'k','.',0x00,
};
static signed char *(CALENDAR_MON_PARTITIVE_IN_FI_FI[]) = {
"",
"tammik.",
"helmik.",
"maalisk.",
"huhtik.",
"toukok.",
JUN_PAR_FI_FI,
JUL_PAR_FI_FI,
"elok.",
"syysk.",
"lokak.",
"marrask.",
"jouluk.",
0x00,
};
