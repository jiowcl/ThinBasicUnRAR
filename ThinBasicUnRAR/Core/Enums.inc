'--------------------------------------------------------------------------------------------
'  Copyright (c) Ji-Feng Tsai. All rights reserved.
'  Code released under the MIT license.
'--------------------------------------------------------------------------------------------

$ERAR_SUCCESS          =  0
$ERAR_END_ARCHIVE      = 10
$ERAR_NO_MEMORY        = 11
$ERAR_BAD_DATA         = 12
$ERAR_BAD_ARCHIVE      = 13
$ERAR_UNKNOWN_FORMAT   = 14
$ERAR_EOPEN            = 15
$ERAR_ECREATE          = 16
$ERAR_ECLOSE           = 17
$ERAR_EREAD            = 18
$ERAR_EWRITE           = 19
$ERAR_SMALL_BUF        = 20
$ERAR_UNKNOWN          = 21
$ERAR_MISSING_PASSWORD = 22
$ERAR_EREFERENCE       = 23
$ERAR_BAD_PASSWORD     = 24

$RAR_OM_LIST           =  0
$RAR_OM_EXTRACT        =  1
$RAR_OM_LIST_INCSPLIT  =  2

$RAR_SKIP            = 0
$RAR_TEST            = 1
$RAR_EXTRACT         = 2

$RAR_VOL_ASK         = 0
$RAR_VOL_NOTIFY      = 1

$RAR_DLL_VERSION     = 8

$RAR_HASH_NONE       = 0
$RAR_HASH_CRC32      = 1
$RAR_HASH_BLAKE2     = 2

$UCM_CHANGEVOLUME  = 0
$UCM_PROCESSDATA   = 1
$UCM_NEEDPASSWORD  = 2
$UCM_CHANGEVOLUMEW = 3
$UCM_NEEDPASSWORDW = 4

' Type

' RARHeaderData
Type RARHeaderData
  ArcName    As Asciiz * 260
  FileName   As Asciiz * 260
  Flags      As Long
  PackSize   As Long
  UnpSize    As Long
  HostOS     As Long
  FileCRC    As Long
  FileTime   As Long
  UnpVer     As Long
  Method     As Long
  FileAttr   As Long
  CmtBuf     As String
  CmtBufSize As Long
  CmtSize    As Long
  CmtState   As Long
End Type

' RARHeaderDataEx
Type RARHeaderDataEx
  ArcName       As Asciiz * 1024
  ArcNameW      As ZString * 1024
  FileName      As Asciiz * 1024
  FileNameW     As ZString * 1024
  Flags         As Long
  PackSize      As Long
  PackSizeHigh  As Long
  UnpSize       As Long
  UnpSizeHigh   As Long
  HostOS        As Long
  FileCRC       As Long
  FileTime      As Long
  UnpVer        As Long
  Method        As Long
  FileAttr      As Long
  CmtBuf        As String
  CmtBufSize    As Long
  CmtSize       As Long
  CmtState      As Long
  DictSize      As Long
  HashType      As Long
  Hash As       ZString * 32
  RedirType     As Long
  RedirName     As String
  DirTarget     As Long
  MtimeLow      As Long
  MtimeHigh     As Long
  CtimeLow      As Long
  CtimeHigh     As Long
  AtimeLow      As Long
  AtimeHigh     As Long
  Reserved(988) As Long
End Type

' RAROpenArchiveData
Type RAROpenArchiveData
  ArcName    As String
  OpenMode   As Long
  OpenResult As Long
  CmtBuf     As String
  CmtBufSize As Long
  CmtSize    As Long
  CmtState   As Long
End Type

' RAROpenArchiveDataEx
Type RAROpenArchiveDataEx
  ArcName       As String
  ArcNameW      As String 
  OpenMode      As Long
  OpenResult    As Long
  CmtBuf        As String
  CmtBufSize    As Long
  CmtSize       As Long
  CmtState      As Long
  Flags         As Long
  UnRARCallback As Long
  UserData      As Long
  OpFlags       As Long
  CmtBufW       As String
  Reserved(25)  As Long
End type
