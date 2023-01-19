/* Notes

Finnish

Remarks:
Based on UTF-8
*/


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

static signed char JUNE_FI_FI[] = {
'k','e','s',0xC3,0xA4,'k','u','u','t','a',0x00,
};
static signed char JULY_FI_FI[] = {
'h','e','i','n',0xC3,0xA4,'k','u','u','t','a',0x00,
};
static signed char *(CALENDAR_MONTH_IN_FI_FI[]) = {
"",
"tammikuuta",
"helmikuuta",
"maaliskuuta",
"huhtikuuta",
"toukokuuta",
JUNE_FI_FI,
JULY_FI_FI,
"elokuuta",
"syyskuuta",
"lokakuuta",
"marraskuuta",
"joulukuuta",
0x00,
};
