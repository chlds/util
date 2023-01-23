/* Notes

Romanian

Remarks:
Based on UTF-8
*/


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
