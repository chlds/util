/* Notes

Portuguese

Remarks:
Based on UTF-8
*/


static signed char SAT_PT_PT[] = {
's',0xC3,0xA1,'b','.',0x00,
};
static signed char *(CALENDAR_WK_IN_PT_PT[]) = {
"dom.",
"2a.",
"3a.",
"4a.",
"5a.",
"6a.",
SAT_PT_PT,
0x00,
};

static signed char TUESDAY_PT_PT[] = {
't','e','r',0xC3,0xA7,'a','-','f','e','i','r','a',0x00,
};
static signed char SATURDAY_PT_PT[] = {
's',0xC3,0xA1,'b','a','d','o',0x00,
};
static signed char *(CALENDAR_WEEK_IN_PT_PT[]) = {
"domingo",
"segunda-feira",
TUESDAY_PT_PT,
"quarta-feira",
"quinta-feira",
"sexta-feira",
SATURDAY_PT_PT,
0x00,
};

static signed char MARCH_PT_PT[] = {
'm','a','r',0xC3,0xA7,'o',0x00,
};
static signed char *(CALENDAR_MONTH_IN_PT_PT[]) = {
"",
"janeiro",
"fevereiro",
MARCH_PT_PT,
"abril",
"maio",
"junho",
"julho",
"agosto",
"setembro",
"outubro",
"novembro",
"dezembro",
0x00,
};
