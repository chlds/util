/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define DUAL_CONFIG_H
# define SI_H
# define CALEND_H
// # define CALS_H
# define STDIO_H
# define STDDEF_H
# define ERRNO_H
# define SYS_TYPES_H
# define SYS_STAT_H
# define CAR
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl agent_si_rr(signed char(*primary),signed short(*secondary))) {

auto signed char *b;
auto signed short *w;
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

if(!primary) return(0x00);
if(!secondary) return(0x00);

b = (primary);
w = (secondary);
r = _wstati64(w,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
else printf("%s %Xh \n","<< Error at fn. _wstati64() with errno.",errno);
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
cli_outs_b(0x08,b);
printf("\n");

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

return(0x01);
}
