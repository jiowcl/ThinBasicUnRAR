﻿'--------------------------------------------------------------------------------------------
'  Copyright (c) Ji-Feng Tsai. All rights reserved.
'  Code released under the MIT license.
'--------------------------------------------------------------------------------------------

' Declare Function

' <summary>
' RAROpenArchive
' </summary>
' <param name="ArchiveData"></param>
' <returns>Returns long.</returns>
Declare Function RAROpenArchive Lib "UnRAR.dll" Alias "RAROpenArchive" (ByRef ArchiveData As RAROpenArchiveData) As Long

' <summary>
' RAROpenArchiveEx
' </summary>
' <param name="ArchiveData"></param>
' <returns>Returns long.</returns>
Declare Function RAROpenArchiveEx Lib "UnRAR.dll" Alias "RAROpenArchiveEx" (ByRef ArchiveData As RAROpenArchiveDataEx) As Long

' <summary>
' RARCloseArchive
' </summary>
' <param name="hArcData"></param>
' <returns>Returns long.</returns>
Declare Function RARCloseArchive Lib "UnRAR.dll" Alias "RARCloseArchive" (ByVal hArcData As Long) As Long

' <summary>
' RARReadHeader
' </summary>
' <param name="hArcData"></param>
' <param name="HeaderData"></param>
' <returns>Returns long.</returns>
Declare Function RARReadHeader Lib "UnRAR.dll" Alias "RARReadHeader" (ByVal hArcData As Long, ByRef HeaderData As RARHeaderData) As Long

' <summary>
' RARReadHeaderEx
' </summary>
' <param name="hArcData"></param>
' <param name="HeaderData"></param>
' <returns>Returns long.</returns>
Declare Function RARReadHeaderEx Lib "UnRAR.dll" Alias "RARReadHeaderEx" (ByVal hArcData As Long, ByRef HeaderData As RARHeaderDataEx) As Long

' <summary>
' RARProcessFile
' </summary>
' <param name="hArcData"></param>
' <param name="Operation"></param>
' <param name="DestPath"></param>
' <param name="DestName"></param>
' <returns>Returns long.</returns>
Declare Function RARProcessFile Lib "UnRAR.dll" Alias "RARProcessFile" (ByVal hArcData As Long, ByVal Operation As Long, ByVal DestPath As ZString Ptr, ByVal DestName As ZString Ptr) As Long

' <summary>
' RARProcessFileW
' </summary>
' <param name="hArcData"></param>
' <param name="Operation"></param>
' <param name="DestPath"></param>
' <param name="DestName"></param>
' <returns>Returns long.</returns>
Declare Function RARProcessFileW Lib "UnRAR.dll" Alias "RARProcessFileW" (ByVal hArcData As Long, ByVal Operation As Long, ByVal DestPath As ZString Ptr, ByVal DestName As ZString Ptr) As Long

' <summary>
' RARSetCallback
' </summary>
' <param name="hArcData"></param>
' <param name="UnRARCallback"></param>
' <param name="UserData"></param>
' <returns>Returns long.</returns>
Declare Function RARSetCallback Lib "UnRAR.dll" Alias "RARSetCallback" (ByVal hArcData As Long, ByVal UnRARCallback As Long, ByVal UserData As Long)

' <summary>
' RARSetChangeVolProc
' </summary>
' <param name="hArcData"></param>
' <param name="Mode"></param>
' <returns>Returns void.</returns>
Declare Sub RARSetChangeVolProc Lib "UnRAR.dll" Alias "RARSetChangeVolProc" (ByVal hArcData As Long, ByVal Mode As Long)

' <summary>
' RARSetProcessDataProc
' </summary>
' <param name="hArcData"></param>
' <param name="ProcessDataProc"></param>
' <returns>Returns void.</returns>
Declare Sub RARSetProcessDataProc Lib "UnRAR.dll" Alias "RARSetProcessDataProc" (ByVal hArcData As Long, ByVal ProcessDataProc As Long)

' <summary>
' RARSetPassword
' </summary>
' <param name="Password"></param>
' <returns>Returns void.</returns>
Declare Sub RARSetPassword Lib "UnRAR.dll" Alias "RARSetPassword" (ByVal hArcData As Long, ByVal Password As ZString Ptr)
 