/* Notes

Romanian

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_RO_RO[] = ("Romanian");
static signed char CALENDAR_LLSC_IN_RO_RO[] = {
'R',0xE1,0xB4,0x8F,0xE1,0xB4,0x8D,0xE1,0xB4,0x80,0xC9,0xB4,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char CALENDAR_NATIVE_IN_RO_RO[] = {
'l','i','m','b','a',' ','r','o','m',0xC3,0xA2,'n',0xC4,0x83,\
' ','/',' ',\
'r','o','m',0xC3,0xA2,'n','e',0xC8,0x99,'t','e',\
0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_RO_RO = (CALENDAR_NATIVE_IN_RO_RO);

static signed char SAT_RO_RO[] = {
's',0xC3,0xA2,'m','.',0x00,
};
static signed char *(CALENDAR_WK_IN_RO_RO[]) = {
"dum.",
"lun.",
"mar.",
"mie.",
"joi",
"vin.",
SAT_RO_RO,
0x00,
};

static signed char SUNDAY_RO_RO[] = {
'd','u','m','i','n','i','c',0xC4,0x83,0x00,
};
static signed char TUESDAY_RO_RO[] = {
'm','a','r',0xC8,0x9B,'i',0x00,
};
static signed char SATURDAY_RO_RO[] = {
's',0xC3,0xA2,'m','b',0xC4,0x83,'t',0xC4,0x83,0x00,
};
static signed char *(CALENDAR_WEEK_IN_RO_RO[]) = {
SUNDAY_RO_RO,
"luni",
TUESDAY_RO_RO,
"miercuri",
"joi",
"vineri",
SATURDAY_RO_RO,
0x00,
};

static signed char *(CALENDAR_MONTH_IN_RO_RO[]) = {
"",
"ianuarie",
"februarie",
"martie",
"aprilie",
"mai",
"iunie",
"iulie",
"august",
"septembrie",
"octombrie",
"noiembrie",
"decembrie",
0x00,
};
