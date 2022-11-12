/* Notes

Scottish Gaelic

Remarks:
Based on UTF-8
*/


static signed char *(CALENDAR_WK_IN_GD_GB[]) = {
"DiD","DiL","DiM","DiC","Dia","Dih","DiS",0x00,
};

static signed char sunday2_gd_gb[] = {
'L',0xC3,0xA0,' ','n','a',' ','S',0xC3,0xA0,'b','a','i','d',0x00,
};
static signed char sunday_gd_gb[] = {
'D','i','D',0xC3,0xB2,'m','h','n','a','i','c','h',0x00,
};
static signed char tuesday_gd_gb[] = {
'D','i','M',0xC3,0xA0,'i','r','t',0x00,
};

static signed char *(CALENDAR_WEEK_IN_GD_GB[]) = {
sunday_gd_gb,"DiLuain",tuesday_gd_gb,"DiCiadain","DiarDaoin","DihAoine","DiSathairne",0x00,
};

static signed char march_gd_gb[] = {
'A','m',' ','M',0xC3,0xA0,'r','t',0x00,
};
static signed char may_gd_gb[] = {
'A','n',' ','C',0xC3,0xA8,'i','t','e','a','n',0x00,
};
static signed char june_gd_gb[] = {
'A','n',' ','t','-',0xC3,0x92,'g','-','m','h',0xC3,0xAC,'o','s',0x00,
};
static signed char august_gd_gb[] = {
'A','n',' ','L',0xC3,0xB9,'n','a','s','t','a','l',0x00,
};
static signed char october_gd_gb[] = {
'A','n',' ','D',0xC3,0xA0,'m','h','a','i','r',0x00,
};
static signed char december_gd_gb[] = {
'A','n',' ','D',0xC3,0xB9,'b','h','l','a','c','h','d',0x00,
};

static signed char *(CALENDAR_MONTH_IN_GD_GB[]) = {
"",\
"Am Faoilteach",\
"An Gearran",\
march_gd_gb,\
"An Giblean",\
may_gd_gb,\
june_gd_gb,\
"An t-Iuchar",\
august_gd_gb,\
"An t-Sultain",\
october_gd_gb,\
"An t-Samhain",\
december_gd_gb,\
0x00,
};
