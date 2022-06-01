/* Notes

Based on UTF-8
//*/


static signed char sun_cn[] = {
0xE5,0x91,0xA8,0xE6,0x97,0xA5,0x00,
};
static signed char mon_cn[] = {
0xE5,0x91,0xA8,0xE4,0xB8,0x80,0x00,
};
static signed char tue_cn[] = {
0xE5,0x91,0xA8,0xE4,0xBA,0x8C,0x00,
};
static signed char wed_cn[] = {
0xE5,0x91,0xA8,0xE4,0xB8,0x89,0x00,
};
static signed char thu_cn[] = {
0xE5,0x91,0xA8,0xE5,0x9B,0x9B,0x00,
};
static signed char fri_cn[] = {
0xE5,0x91,0xA8,0xE4,0xBA,0x94,0x00,
};
static signed char sat_cn[] = {
0xE5,0x91,0xA8,0xE5,0x85,0xAD,0x00,
};
static signed char *(CALENDAR_WK_IN_CN[]) = {
sun_cn,mon_cn,tue_cn,wed_cn,thu_cn,fri_cn,sat_cn,0x00,
};

static signed char sunday_cn[] = {
0xE6,0x98,0x9F,0xE6,0x9C,0x9F,0xE5,0xA4,0xA9,0x00,
};
static signed char monday_cn[] = {
0xE6,0x98,0x9F,0xE6,0x9C,0x9F,0xE4,0xB8,0x80,0x00,
};
static signed char tuesday_cn[] = {
0xE6,0x98,0x9F,0xE6,0x9C,0x9F,0xE4,0xBA,0x8C,0x00,
};
static signed char wednesday_cn[] = {
0xE6,0x98,0x9F,0xE6,0x9C,0x9F,0xE4,0xB8,0x89,0x00,
};
static signed char thursday_cn[] = {
0xE6,0x98,0x9F,0xE6,0x9C,0x9F,0xE5,0x9B,0x9B,0x00,
};
static signed char friday_cn[] = {
0xE6,0x98,0x9F,0xE6,0x9C,0x9F,0xE4,0xBA,0x94,0x00,
};
static signed char saturday_cn[] = {
0xE6,0x98,0x9F,0xE6,0x9C,0x9F,0xE5,0x85,0xAD,0x00,
};
static signed char *(CALENDAR_WEEK_IN_CN[]) = {
sunday_cn,monday_cn,tuesday_cn,wednesday_cn,thursday_cn,friday_cn,saturday_cn,0x00,
};

static signed char january_cn[] = {
0xE4,0xB8,0x80,0xE6,0x9C,0x88,0x00,
};
static signed char february_cn[] = {
0xE4,0xBA,0x8C,0xE6,0x9C,0x88,0x00,
};
static signed char march_cn[] = {
0xE4,0xB8,0x89,0xE6,0x9C,0x88,0x00,
};
static signed char april_cn[] = {
0xE5,0x9B,0x9B,0xE6,0x9C,0x88,0x00,
};
static signed char may_cn[] = {
0xE4,0xBA,0x94,0xE6,0x9C,0x88,0x00,
};
static signed char june_cn[] = {
0xE5,0x85,0xAD,0xE6,0x9C,0x88,0x00,
};
static signed char july_cn[] = {
0xE4,0xB8,0x83,0xE6,0x9C,0x88,0x00,
};
static signed char august_cn[] = {
0xE5,0x85,0xAB,0xE6,0x9C,0x88,0x00,
};
static signed char september_cn[] = {
0xE4,0xB9,0x9D,0xE6,0x9C,0x88,0x00,
};
static signed char october_cn[] = {
0xE5,0x8D,0x81,0xE6,0x9C,0x88,0x00,
};
static signed char november_cn[] = {
0xE5,0x8D,0x81,0xE4,0xB8,0x80,0xE6,0x9C,0x88,0x00,
};
static signed char december_cn[] = {
0xE5,0x8D,0x81,0xE4,0xBA,0x8C,0xE6,0x9C,0x88,0x00,
};
static signed char *(CALENDAR_MONTH_IN_CN[]) = {
"",january_cn,february_cn,march_cn,april_cn,may_cn,june_cn,july_cn,august_cn,september_cn,october_cn,november_cn,december_cn,0x00,
};
