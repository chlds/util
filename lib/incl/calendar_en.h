/* Notes

English

Remarks:
Based on UTF-8
*/


static signed char CALENDAR_IN_EN_GB[] = ("English");
static signed char CALENDAR_LLSC_IN_EN_GB[] = {
'E',0xC9,0xB4,0xC9,0xA2,0xCA,0x9F,0xC9,0xAA,0xEA,0x9C,0xB1,0xCA,0x9C,0x00,
};

static signed char CALENDAR_IN_EN_US[] = ("English (US)");
static signed char CALENDAR_LLSC_IN_EN_US[] = {
'E',0xC9,0xB4,0xC9,0xA2,0xCA,0x9F,0xC9,0xAA,0xEA,0x9C,0xB1,0xCA,0x9C,\
' ','(','U','S',')',\
0x00,
};

static signed char CALENDAR_LATN_IN_EN[] = ("Calendar");
static signed char CALENDAR_LATN_LSC_IN_EN[] = {
'C',0xE1,0xB4,0x80,0xCA,0x9F,0xE1,0xB4,0x87,0xC9,0xB4,0xE1,0xB4,0x85,0xE1,0xB4,0x80,0xCA,0x80,0x00,
};

static signed char WEEK_LATN_IN_EN[] = ("Week");
static signed char WEEK_LATN_LSC_IN_EN[] = {
'W',0xE1,0xB4,0x87,0xE1,0xB4,0x87,0xE1,0xB4,0x8B,0x00,
};

static signed char WEEK_LATN_S_IN_EN[] = ("week");
static signed char WEEK_LATN_S_LSC_IN_EN[] = {
0xE1,0xB4,0xA1,0xE1,0xB4,0x87,0xE1,0xB4,0x87,0xE1,0xB4,0x8B,0x00,
};

static signed char *(CALENDAR_ORDER_OLD_IN_EN[]) = {
"","first","second","third","fourth","fifth","and last",0x00,
};

static signed char *(CALENDAR_WEEK_OLD_IN_EN[]) = {
"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",0x00,
};

static signed char *(CALENDAR_WK_OLD_IN_EN[]) = {
"Sun","Mon","Tue","Wed","Thu","Fri","Sat",0x00,
};

static signed char *(CALENDAR_W_OLD_IN_EN[]) = {
"Su","Mo","Tu","We","Th","Fr","Sa",0x00,
};

static signed char *(CALENDAR_DAY_OLD_IN_EN[]) = {
"","1st","2nd","3rd","4th","5th","6th","7th","8th","9th",
"10th","11th","12th","13th","14th","15th","16th","17th","18th","19th",
"20th","21st","22nd","23rd","24th","25th","26th","27th","28th","29th",
"30th","31st",0x00,
};

static signed char *(CALENDAR_MONTH_OLD_IN_EN[]) = {
"","January","February","March","April","May","June","July","August","September","October","November","December",0x00,
};
