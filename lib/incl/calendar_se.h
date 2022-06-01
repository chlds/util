/* Notes

Based on UTF-8
//*/


static signed char sun_se[] = {
's',0xC3,0xB6,'n',0x00,
};
static signed char mon_se[] = {
'm',0xC3,0xA5,'n',0x00,
};
static signed char sat_se[] = {
'l',0xC3,0xB6,'r',0x00,
};
static signed char *(CALENDAR_WK_IN_SE[]) = {
sun_se,mon_se,"tis.","ons.","tors.","fre.",sat_se,0x00,
};

static signed char sunday_se[] = {
's',0xC3,0xB6,'n','d','a','g',0x00,
};
static signed char monday_se[] = {
'm',0xC3,0xA5,'n','d','a','g',0x00,
};
static signed char saturday_se[] = {
'l',0xC3,0xB6,'r','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_IN_SE[]) = {
sunday_se,monday_se,"tisdag","onsdag","torsdag","fredag",saturday_se,0x00,
};

static signed char *(CALENDAR_MONTH_IN_SE[]) = {
"","januari","februari","mars","april","maj","juni","juli","augusti","september","oktober","november","december",0x00,
};
