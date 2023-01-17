/* Notes

Norwegian

Remarks:
Based on UTF-8
*/


static signed char SUN_NB_NO[] = {
's',0xC3,0xB8,'n','.',0x00,
};
static signed char SAT_NB_NO[] = {
'l',0xC3,0xB8,'r','.',0x00,
};
static signed char *(CALENDAR_WK_IN_NB_NO[]) = {
SUN_NB_NO,
"man.",
"tir.",
"ons.",
"tor.",
"fre.",
SAT_NB_NO,
0x00,
};

static signed char SUNDAY_NB_NO[] = {
's',0xC3,0xB8,'n','d','a','g',0x00,
};
static signed char SATURDAY_NB_NO[] = {
'l',0xC3,0xB8,'r','d','a','g',0x00,
};
static signed char *(CALENDAR_WEEK_IN_NB_NO[]) = {
SUNDAY_NB_NO,
"mandag",
"tirsdag",
"onsdag",
"torsdag",
"fredag",
SATURDAY_NB_NO,
0x00,
};

static signed char *(CALENDAR_MONTH_IN_NB_NO[]) = {
"",
"januar",
"februar",
"mars",
"april",
"mai",
"juni",
"juli",
"august",
"september",
"oktober",
"november",
"desember",
0x00,
};
