﻿'--------------------------------------------------------------------------------------------
'  Copyright (c) Ji-Feng Tsai. All rights reserved.
'  Code released under the MIT license.
'--------------------------------------------------------------------------------------------

Type UnRARArchive
  Public
  
  Function _Create() As Long
    
  End Function
  
  ' <summary>
  ' OpenArchive
  ' <param name="ArchiveData"></param>
  ' <returns>Returns long.</returns>
  Function OpenArchive (ByRef ArchiveData As RAROpenArchiveData) As Long
    Function = RAROpenArchive(ArchiveData)
  End Function
  
  ' <summary>
  ' OpenArchiveEx
  ' <param name="ArchiveData"></param>
  ' <returns>Returns long.</returns>
  Function OpenArchiveEx (ByRef ArchiveData As RAROpenArchiveDataEx) As Long
    Function = RAROpenArchiveEx(ArchiveData)
  End Function
  
  ' <summary>
  ' CloseArchive
  ' <param name="hArcData"></param>
  ' <returns>Returns long.</returns>
  Function CloseArchive (ByVal hArcData As Long) As Long
    Function = RARCloseArchive(hArcData)
  End Function
  
  ' <summary>
  ' ReadHeader
  ' <param name="hArcData"></param>
  ' <param name="HeaderData"></param>
  ' <returns>Returns long.</returns>
  Function ReadHeader (ByVal hArcData As Long, ByRef HeaderData As RARHeaderData) As Long
    Function = RARReadHeader(hArcData, HeaderData)
  End Function
  
  ' <summary>
  ' ReadHeaderEx
  ' <param name="hArcData"></param>
  ' <param name="HeaderData"></param>
  ' <returns>Returns long.</returns>
  Function ReadHeaderEx (ByVal hArcData As Long, ByRef HeaderData As RARHeaderDataEx) As Long
    Function = RARReadHeaderEx(hArcData, HeaderData)
  End Function
  
  ' <summary>
  ' ProcessFile
  ' <param name="hArcData"></param>
  ' <param name="Operation"></param>
  ' <param name="DestPath"></param>
  ' <param name="DestName"></param>
  ' <returns>Returns long.</returns>
  Function ProcessFile (ByVal hArcData As Long, ByVal Operation As Long, ByVal DestPath As String, ByVal DestName As String) As Long
    Function = RARProcessFile(hArcData, Operation, DestPath, DestName)
  End Function
  
  ' <summary>
  ' ProcessFileW
  ' </summary>
  ' <param name="hArcData"></param>
  ' <param name="Operation"></param>
  ' <param name="DestPath"></param>
  ' <param name="DestName"></param>
  ' <returns>Returns long.</returns>
  Function ProcessFileW (ByVal hArcData As Long, ByVal Operation As Long, ByVal DestPath As String, ByVal DestName As String) As Long
    Function = RARProcessFileW(hArcData, Operation, DestPath, DestName)
  End Function
  
  ' <summary>
  ' SetCallback
  ' </summary>
  ' <param name="hArcData"></param>
  ' <param name="UnRARCallback"></param>
  ' <param name="UserData"></param>
  ' <returns>Returns void.</returns>
  Sub SetCallback (ByVal hArcData As Long, Byval UnRARCallback As Long, Byval UserData As Long)
    RARSetCallback(hArcData, UnRARCallback, UserData)
  End Sub 
  
  ' <summary>
  ' SetChangeVolProc
  ' </summary>
  ' <param name="hArcData"></param>
  ' <param name="Mode"></param>
  ' <returns>Returns void.</returns>
  Sub SetChangeVolProc (ByVal hArcData As Long, ByVal Mode As Long)
    RARSetChangeVolProc(hArcData, Mode)
  End Sub 
  
  ' <summary>
  ' SetProcessDataProc
  ' </summary>
  ' <param name="hArcData"></param>
  ' <param name="ProcessDataProc"></param>
  ' <returns>Returns void.</returns>
  Sub SetProcessDataProc (ByVal hArcData As Long, ByVal ProcessDataProc As Long)
    RARSetProcessDataProc(hArcData, ProcessDataProc)
  End Sub 

  ' <summary>
  ' SetPassword
  ' </summary>
  ' <param name="hArcData"></param>
  ' <param name="Password"></param>
  ' <returns>Returns void.</returns>
  Sub SetPassword (ByVal hArcData As Long, ByVal Password As String)
    RARSetPassword(hArcData, Password)
  End Sub
  
  ' <summary>
  ' GetDllVersion
  ' </summary>
  ' <returns>Returns integer.</returns>
  Function GetDllVersion () As Integer
    Function = GetDllVersion()
  End Function
End Type
 