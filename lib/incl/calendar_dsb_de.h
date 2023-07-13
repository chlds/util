/* Notes

Lower Sorbian

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_DSB_DE[] = ("Lower Sorbian");
static signed char CALENDAR_LLSC_IN_DSB_DE[] = {
'L',0xE1,0xB4,0x8F,0xE1,0xB4,0xA1,0xE1,0xB4,0x87,0xCA,0x80,' ','S',0xE1,0xB4,0x8F,0xCA,0x80,0xCA,0x99,0xC9,0xAA,0xE1,0xB4,0x80,0xC9,0xB4,0x00,
};

static signed char SUNDAY_DSB_DE[] = {
'n','j','e',0xC5,0xBA,'e','l','a',0x00,
};
static signed char MONDAY_DSB_DE[] = {
'p',0xC3,0xB3,'n','j','e',0xC5,0xBA,'e','l','e',0x00,
};
static signed char TUESDAY_DSB_DE[] = {
'w','a',0xC5,0x82,'t','o','r','a',0x00,
};
static signed char THURSDAY_DSB_DE[] = {
's','t','w',0xC3,0xB3,'r','t','k',0x00,
};
static signed char FRIDAY_DSB_DE[] = {
'p',0xC4,0x9B,'t','k',0x00,
};
static signed char *(CALENDAR_WEEK_IN_DSB_DE[]) = {
SUNDAY_DSB_DE,
MONDAY_DSB_DE,
TUESDAY_DSB_DE,
"srjoda",
THURSDAY_DSB_DE,
FRIDAY_DSB_DE,
"sobota",
0x00,
};

static signed char SUN_DSB_DE[] = {
'n','j','e',0x00,
};
static signed char MON_DSB_DE[] = {
'p',0xC3,0xB3,'n',0x00,
};
static signed char TUE_DSB_DE[] = {
'w','a',0xC5,0x82,0x00,
};
static signed char THU_DSB_DE[] = {
's','t','w',0x00,
};
static signed char FRI_DSB_DE[] = {
'p',0xC4,0x9B,'t',0x00,
};
static signed char *(CALENDAR_WK_IN_DSB_DE[]) = {
SUN_DSB_DE,
MON_DSB_DE,
TUE_DSB_DE,
"srj",
THU_DSB_DE,
FRI_DSB_DE,
"sob",
0x00,
};

static signed char MARCH_NOM_DSB_DE[] = {
'm',0xC4,0x9B,'r','c',0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_DSB_DE[]) = {
"",
"januar",
"februar",
MARCH_NOM_DSB_DE,
"apryl",
"maj",
"junij",
"julij",
"awgust",
"september",
"oktober",
"nowember",
"december",
0x00,
};

static signed char MARCH_DSB_DE[] = {
'm',0xC4,0x9B,'r','c','a',0x00,
};
static signed char *(CALENDAR_MONTH_IN_DSB_DE[]) = {
"",
"januara",
"februara",
MARCH_DSB_DE,
"apryla",
"maja",
"junija",
"julija",
"awgusta",
"septembra",
"oktobra",
"nowembra",
"decembra",
0x00,
};
