/* Notes

English

Remarks:
Based on UTF-8
*/


static signed char *(CALENDAR_WK_IN_EN[]) = {
"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat.",0x00,
};

static signed char *(CALENDAR_WEEK_IN_EN[]) = {
"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday",0x00,
};

static signed char FIRST_IN_EN[] = {
'1',0xEA,0x9C,0xB1,0xE1,0xB4,0x9B,0x00,
};
static signed char SECOND_IN_EN[] = {
'2',0xC9,0xB4,0xE1,0xB4,0x85,0x00,
};
static signed char THIRD_IN_EN[] = {
'3',0xCA,0x80,0xE1,0xB4,0x85,0x00,
};
static signed char FOURTH_IN_EN[] = {
'4',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char FIFTH_IN_EN[] = {
'5',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char SIXTH_IN_EN[] = {
'6',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char SEVENTH_IN_EN[] = {
'7',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char EIGHTH_IN_EN[] = {
'8',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char NINTH_IN_EN[] = {
'9',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char TENTH_IN_EN[] = {
'1','0',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char ELEVENTH_IN_EN[] = {
'1','1',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char TWELFTH_IN_EN[] = {
'1','2',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char THIRTEENTH_IN_EN[] = {
'1','3',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char FOURTEENTH_IN_EN[] = {
'1','4',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char FIFTEENTH_IN_EN[] = {
'1','5',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char SIXTEENTH_IN_EN[] = {
'1','6',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char SEVENTEENTH_IN_EN[] = {
'1','7',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char EIGHTEENTH_IN_EN[] = {
'1','8',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char NINTEENTH_IN_EN[] = {
'1','9',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char TWENTIETH_IN_EN[] = {
'2','0',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char TWENTY_FIRST_IN_EN[] = {
'2','1',0xEA,0x9C,0xB1,0xE1,0xB4,0x9B,0x00,
};
static signed char TWENTY_SECOND_IN_EN[] = {
'2','2',0xC9,0xB4,0xE1,0xB4,0x85,0x00,
};
static signed char TWENTY_THIRD_IN_EN[] = {
'2','3',0xCA,0x80,0xE1,0xB4,0x85,0x00,
};
static signed char TWENTY_FOURTH_IN_EN[] = {
'2','4',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char TWENTY_FIFTH_IN_EN[] = {
'2','5',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char TWENTY_SIXTH_IN_EN[] = {
'2','6',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char TWENTY_SEVENTH_IN_EN[] = {
'2','7',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char TWENTY_EIGHTH_IN_EN[] = {
'2','8',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char TWENTY_NINTH_IN_EN[] = {
'2','9',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char THIRTIETH_IN_EN[] = {
'3','0',0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char THIRTY_FIRST_IN_EN[] = {
'3','1',0xEA,0x9C,0xB1,0xE1,0xB4,0x9B,0x00,
};

static signed char *(CALENDAR_DAY_IN_EN[]) = {
"",\
FIRST_IN_EN,\
SECOND_IN_EN,\
THIRD_IN_EN,\
FOURTH_IN_EN,\
FIFTH_IN_EN,\
SIXTH_IN_EN,\
SEVENTH_IN_EN,\
EIGHTH_IN_EN,\
NINTH_IN_EN,\
TENTH_IN_EN,\
ELEVENTH_IN_EN,\
TWELFTH_IN_EN,\
THIRTEENTH_IN_EN,\
FOURTEENTH_IN_EN,\
FIFTEENTH_IN_EN,\
SIXTEENTH_IN_EN,\
SEVENTEENTH_IN_EN,\
EIGHTEENTH_IN_EN,\
NINTEENTH_IN_EN,\
TWENTIETH_IN_EN,\
TWENTY_FIRST_IN_EN,\
TWENTY_SECOND_IN_EN,\
TWENTY_THIRD_IN_EN,\
TWENTY_FOURTH_IN_EN,\
TWENTY_FIFTH_IN_EN,\
TWENTY_SIXTH_IN_EN,\
TWENTY_SEVENTH_IN_EN,\
TWENTY_EIGHTH_IN_EN,\
TWENTY_NINTH_IN_EN,\
THIRTIETH_IN_EN,\
THIRTY_FIRST_IN_EN,\
0x00,
};

static signed char *(CALENDAR_DAY_OLD_IN_EN[]) = {
"","1st","2nd","3rd","4th","5th","6th","7th","8th","9th",
"10th","11th","12th","13th","14th","15th","16th","17th","18th","19th",
"20th","21st","22nd","23rd","24th","25th","26th","27th","28th","29th",
"30th","31st",0x00,
};

static signed char *(CALENDAR_MONTH_IN_EN[]) = {
"","January","February","March","April","May","June","July","August","September","October","November","December",0x00,
};
