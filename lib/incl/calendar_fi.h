/* Notes

Based on UTF-8
//*/


static signed char *(CALENDAR_WK_IN_FI[]) = {
"su.","ma.","ti.","ke.","to.","pe.","la.",0x00,
};

static signed char *(CALENDAR_WEEK_IN_FI[]) = {
"sunnuntai","maanantai","tiistai","keskiviikko","torstai","perjantai","lauantai",0x00,
};

static signed char kesakuuta[] = {
'k','e','s',0xC3,0xA4,'k','u','u','t','a',0x00,
};
static signed char heinakuuta[] = {
'h','e','i','n',0xC3,0xA4,'k','u','u','t','a',0x00,
};
static signed char *(CALENDAR_MONTH_IN_FI[]) = {
"",
"tammikuuta",
"helmikuuta",
"maaliskuuta",
"huhtikuuta",
"toukokuuta",
kesakuuta,
heinakuuta,
"elokuuta",
"syyskuuta",
"lokakuuta",
"marraskuuta",
"joulukuuta",
0x00,
};
