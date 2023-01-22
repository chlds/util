/* Notes

Albanian

Remarks:
Based on UTF-8
*/


static signed char MON_SQ_AL[] = {
'H',0xC3,0xAB,'n',0x00,
};
static signed char WED_SQ_AL[] = {
'M',0xC3,0xAB,'r',0x00,
};
static signed char *(CALENDAR_WK_IN_SQ_AL[]) = {
"Die",
MON_SQ_AL,
"Mar",
WED_SQ_AL,
"Enj",
"Pre",
"Sht",
0x00,
};

static signed char MONDAY_SQ_AL[] = {
'e',' ','h',0xC3,0xAB,'n',0xC3,0xAB,0x00,
};
static signed char TUESDAY_SQ_AL[] = {
'e',' ','m','a','r','t',0xC3,0xAB,0x00,
};
static signed char WEDNESDAY_SQ_AL[] = {
'e',' ','m',0xC3,0xAB,'r','k','u','r',0xC3,0xAB,0x00,
};
static signed char SATURDAY_SQ_AL[] = {
'e',' ','s','h','t','u','n',0xC3,0xAB,0x00,
};
static signed char *(CALENDAR_WEEK_IN_SQ_AL[]) = {
"e diel",
MONDAY_SQ_AL,
TUESDAY_SQ_AL,
WEDNESDAY_SQ_AL,
"e enjte",
"e premte",
SATURDAY_SQ_AL,
0x00,
};

static signed char NOVEMBER_SQ_AL[] = {
'n',0xC3,0xAB,'n','t','o','r',0x00,
};
static signed char *(CALENDAR_MONTH_IN_SQ_AL[]) = {
"",
"janar",
"shkurt",
"mars",
"prill",
"maj",
"qershor",
"korrik",
"gusht",
"shtator",
"tetor",
NOVEMBER_SQ_AL,
"dhjetor",
0x00,
};
