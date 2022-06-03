/* Notes

Based on UTF-8
//*/


static signed char *(CALENDAR_WK_IN_FR[]) = {
"Di","Lu","Ma","Me","Je","Ve","Sa",0x00,
};

static signed char *(CALENDAR_WEEK_IN_FR[]) = {
"dimanche","lundi","mardi","mercredi","jeudi","vendredi","samedi",0x00,
};

static signed char *(CALENDAR_DAY_IN_FR[]) = {
"","1er",0x00,
};

static signed char fevrier[] = {
'f',0xC3,0xA9,'v','r','i','e','r',0x00,
};
static signed char aout[] = {
'a','o',0xC3,0xBB,'t',0x00,
};
static signed char decembre[] = {
'd',0xC3,0xA9,'c','e','m','b','r','e',0x00,
};
static signed char *(CALENDAR_MONTH_IN_FR[]) = {
"","janvier",fevrier,"mars","avril","mai","juin","juillet",aout,"septembre","octobre","novembre",decembre,0x00,
};
