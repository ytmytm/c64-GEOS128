
;GEOS system variables
;by Maciej 'YTM/Alliance' Witkowiak
;19-3-99, 15-7-2001

;GEOS Kernal internal zpage vectors (not for use by apps)
IconDescVec	=	$40
CallRLo		=	$42
CallRHi		=	$43
DBoxDesc	=	$44
DBoxDescH	=	$45

;addresses defined so-so
Z46		=	$46		;was Z45, in kernal1-1.tas

z8b		=	$8b
z8c		=	$8c
z8d		=	$8d
z8e		=	$8e
z8f		=	$8f

;Commodore Kernal equations
tapeBuffVec	=	$b2
curScrLine	=	$d1
curPos		=	$d3
kbdQuePos	=	$c6
kbdQue		=	$0277
BASICMemBot	=	$0282
BASICMemTop	=	$0284
scrAddyHi	=	$0288
PALNTSCFLAG	=	$0a03
BASICspace	=	$1c00
BASIC_START	=	$a000
curScrLineColor =	$d8f0
KERNALVecTab	=	$fd30
KERNALCIAInit	=	$fda3
KERNALVICInit	=	$ff81
sysFlgSave	=	$fff5
EFF3D		=	$ff3d		; this is in ROM
CBM_RestoreVectors=	$ff8a		; this is through ExecCBMKernal

; (BASIC start related)
E0A00		=	$0a00		;
E0A02		=	$0a02		;
E0A04		=	$0a04		;
E0E00		=	$0e00		; BASIC line kickstart?
E0E28		=	$0e28		;
E0E29		=	$0e29		;
E0E2C		=	$0e2c		;
E0E2D		=	$0e2d		;
E0E2E		=	$0e2e		; copied code to execute BASIC
E0EDA		=	$0eda		; nmi vector in copied code (calculate this!)

; sprite emulator stuff (bank0 - lower)
E1300		=	$1300		; mobenble copy
E1301		=	$1301		; moby2 copy
E1302		=	$1302		; mobx2 copy
E1303		=	$1303
E1304		=	$1304
E1313		=	$1313
E131B		=	$131b
E131C		=	$131c
E132B		=	$132b
E1333		=	$1333
E133B		=	$133b		; data tables up to 1b45
E1B45		=	$1b45		; 7 byte buffer
E1B4C		=	$1b4c
E1B54		=	$1b54		; dirty flag - if nonzero sprites are redrawn
E1B55		=	$1b55
E1B6D		=	$1b6d		; data of 192(200?) bytes
E1C2D		=	$1c2d		; as above
; VDC drawing code
E1CED		=	$1ced		; VDC linebuffer?

;GEOS Kernal internal vars (not for use by apps)
menuOptNumber	=	$86c0
menuTop 	=	$86c1
menuBottom	=	$86c2
menuLeft	=	$86c3
menuRight	=	$86c5
menuStackL	=	$86c7
menuStackH	=	$86cb
menuOptionTab	=	$86cf
menuLimitTabL	=	$86d3
menuLimitTabH	=	$86e2
TimersTab	=	$86f1
TimersCMDs	=	$8719
TimersRtns	=	$872d
TimersVals	=	$8755
NumTimers	=	$877d
DelaySP 	=	$877e
DelayValL	=	$877f
DelayValH	=	$8793
DelayRtnsL	=	$87a7
DelayRtnsH	=	$87bb
stringLen	=	$87cf
stringMaxLen	=	$87d0
tmpKeyVector	=	$87d1
stringMargCtrl	=	$87d3
GraphPenX	=	$87d4
GraphPenXL	=	$87d4
GraphPenXH	=	$87d5
GraphPenY	=	$87d6
KbdQueHead	=	$87d7
KbdQueTail	=	$87d8
KbdQueFlag	=	$87d9
KbdQueue	=	$87da
KbdNextKey	=	$87ea
KbdDBncTab	=	$87eb
KbdDMltTab	=	$87f6

E8802		=	$8802		;was 87fc ; used in font functions
E8803		=	$8803		;was 87fd
E8804		=	$8804		;was 87fe
E8805		=	$8805	 	;was 87ff
E8806		=	$8806		;was 8800 (part of previous E8805+1)

PrvCharWidth	=	$880d		;*in kernal1-1.tas
FontTVar1	=	$880e		;was e391
FontTVar2	=	$880f		;was e392 (word)

clkBoxTemp	=	$8819
E881A		=	$881a		;*in kernal1-1.tas
clkBoxTemp2	=	$881b
alarmWarnFlag	=	$881c
defIconTab	=	$881f

DeskAccPC	=	$8863		; was: 8850
DeskAccSP	=	$8865		; was: 8852
dlgBoxCallerPC	=	$8866
dlgBoxCallerSP	=	$8868
DBGFilesFound	=	$8869
DBGFOffsLeft	=	$886a
DBGFOffsTop	=	$886b
DBGFNameTable	=	$886c
DBGFTableIndex	=	$886e
DBGFileSelected	=	$886f
E8870		=	$8870		; was: 885D
E8871		=	$8871
E8872		=	$8872		; was: 885E
E8873		=	$8873		; was: 885E/5F
RecordDirTS	=	$8875
RecordDirOffs	=	$8877
RecordTableTS	=	$8879
verifyFlag	=	$887b
TempCurDrive	=	$887c
E887D		=	$887d
E887E		=	$887e
E888D		=	$888d		; used in bitmap functions
E888E		=	$888e
E888F		=	$888f
E8890		=	$8890
E8891		=	$8891		; copy of X - Lo position of pointer
E8892		=	$8892		; X - Hi
E8893		=	$8893		; Y
krnlSaveMMU	=	$8894
krnlSaveConfig	=	$8895
krnlSaveA	=	$8896
bank0SaveMMU	=	$8897
bank0SaveA	=	$8898
bank0SavePS	=	$8899

;GEOS BOOT and REU reboot adresses
InitKernal	=	$5000
BVBuff		=	$0400
RunREU		=	$6000

;RamExp stats block structure
;DACC_ST_ADDR	=	$80	;deskAccessory load addy
;DACC_LGH	=	$82	;deskAccessory lenght
;DTOP_CHNUM	=	$83	;DeskTop # of chains
;RAM_EXP_1STFREE	=	$84	;# of 1st free block
;DTOP_CHAIN	=	$85	;# of DTop chains, (=6) up to $98

;--------------
; VDC memory
COLOR_MATRIX_80_1	= $3880 ;constant value
COLOR_MATRIX_80_2	= $4080	;constant value
; Bank0 memory
TRACK_CACHE		= $ac00 ;constant
DISK_SWAPBASE		= $d000 ;constant
DISK_DRV_LGH		= $0d80 ;constant, is already defined (or similar name)
