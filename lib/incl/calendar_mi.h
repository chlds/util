/* Notes

Maori

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_MI[] = ("Maori");
static signed char CALENDAR_LLSC_IN_MI[] = {
'M',0xE1,0xB4,0x80,0xE1,0xB4,0x8F,0xCA,0x80,0xC9,0xAA,0x00,
};

static signed char CALENDAR_NATIVE_IN_MI[] = {
't','e',' ','r','e','o',' ','M',0xC4,0x81,'o','r','i',0x00,
};
static signed char *CALENDAR_LLSC_NATIVE_IN_MI = (CALENDAR_NATIVE_IN_MI);

static signed char SUNDAY_MI[] = {
'R',0xC4,0x81,'t','a','p','u',0x00,
};
static signed char TUESDAY_MI[] = {
'T',0xC5,0xAB,'r','e','i',0x00,
};
static signed char THURSDAY_MI[] = {
'T',0xC4,0x81,'i','t','e',0x00,
};
static signed char SATURDAY_MI[] = {
'R',0xC4,0x81,'h','o','r','o','i',0x00,
};
static signed char *(CALENDAR_WEEK_IN_MI[]) = {
SUNDAY_MI,
"Mane",
TUESDAY_MI,
"Wenerei",
THURSDAY_MI,
"Paraire",
SATURDAY_MI,
0x00,
};

static signed char SUN_MI[] = {
'R',0xC4,0x81,'t',0x00,
};
static signed char TUE_MI[] = {
'T',0xC5,0xAB,'r',0x00,
};
static signed char THU_MI[] = {
'T',0xC4,0x81,'i',0x00,
};
static signed char SAT_MI[] = {
'R',0xC4,0x81,'h',0x00,
};
static signed char *(CALENDAR_WK_IN_MI[]) = {
SUN_MI,
"Man",
TUE_MI,
"Wen",
THU_MI,
"Par",
SAT_MI,
0x00,
};

static signed char JANUARY_MI[] = {
'H',0xC4,0x81,'n','u','e','r','e',0x00,
};
static signed char FEBRUARY_MI[] = {
'P',0xC4,0x93,'p','u','e','r','e',0x00,
};
static signed char MARCH_MI[] = {
'M',0xC4,0x81,'e','h','e',0x00,
};
static signed char JULY_MI[] = {
'H',0xC5,0xAB,'r','a','e',0x00,
};
static signed char AUGUST_MI[] = {
0xC4,0x80,'k','u','h','a','t','a',0x00,
};
static signed char DECEMBER_MI[] = {
'T',0xC4,0xAB,'h','e','m','a',0x00,
};

static signed char APRIL_GEN_MI[] = {
0xC4,0x80,'p','e','r','e','i','r','a',0x00,
};
static signed char *(CALENDAR_MONTH_GENITIVE_IN_MI[]) = {
"",
JANUARY_MI,
FEBRUARY_MI,
MARCH_MI,
APRIL_GEN_MI,
"Mei",
"Hune",
JULY_MI,
AUGUST_MI,
"Hepetema",
"Oketopa",
"Noema",
DECEMBER_MI,
0x00,
};

static signed char APRIL_NOM_MI[] = {
0xC4,0x80,'p','e','r','i','r','a',0x00,
};
static signed char *(CALENDAR_MONTH_NOMINATIVE_IN_MI[]) = {
"",
JANUARY_MI,
FEBRUARY_MI,
MARCH_MI,
APRIL_NOM_MI,
"Mei",
"Hune",
JULY_MI,
AUGUST_MI,
"Hepetema",
"Oketopa",
"Noema",
DECEMBER_MI,
0x00,
};

static signed char JAN_MI[] = {
'H',0xC4,0x81,'n',0x00,
};
static signed char FEB_MI[] = {
'P',0xC4,0x93,'p',0x00,
};
static signed char MAR_MI[] = {
'M',0xC4,0x81,'e',0x00,
};
static signed char APR_MI[] = {
0xC4,0x80,'p','e',0x00,
};
static signed char JUL_MI[] = {
'H',0xC5,0xAB,'r',0x00,
};
static signed char AUG_MI[] = {
0xC4,0x80,'k','u',0x00,
};
static signed char DEC_MI[] = {
'T',0xC4,0xAB,'h',0x00,
};

static signed char *(CALENDAR_MON_GENITIVE_IN_MI[]) = {
"",
JAN_MI,
FEB_MI,
MAR_MI,
APR_MI,
"Mei",
"Hun",
JUL_MI,
AUG_MI,
"Hep",
"Oke",
"Noe",
DEC_MI,
0x00,
};

static signed char *(CALENDAR_MON_NOMINATIVE_IN_MI[]) = {
"",
JAN_MI,
FEB_MI,
MAR_MI,
APR_MI,
"Mei",
"Hun",
JUL_MI,
AUG_MI,
"Hep",
"Oke",
"Noe",
DEC_MI,
0x00,
};
