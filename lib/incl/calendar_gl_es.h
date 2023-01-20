/* Notes

Galician

Remarks:
Based on UTF-8
*/


static signed char WED_GL_ES[] = {
'm',0xC3,0xA9,'r',0x00,
};
static signed char SAT_GL_ES[] = {
's',0xC3,0xA1,'b',0x00,
};
static signed char *(CALENDAR_WK_IN_GL_ES[]) = {
"dom.",\
"luns",\
"mar.",\
WED_GL_ES,\
"xov.",\
"ven.",\
SAT_GL_ES,\
0x00,
};

static signed char WEDNESDAY_GL_ES[] = {
'm',0xC3,0xA9,'r','c','o','r','e','s',0x00,
};
static signed char SATURDAY_GL_ES[] = {
's',0xC3,0xA1,'b','a','d','o',0x00,
};
static signed char *(CALENDAR_WEEK_IN_GL_ES[]) = {
"domingo",\
"luns",\
"martes",\
WEDNESDAY_GL_ES,\
"xoves",\
"venres",\
SATURDAY_GL_ES,\
0x00,
};

static signed char JUNE_GL_ES[] = {
'x','u',0xC3,0xB1,'o',0x00,
};
static signed char *(CALENDAR_MONTH_IN_GL_ES[]) = {
"",\
"xaneiro",\
"febreiro",\
"marzo",
"abril",\
"maio",\
JUNE_GL_ES,
"xullo",\
"agosto",\
"setembro",\
"outubro",\
"novembro",\
"decembro",\
0x00,
};
