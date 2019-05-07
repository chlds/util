# util


## Please verify the code and use it if you'd like.


### I have created these files on Windows 10 64-bit OS using Windows Kit.

The executable file here will run on the (CMD.exe) console in Windows 10 64-bit OS.


## Make a library file and each executable file.


### Type the following command on directory util/ to make a library file on directory util/lib/.

> nmake lb


### After making the library file, type the following command on directory util/ to make the executable file on directory util/bin/ out of a C source file on directory util/bin/obj/src/.

> nmake T=<a-C-source-file-name-except-for-the-.c-extension>

e.g.,
> nmake T=calend
