/* Notes

Based on UTF-8
*/


static signed char ante_meridiem_capital[] = {
0xE1,0xB4,0x80,0xE1,0xB4,0x8D,0x00,
};
static signed char ante_meridiem_capital_dot[] = {
0xE1,0xB4,0x80,'.',0xE1,0xB4,0x8D,'.',0x00,
};

static signed char *(llsc_ante_meridiem[]) = {
ante_meridiem_capital,\
ante_meridiem_capital_dot,\
"a.m.",\
"am",\
"",\
0x00,
};
static signed char *(ante_meridiem[]) = {
"AM",\
"A.M.",\
"a.m.",\
"am",\
"",\
0x00,
};

static signed char post_meridiem_capital[] = {
0xE1,0xB4,0x98,0xE1,0xB4,0x8D,0x00,
};
static signed char post_meridiem_capital_dot[] = {
0xE1,0xB4,0x98,'.',0xE1,0xB4,0x8D,'.',0x00,
};

static signed char *(llsc_post_meridiem[]) = {
post_meridiem_capital,\
post_meridiem_capital_dot,\
"p.m.",\
"pm",\
"",\
0x00,
};
static signed char *(post_meridiem[]) = {
"PM",\
"P.M.",\
"p.m.",\
"pm",\
"",\
0x00,
};
