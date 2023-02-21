/* Notes

Swedish

Remarks:
Based on UTF-8
*/


static signed char SUN_SV_SE[] = {
's',0xC3,0xB6,'n',0x00,
};
static signed char MON_SV_SE[] = {
'm',0xC3,0xA5,'n',0x00,
};
static signed char SAT_SV_SE[] = {
'l',0xC3,0xB6,'r',0x00,
};
static signed char *(CALENDAR_WK_IN_SV_SE[]) = {
SUN_SV_SE,
MON_SV_SE,
"tis",
"ons",
"tors",
"fre",
SAT_SV_SE,
0x00,
};

static signed char SUNDAY_SV_SE[] = {
's',0xC3,0xB6,'n','d','a','g',0x00,
};
static signed char MONDAY_SV_SE[] = {
'm',0xC3,0xA5,'n','d','a','g',0x00,
};
static signed char SATURDAY_SV_SE[] = {
'l',0xC3,0xB6,'r','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_IN_SV_SE[]) = {
SUNDAY_SV_SE,
MONDAY_SV_SE,
"tisdag",
"onsdag",
"torsdag",
"fredag",
SATURDAY_SV_SE,
0x00,
};

static signed char *(CALENDAR_MONTH_IN_SV_SE[]) = {
"",
"januari",
"februari",
"mars",
"april",
"maj",
"juni",
"juli",
"augusti",
"september",
"oktober",
"november",
"december",
0x00,
};