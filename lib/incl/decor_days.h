/* Notes

English

Remarks:
Based on UTF-8
*/


static signed char LLSC_FIRST_IN_EN[] = {
'F',0xC9,0xAA,0xCA,0x80,0xEA,0x9C,0xB1,0xE1,0xB4,0x9B,0x00,
};
static signed char LLSC_SECOND_IN_EN[] = {
'S',0xE1,0xB4,0x87,0xE1,0xB4,0x84,0xE1,0xB4,0x8F,0xC9,0xB4,0xE1,0xB4,0x85,0x00,
};
static signed char LLSC_THIRD_IN_EN[] = {
'T',0xCA,0x9C,0xC9,0xAA,0xCA,0x80,0xE1,0xB4,0x85,0x00,
};
static signed char LLSC_FOURTH_IN_EN[] = {
'F',0xE1,0xB4,0x8F,0xE1,0xB4,0x9C,0xCA,0x80,0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char LLSC_FIFTH_IN_EN[] = {
'F',0xC9,0xAA,0xEA,0x9C,0xB0,0xE1,0xB4,0x9B,0xCA,0x9C,0x00,
};
static signed char LLSC_AND_LAST_IN_EN[] = {
0xE1,0xB4,0x80,0xC9,0xB4,0xE1,0xB4,0x85,' ',0xCA,0x9F,0xE1,0xB4,0x80,0xEA,0x9C,0xB1,0xE1,0xB4,0x9B,0x00,
};
static signed char *(CALENDAR_ORDER_IN_EN[]) = {
"",
LLSC_FIRST_IN_EN,
LLSC_SECOND_IN_EN,
LLSC_THIRD_IN_EN,
LLSC_FOURTH_IN_EN,
LLSC_FIFTH_IN_EN,
LLSC_AND_LAST_IN_EN,
0x00,
};

static signed char LLSC_SUNDAY_IN_EN[] = {
'S',0xE1,0xB4,0x9C,0xC9,0xB4,0xE1,0xB4,0x85,0xE1,0xB4,0x80,0xCA,0x8F,0x00,
};
static signed char LLSC_MONDAY_IN_EN[] = {
'M',0xE1,0xB4,0x8F,0xC9,0xB4,0xE1,0xB4,0x85,0xE1,0xB4,0x80,0xCA,0x8F,0x00,
};
static signed char LLSC_TUESDAY_IN_EN[] = {
'T',0xE1,0xB4,0x9C,0xE1,0xB4,0x87,0xEA,0x9C,0xB1,0xE1,0xB4,0x85,0xE1,0xB4,0x80,0xCA,0x8F,0x00,
};
static signed char LLSC_WEDNESDAY_IN_EN[] = {
'W',0xE1,0xB4,0x87,0xE1,0xB4,0x85,0xC9,0xB4,0xE1,0xB4,0x87,0xEA,0x9C,0xB1,0xE1,0xB4,0x85,0xE1,0xB4,0x80,0xCA,0x8F,0x00,
};
static signed char LLSC_THURSDAY_IN_EN[] = {
'T',0xCA,0x9C,0xE1,0xB4,0x9C,0xCA,0x80,0xEA,0x9C,0xB1,0xE1,0xB4,0x85,0xE1,0xB4,0x80,0xCA,0x8F,0x00,
};
static signed char LLSC_FRIDAY_IN_EN[] = {
'F',0xCA,0x80,0xC9,0xAA,0xE1,0xB4,0x85,0xE1,0xB4,0x80,0xCA,0x8F,0x00,
};
static signed char LLSC_SATURDAY_IN_EN[] = {
'S',0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0xE1,0xB4,0x9C,0xCA,0x80,0xE1,0xB4,0x85,0xE1,0xB4,0x80,0xCA,0x8F,0x00,
};
static signed char *(CALENDAR_WEEK_IN_EN[]) = {
LLSC_SUNDAY_IN_EN,
LLSC_MONDAY_IN_EN,
LLSC_TUESDAY_IN_EN,
LLSC_WEDNESDAY_IN_EN,
LLSC_THURSDAY_IN_EN,
LLSC_FRIDAY_IN_EN,
LLSC_SATURDAY_IN_EN,
0x00,
};

static signed char LLSC_SUN_IN_EN[] = {
'S',0xE1,0xB4,0x9C,0xC9,0xB4,0x00,
};
static signed char LLSC_MON_IN_EN[] = {
'M',0xE1,0xB4,0x8F,0xC9,0xB4,0x00,
};
static signed char LLSC_TUE_IN_EN[] = {
'T',0xE1,0xB4,0x9C,0xE1,0xB4,0x87,0x00,
};
static signed char LLSC_WED_IN_EN[] = {
'W',0xE1,0xB4,0x87,0xE1,0xB4,0x85,0x00,
};
static signed char LLSC_THU_IN_EN[] = {
'T',0xCA,0x9C,0xE1,0xB4,0x9C,0x00,
};
static signed char LLSC_FRI_IN_EN[] = {
'F',0xCA,0x80,0xC9,0xAA,0x00,
};
static signed char LLSC_SAT_IN_EN[] = {
'S',0xE1,0xB4,0x80,0xE1,0xB4,0x9B,0x00,
};
static signed char *(CALENDAR_WK_IN_EN[]) = {
LLSC_SUN_IN_EN,
LLSC_MON_IN_EN,
LLSC_TUE_IN_EN,
LLSC_WED_IN_EN,
LLSC_THU_IN_EN,
LLSC_FRI_IN_EN,
LLSC_SAT_IN_EN,
0x00,
};

static signed char LLSC_SU_IN_EN[] = {
'S',0xE1,0xB4,0x9C,0x00,
};
static signed char LLSC_MO_IN_EN[] = {
'M',0xE1,0xB4,0x8F,0x00,
};
static signed char LLSC_TU_IN_EN[] = {
'T',0xE1,0xB4,0x9C,0x00,
};
static signed char LLSC_WE_IN_EN[] = {
'W',0xE1,0xB4,0x87,0x00,
};
static signed char LLSC_TH_IN_EN[] = {
'T',0xCA,0x9C,0x00,
};
static signed char LLSC_FR_IN_EN[] = {
'F',0xCA,0x80,0x00,
};
static signed char LLSC_SA_IN_EN[] = {
'S',0xE1,0xB4,0x80,0x00,
};
static signed char *(CALENDAR_W_IN_EN[]) = {
LLSC_SU_IN_EN,
LLSC_MO_IN_EN,
LLSC_TU_IN_EN,
LLSC_WE_IN_EN,
LLSC_TH_IN_EN,
LLSC_FR_IN_EN,
LLSC_SA_IN_EN,
0x00,
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
"",
FIRST_IN_EN,
SECOND_IN_EN,
THIRD_IN_EN,
FOURTH_IN_EN,
FIFTH_IN_EN,
SIXTH_IN_EN,
SEVENTH_IN_EN,
EIGHTH_IN_EN,
NINTH_IN_EN,
TENTH_IN_EN,
ELEVENTH_IN_EN,
TWELFTH_IN_EN,
THIRTEENTH_IN_EN,
FOURTEENTH_IN_EN,
FIFTEENTH_IN_EN,
SIXTEENTH_IN_EN,
SEVENTEENTH_IN_EN,
EIGHTEENTH_IN_EN,
NINTEENTH_IN_EN,
TWENTIETH_IN_EN,
TWENTY_FIRST_IN_EN,
TWENTY_SECOND_IN_EN,
TWENTY_THIRD_IN_EN,
TWENTY_FOURTH_IN_EN,
TWENTY_FIFTH_IN_EN,
TWENTY_SIXTH_IN_EN,
TWENTY_SEVENTH_IN_EN,
TWENTY_EIGHTH_IN_EN,
TWENTY_NINTH_IN_EN,
THIRTIETH_IN_EN,
THIRTY_FIRST_IN_EN,
0x00,
};

static signed char LM_S_FIRST_IN_EN[] = {
'1',0xCB,0xA2,0xE1,0xB5,0x97,0x00,
};
static signed char LM_S_SECOND_IN_EN[] = {
'2',0xE2,0x81,0xBF,0xE1,0xB5,0x88,0x00,
};
static signed char LM_S_THIRD_IN_EN[] = {
'3',0xCA,0xB3,0xE1,0xB5,0x88,0x00,
};
static signed char LM_S_FOURTH_IN_EN[] = {
'4',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_FIFTH_IN_EN[] = {
'5',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_SIXTH_IN_EN[] = {
'6',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_SEVENTH_IN_EN[] = {
'7',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_EIGHTH_IN_EN[] = {
'8',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_NINTH_IN_EN[] = {
'9',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_TENTH_IN_EN[] = {
'1','0',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_ELEVENTH_IN_EN[] = {
'1','1',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_TWELFTH_IN_EN[] = {
'1','2',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_THIRTEENTH_IN_EN[] = {
'1','3',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_FOURTEENTH_IN_EN[] = {
'1','4',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_FIFTEENTH_IN_EN[] = {
'1','5',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_SIXTEENTH_IN_EN[] = {
'1','6',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_SEVENTEENTH_IN_EN[] = {
'1','7',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_EIGHTEENTH_IN_EN[] = {
'1','8',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_NINTEENTH_IN_EN[] = {
'1','9',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_TWENTIETH_IN_EN[] = {
'2','0',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_TWENTY_FIRST_IN_EN[] = {
'2','1',0xCB,0xA2,0xE1,0xB5,0x97,0x00,
};
static signed char LM_S_TWENTY_SECOND_IN_EN[] = {
'2','2',0xE2,0x81,0xBF,0xE1,0xB5,0x88,0x00,
};
static signed char LM_S_TWENTY_THIRD_IN_EN[] = {
'2','3',0xCA,0xB3,0xE1,0xB5,0x88,0x00,
};
static signed char LM_S_TWENTY_FOURTH_IN_EN[] = {
'2','4',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_TWENTY_FIFTH_IN_EN[] = {
'2','5',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_TWENTY_SIXTH_IN_EN[] = {
'2','6',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_TWENTY_SEVENTH_IN_EN[] = {
'2','7',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_TWENTY_EIGHTH_IN_EN[] = {
'2','8',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_TWENTY_NINTH_IN_EN[] = {
'2','9',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_THIRTIETH_IN_EN[] = {
'3','0',0xE1,0xB5,0x97,0xCA,0xB0,0x00,
};
static signed char LM_S_THIRTY_FIRST_IN_EN[] = {
'3','1',0xCB,0xA2,0xE1,0xB5,0x97,0x00,
};

static signed char LM_C_FIRST_IN_EN[] = {
'1',0xCB,0xA2,0xE1,0xB5,0x80,0x00,
};
static signed char LM_C_SECOND_IN_EN[] = {
'2',0xE1,0xB4,0xBA,0xE1,0xB4,0xB0,0x00,
};
static signed char LM_C_THIRD_IN_EN[] = {
'3',0xE1,0xB4,0xBF,0xE1,0xB4,0xB0,0x00,
};
static signed char LM_C_FOURTH_IN_EN[] = {
'4',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_FIFTH_IN_EN[] = {
'5',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_SIXTH_IN_EN[] = {
'6',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_SEVENTH_IN_EN[] = {
'7',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_EIGHTH_IN_EN[] = {
'8',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_NINTH_IN_EN[] = {
'9',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_TENTH_IN_EN[] = {
'1','0',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_ELEVENTH_IN_EN[] = {
'1','1',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_TWELFTH_IN_EN[] = {
'1','2',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_THIRTEENTH_IN_EN[] = {
'1','3',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_FOURTEENTH_IN_EN[] = {
'1','4',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_FIFTEENTH_IN_EN[] = {
'1','5',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_SIXTEENTH_IN_EN[] = {
'1','6',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_SEVENTEENTH_IN_EN[] = {
'1','7',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_EIGHTEENTH_IN_EN[] = {
'1','8',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_NINTEENTH_IN_EN[] = {
'1','9',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_TWENTIETH_IN_EN[] = {
'2','0',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_TWENTY_FIRST_IN_EN[] = {
'2','1',0xCB,0xA2,0xE1,0xB5,0x80,0x00,
};
static signed char LM_C_TWENTY_SECOND_IN_EN[] = {
'2','2',0xE1,0xB4,0xBA,0xE1,0xB4,0xB0,0x00,
};
static signed char LM_C_TWENTY_THIRD_IN_EN[] = {
'2','3',0xE1,0xB4,0xBF,0xE1,0xB4,0xB0,0x00,
};
static signed char LM_C_TWENTY_FOURTH_IN_EN[] = {
'2','4',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_TWENTY_FIFTH_IN_EN[] = {
'2','5',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_TWENTY_SIXTH_IN_EN[] = {
'2','6',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_TWENTY_SEVENTH_IN_EN[] = {
'2','7',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_TWENTY_EIGHTH_IN_EN[] = {
'2','8',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_TWENTY_NINTH_IN_EN[] = {
'2','9',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_THIRTIETH_IN_EN[] = {
'3','0',0xE1,0xB5,0x80,0xE1,0xB4,0xB4,0x00,
};
static signed char LM_C_THIRTY_FIRST_IN_EN[] = {
'3','1',0xCB,0xA2,0xE1,0xB5,0x80,0x00,
};

static signed char *(CALENDAR_LM_C_DAY_IN_EN[]) = {
"",\
LM_C_FIRST_IN_EN,\
LM_C_SECOND_IN_EN,\
LM_C_THIRD_IN_EN,\
LM_C_FOURTH_IN_EN,\
LM_C_FIFTH_IN_EN,\
LM_C_SIXTH_IN_EN,\
LM_C_SEVENTH_IN_EN,\
LM_C_EIGHTH_IN_EN,\
LM_C_NINTH_IN_EN,\
LM_C_TENTH_IN_EN,\
LM_C_ELEVENTH_IN_EN,\
LM_C_TWELFTH_IN_EN,\
LM_C_THIRTEENTH_IN_EN,\
LM_C_FOURTEENTH_IN_EN,\
LM_C_FIFTEENTH_IN_EN,\
LM_C_SIXTEENTH_IN_EN,\
LM_C_SEVENTEENTH_IN_EN,\
LM_C_EIGHTEENTH_IN_EN,\
LM_C_NINTEENTH_IN_EN,\
LM_C_TWENTIETH_IN_EN,\
LM_C_TWENTY_FIRST_IN_EN,\
LM_C_TWENTY_SECOND_IN_EN,\
LM_C_TWENTY_THIRD_IN_EN,\
LM_C_TWENTY_FOURTH_IN_EN,\
LM_C_TWENTY_FIFTH_IN_EN,\
LM_C_TWENTY_SIXTH_IN_EN,\
LM_C_TWENTY_SEVENTH_IN_EN,\
LM_C_TWENTY_EIGHTH_IN_EN,\
LM_C_TWENTY_NINTH_IN_EN,\
LM_C_THIRTIETH_IN_EN,\
LM_C_THIRTY_FIRST_IN_EN,\
0x00,
};

static signed char *(CALENDAR_LM_S_DAY_IN_EN[]) = {
"",
LM_S_FIRST_IN_EN,
LM_S_SECOND_IN_EN,
LM_S_THIRD_IN_EN,
LM_S_FOURTH_IN_EN,
LM_S_FIFTH_IN_EN,
LM_S_SIXTH_IN_EN,
LM_S_SEVENTH_IN_EN,
LM_S_EIGHTH_IN_EN,
LM_S_NINTH_IN_EN,
LM_S_TENTH_IN_EN,
LM_S_ELEVENTH_IN_EN,
LM_S_TWELFTH_IN_EN,
LM_S_THIRTEENTH_IN_EN,
LM_S_FOURTEENTH_IN_EN,
LM_S_FIFTEENTH_IN_EN,
LM_S_SIXTEENTH_IN_EN,
LM_S_SEVENTEENTH_IN_EN,
LM_S_EIGHTEENTH_IN_EN,
LM_S_NINTEENTH_IN_EN,
LM_S_TWENTIETH_IN_EN,
LM_S_TWENTY_FIRST_IN_EN,
LM_S_TWENTY_SECOND_IN_EN,
LM_S_TWENTY_THIRD_IN_EN,
LM_S_TWENTY_FOURTH_IN_EN,
LM_S_TWENTY_FIFTH_IN_EN,
LM_S_TWENTY_SIXTH_IN_EN,
LM_S_TWENTY_SEVENTH_IN_EN,
LM_S_TWENTY_EIGHTH_IN_EN,
LM_S_TWENTY_NINTH_IN_EN,
LM_S_THIRTIETH_IN_EN,
LM_S_THIRTY_FIRST_IN_EN,
0x00,
};
