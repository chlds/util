/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

auto signed char *b;
auto signed i,l,r;
auto size_t s;
auto struct _stati64 stats;
auto time_t t[CLI_RULE];
auto signed char *(stat_v[]) = {
"Created  at",
"Modified at",
"Accessed at",
0x00,
};
auto signed char *(mode_v[]) = {
"c",
"d",
"-",
"r",
"w",
"x",
0x00,
};
auto signed mode[] = {
_S_IFCHR,
_S_IFDIR,
_S_IFREG,
_S_IREAD,
_S_IWRITE,
_S_IEXEC,
0x00,
};
auto signed mask[] = {
_S_IFCHR,
_S_IFDIR,
_S_IFREG,
0x00,
};

time(t);
printf("\n");
printf("%s ","Current local time");
r = cals_out_t(*t);
if(!r) {
printf("%s \n","<< Error at fn. cals_out_t()");
return(0x00);
}

printf("\n");
if(argc<(0x02)) return(0x00);

printf("\n");

b = (*(argv+(argc+(~0x00))));
r = _stati64(b,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
else printf("%s %Xh \n","<< Error at fn. _stati64() with errno.",errno);
return(0x00);
}

AND(i,0x00);
while(*(i+(mode_v))) {
l = (*(i+(mode)));
r = ord_d(mask,l);
if(r<(ct_d(mask))) {
if(EQ(l,_S_IFMT&(R(st_mode,stats)))) printf("%s",*(i+(mode_v)));
}
if(!(r<(ct_d(mask)))) {
if(l&(R(st_mode,stats))) printf("%s",*(i+(mode_v)));
else printf("%s","-");
}
i++;
}

printf(" ");
printf("%s \n",b);

printf("%s %d, ","MODE",R(st_mode,stats));

s = (size_t) (R(st_size,stats));
printf("%s %zu  ","SIZE",s);
printf("\n");

printf("%s %d, ","UID",R(st_uid,stats));
printf("%s %d, ","GID",R(st_gid,stats));
printf("%s %d, ","DEV",R(st_dev,stats));
printf("%s %d, ","RDEV",R(st_rdev,stats));
printf("%s %d, ","INODE",R(st_ino,stats));
printf("%s %d  ","NLINK",R(st_nlink,stats));
printf("\n");

i = (CLI_RULE);
*(--i+(t)) = (0x00);
*(--i+(t)) = (R(st_atime,stats));
*(--i+(t)) = (R(st_mtime,stats));
*(--i+(t)) = (R(st_ctime,stats));
while(*(i+(stat_v))) {
printf("%s ",*(i+(stat_v)));
r = cals_out_t(*(i+(t)));
printf(" (");
printf("%lld",*(i+(t)));
printf(") \n");
i++;
}

if(DBG) {
printf("\n");
printf("Done! \n");
}

return(0x00);
}
