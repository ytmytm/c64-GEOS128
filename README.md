

GEOS KERNAL v2.0 - commented source code of GEOS 128
====================================================

by Maciej 'YTM/Elysium' Witkowiak <ytm@elysium.pl>
2002-2014


#DESCRIPTION
This archive contains FULL source code of GEOS KERNAL v2.0, english version.
It is identical to original in critical points but the code is revised,
optimized, reorganized and first steps towards modularizing are made.



#DISCLAIMER
This package comes from full disassembling of GEOS KERNAL. I did it for my
own pleasure and purposes in my spare time. It is meant for customizing the
code and not for making big bucks on it. If you want to use GEOS KERNAL
generated from these sources you need to have an original copy of GEOS,
because you can do nothing without DeskTop, applications and so.

Although I have throughly tested it I cannot guarantee that it will work on
any hardware configuration and with any applications.



#REQUIREMENTS
The only tool required is ACME (version at least 0.07). It may be obtained
from:
http://sourceforge.net/projects/acme-crossass/

#ASSEMBLY
Just issue command:
```
acme geos.tas
```


#CUSTOMIZATION

Look into inc/equ.inc file - there are many true/false defines, you are free
to change them. But read the comments. You can compile-in input and disk
drivers so right after boot you will have your drivers (and you can boot from
1571/81 without any problems). In case that input driver is compiled into
KERNAL you have to delete all input driver files from boot disk, because
DeskTop will try to load the first one overriding compiled driver.



#THE SOURCES

Source code is organized in a specific way. You can browse through it easier
by using some keypoints:

##1) Labels
All global labels are identical to those from geosSym and geosMac files. All
OS_JUMPTAB functions are preceded with '_'. For example EnterDeskTop is placed
in jumptab as:
```
EnterDeskTop		JMP _EnterDeskTop
(...)
_EnterDeskTOp		; code for handling this function
```

All other labels are meant to descript the purpose of a subroutine. It was not
always possible, so you may find some UNK_xxx, xxxHelp_xx and lots of
procedures with the same name but different number e.g. Font11, Font12 etc.
In current version all labels are global and these which should be local are
made by abbreviation of the subroutine with a number on its end.
In future releases it will be fixed and named ACME !zone(s) will be used.

##2) Indentation
This goes like that:
```
		[tab2]				[tab6]
Label		LDA #0				;$xxxx
```

CPU opcodes are always on 1st or 2nd tab. If it is 1st tab position, it means
that the purpose of current/called subroutine/memory location is unknown.
Comments are always on 6th tab position. The source is full of ;$xxxx
comments. It is relict from disassembling the KERNAL - those marks helped me
a lot when debugging. Currently the values there are wrong because code is
optimized and reorganized. They will be removed in future releases.

