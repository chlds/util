/* Notes

Roman

Remarks:
Based on UTF-8
*/


static signed char *(CALENDAR_WK_IN_RL[]) = {
"So.","L.","Ma.","Me.","J.","V.","Sa.",0x00,
};

static signed char *(CALENDAR_WEEK_IN_RL[]) = {
"dies Solis","dies Lunae","dies Martis","dies Mercurii","dies Jovis","dies Veneris","dies Saturni",0x00,
};

/*
static signed char *(CALENDAR_DAY_IN_RL[]) = {
"","I","II","III","IV","V","VI","VII","VIII","IX",\
"X","XI","XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX",\
"XX","XXI","XXII","XXIII","XXIV","XXV","XXVI","XXVII","XXVIII","XXIX",\
"XXX","XXXI",\
0x00,
};
//*/

static signed char *(CALENDAR_DAY_IN_RL[]) = {
"","i","ii","iii","iv","v","vi","vii","viii","ix",\
"x","xi","xii","xiii","xiv","xv","xvi","xvii","xviii","xix",\
"xx","xxi","xxii","xxiii","xxiv","xxv","xxvi","xxvii","xxviii","xxix",\
"xxx","xxxi",\
0x00,
};

/*
static signed char *(CALENDAR_MONTH_IN_RL[]) = {
"",
"JANUARIUS",
"FEBRUARIUS",
"MARTIUS",
"APRILIS",
"MAIUS",
"JUNIUS",
"JULIUS",
"AUGUSTUS",
"SEPTEMBER",
"OCTOBER",
"NOVEMBER",
"DECEMBER",
0x00,
};
//*/

// more correctly written as Romans did not have a 'J' or a 'U' in their alphabet..
static signed char *(CALENDAR_MONTH_IN_RL[]) = {
"",
"IANVARIVS",
"FEBRVARIVS",
"MARTIVS",
"APRILIS",
"MAIVS",
"IVNIVS",
"IVLIVS",
"AVGVSTVS",
"SEPTEMBER",
"OCTOBER",
"NOVEMBER",
"DECEMBER",
0x00,
};

// Roman numerals; since 1970 = (70:LXX+(epoch 1900:MCM))
static signed char *(CALENDAR_YEAR_IN_RL[]) = {
"MCMLXX","MCMLXXI","MCMLXXII","MCMLXXIII","MCMLXXIV","MCMLXXV","MCMLXXVI","MCMLXXVII","MCMLXXVIII","MCMLXXIX",
"MCMLXXX","MCMLXXXI","MCMLXXXII","MCMLXXXIII","MCMLXXXIV","MCMLXXXV","MCMLXXXVI","MCMLXXXVII","MCMLXXXVIII","MCMLXXXIX",
"MCMXC","MCMCXI","MCMCXII","MCMCXIII","MCMCXIV","MCMCXV","MCMCXVI","MCMCXVII","MCMCXVIII","MCMCXIX",
"MM","MMI","MMII","MMIII","MMIV","MMV","MMVI","MMVII","MMVIII","MMIX",
"MMX","MMXI","MMXII","MMXIII","MMXIV","MMXV","MMXVI","MMXVII","MMXVIII","MMXIX",
"MMXX","MMXXI","MMXXII","MMXXIII","MMXXIV","MMXXV","MMXXVI","MMXXVII","MMXXVIII","MMXXIX",
"MMXXX","MMXXXI","MMXXXII","MMXXXIII","MMXXXIV","MMXXXV","MMXXXVI","MMXXXVII","MMXXXVIII","MMXXXIX",
"MMXL","MMXLI","MMXLII","MMXLIII","MMXLIV","MMXLV","MMXLVI","MMXLVII","MMXLVIII","MMXLIX",
"MML","MMLI","MMLII","MMLIII","MMLIV","MMLV","MMLVI","MMLVII","MMLVIII","MMLIX",
"MMLX","MMLXI","MMLXII","MMLXIII","MMLXIV","MMLXV","MMLXVI","MMLXVII","MMLXVIII","MMLXIX",
"MMLXX","MMLXXI","MMLXXII","MMLXXIII","MMLXXIV","MMLXXV","MMLXXVI","MMLXXVII","MMLXXVIII","MMLXXIX",
"MMLXXX","MMLXXXI","MMLXXXII","MMLXXXIII","MMLXXXIV","MMLXXXV","MMLXXXVI","MMLXXXVII","MMLXXXVIII","MMLXXXIX",
"MMLXXX","MMLXXXI","MMLXXXII","MMLXXXIII","MMLXXXIV","MMLXXXV","MMLXXXVI","MMLXXXVII","MMLXXXVIII","MMLXXXIX",
"MMXC","MMXCI","MMXCII","MMXCIII","MMXCIV","MMXCV","MMXCVI","MMXCVII","MMXCVIII","MMXCIX",
"MMC", // 2100
0x00,
};
