/* Notes

Norwegian

Remarks:
Based on UTF-8
*/


static signed char sun_no[] = {
's',0xC3,0xB8,'n',0x00,
};
static signed char sat_no[] = {
'l',0xC3,0xB8,'r',0x00,
};
static signed char *(CALENDAR_WK_IN_NO[]) = {
sun_no,"man.","tirs.","ons.","tors.","fre.",sat_no,0x00,
};

static signed char sunday_no[] = {
's',0xC3,0xB8,'n','d','a','g',0x00,
};
static signed char saturday_no[] = {
'l',0xC3,0xB8,'r','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_IN_NO[]) = {
sunday_no,"mandag","tirsdag","onsdag","torsdag","fredag",saturday_no,0x00,
};

static signed char *(CALENDAR_MONTH_IN_NO[]) = {
"","januar","februar","mars","april","mai","juni","juli","august","september","oktober","november","desember",0x00,
};
