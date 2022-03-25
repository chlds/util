/* **** Notes

Help.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl lk_help(void)) {

printf("\n");

printf("\t%s \n","Depth-first search");
printf("\n");

printf("\t%s \n","Syntax:");
printf("\t%s \n","LK [FLAGS [LETTERS]] <DIR>");
printf("\t%s \n","LK [FLAGS] <DIR>");
printf("\t%s \n","LK <DIR>");
printf("\n");

printf("\t%s \n","Flags:");
printf("\t%s \n","a Attributes");
printf("\t%s \n","i Ignore case distinctions");
printf("\t%s \n","r Recursion");
printf("\t%s \n","u Unlimited (Non Sleep())");
printf("\t%s \n","v Verbose");
printf("\t%s \n","d Directories");
printf("\n");

printf("\t%s \n","Examples:");
printf("\t%s \n","lk uir .C . (Recursively search for \".C\" out of the current directory without regard to the case sensitive.)");
printf("\t%s \n","lk 3 .c . (Recursively search for \".c\" out of the current directory to level 3.)");
printf("\t%s \n","lk r . (Recursively list directory contents out of the current directory.)");
printf("\n");

printf("\t%s \n","Remarks:");
printf("\t%s \n","LETTERS are case-sensitive unless flag i is added.");
printf("\n");

printf("\t%s \n","GitHub: github.com/chlds/util/");

return(0x01);
}
