/* **** Notes

Check the attributes of a directory or of a file
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl attrib_of(signed(arg))) {

auto signed r;
auto signed attrib[] = {
(signed) (FILE_ATTRIBUTE_ARCHIVE),
(signed) (FILE_ATTRIBUTE_COMPRESSED),
(signed) (FILE_ATTRIBUTE_DEVICE),
(signed) (FILE_ATTRIBUTE_DIRECTORY),
(signed) (FILE_ATTRIBUTE_ENCRYPTED),
(signed) (FILE_ATTRIBUTE_HIDDEN),
(signed) (FILE_ATTRIBUTE_INTEGRITY_STREAM),
(signed) (FILE_ATTRIBUTE_NORMAL),
(signed) (FILE_ATTRIBUTE_NOT_CONTENT_INDEXED),
(signed) (FILE_ATTRIBUTE_NO_SCRUB_DATA),
(signed) (FILE_ATTRIBUTE_OFFLINE),
(signed) (FILE_ATTRIBUTE_READONLY),
(signed) (FILE_ATTRIBUTE_RECALL_ON_DATA_ACCESS),
(signed) (FILE_ATTRIBUTE_RECALL_ON_OPEN),
(signed) (FILE_ATTRIBUTE_REPARSE_POINT),
(signed) (FILE_ATTRIBUTE_SPARSE_FILE),
(signed) (FILE_ATTRIBUTE_SYSTEM),
(signed) (FILE_ATTRIBUTE_TEMPORARY),
(signed) (FILE_ATTRIBUTE_VIRTUAL),
(signed) (0x00),
};
auto signed char *(attribp[]) = {
(char signed(*)) ("Archive"),
(char signed(*)) ("Compressed"),
(char signed(*)) ("Device"),
(char signed(*)) ("Directory"),
(char signed(*)) ("Encrypted"),
(char signed(*)) ("Hidden"),
(char signed(*)) ("Integrity stream"),
(char signed(*)) ("Normal"),
(char signed(*)) ("Not content indexed"),
(char signed(*)) ("No scrub data"),
(char signed(*)) ("Offline"),
(char signed(*)) ("Read-only"),
(char signed(*)) ("Recall on data access"),
(char signed(*)) ("Recall on open"),
(char signed(*)) ("Reparse point"),
(char signed(*)) ("Sparse file"),
(char signed(*)) ("System"),
(char signed(*)) ("Temporary"),
(char signed(*)) ("Virtual"),
(char signed(*)) (0x00),
};

// if(!arg) return(0x00);

printf(" {");
r = attrib_of_r(arg,attrib,attribp);
printf("} ");

return(r);
}
