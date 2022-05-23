/* Notes

Based on UTF-8
//*/


static signed char *(CALENDAR_WEEK_IN_FI[]) = {
"sunnuntai","maanantai","tiistai","keskiviikko","torstai","perjantai","lauantai",0x00,
};

static signed char kesakuu[] = {
'k','e','s',0xC3,0xA4,'k','u','u',0x00,
};
static signed char heinakuu[] = {
'h','e','i','n',0xC3,0xA4,'k','u','u',0x00,
};
static signed char *(CALENDAR_MONTH_IN_FI[]) = {
"","tammikuu","helmikuu","maaliskuu","huhtikuu","toukokuu",kesakuu,heinakuu,"elokuu","syyskuu","lokakuu","marraskuu","joulukuu",0x00,
};
