/* Notes

Based on UTF-8
//*/


static signed char sun_dk[] = {
's',0xC3,0xB8,'n','.',0x00,
};
static signed char sat_dk[] = {
'l',0xC3,0xB8,'r','.',0x00,
};
static signed char *(CALENDAR_WK_IN_DK[]) = {
sun_dk,"man.","tirs.","ons.","tors.","fre.",sat_dk,0x00,
};

static signed char sunday_dk[] = {
's',0xC3,0xB8,'n','d','a','g',0x00,
};
static signed char saturday_dk[] = {
'l',0xC3,0xB8,'r','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_IN_DK[]) = {
sunday_dk,"mandag","tirsdag","onsdag","torsdag","fredag",saturday_dk,0x00,
};

static signed char *(CALENDAR_MONTH_IN_DK[]) = {
"","januar","februar","marts","april","maj","juni","juli","august","september","oktober","november","december",0x00,
};
