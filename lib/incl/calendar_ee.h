/* Notes

Based on UTF-8
//*/


static signed char *(CALENDAR_WK_IN_EE[]) = {
"P","E","T","K","N","R","L",0x00,
};

static signed char puhapaev[] = {
'p',0xC3,0xBC,'h','a','p',0xC3,0xA4,'e','v',0x00,
};
static signed char esmaspaev[] = {
'e','s','m','a','s','p',0xC3,0xA4,'e','v',0x00,
};
static signed char teisipaev[] = {
't','e','i','s','i','p',0xC3,0xA4,'e','v',0x00,
};
static signed char kolmapaev[] = {
'k','o','l','m','a','p',0xC3,0xA4,'e','v',0x00,
};
static signed char neljapaev[] = {
'n','e','l','j','a','p',0xC3,0xA4,'e','v',0x00,
};
static signed char laupaev[] = {
'l','a','u','p',0xC3,0xA4,'e','v',0x00,
};
static signed char *(CALENDAR_WEEK_IN_EE[]) = {
puhapaev,esmaspaev,teisipaev,kolmapaev,neljapaev,"reede",laupaev,0x00,
};

static signed char march_ee[] = {
'm',0xC3,0xA4,'r','t','s',0x00,
};
static signed char *(CALENDAR_MONTH_IN_EE[]) = {
"","jaanuar","veebruar",march_ee,"aprill","mai","juuni","juuli","august","september","oktoober","november","detsember",0x00,
};
