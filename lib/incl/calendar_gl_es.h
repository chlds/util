/* Notes

Galician

Remarks:
Based on UTF-8
*/


static signed char WED_GL_ES[] = {
'M',0xC3,0xA9,'r',0x00,
};
static signed char SAT_GL_ES[] = {
'S',0xC3,0xA1,'b',0x00,
};
static signed char *(CALENDAR_WK_IN_GL_ES[]) = {
"Dom.",\
"Lun.",\
"Mar.",\
WED_GL_ES,\
"Xov.",\
"Ven.",\
SAT_GL_ES,\
0x00,
};

static signed char WEDNESDAY_GL_ES[] = {
'M',0xC3,0xA9,'r','c','o','r','e','s',0x00,
};
static signed char SATURDAY_GL_ES[] = {
'S',0xC3,0xA1,'b','a','d','o',0x00,
};
static signed char *(CALENDAR_WEEK_IN_GL_ES[]) = {
"Domingo",\
"Luns",\
"Martes",\
WEDNESDAY_GL_ES,\
"Xoves",\
"Venres",\
SATURDAY_GL_ES,\
0x00,
};

static signed char JUNE_GL_ES[] = {
'X','u',0xC3,0xB1,'o',0x00,
};
static signed char *(CALENDAR_MONTH_IN_GL_ES[]) = {
"",\
"Xaneiro",\
"Febreiro",\
"Marzo",
"Abril",\
"Maio",\
JUNE_GL_ES,
"Xullo",\
"Agosto",\
"Setembro",\
"Outubro",\
"Novembro",\
"Decembro",\
0x00,
};
