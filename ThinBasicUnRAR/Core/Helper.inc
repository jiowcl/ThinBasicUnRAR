'--------------------------------------------------------------------------------------------
'  Copyright (c) Ji-Feng Tsai. All rights reserved.
'  Code released under the MIT license.
'--------------------------------------------------------------------------------------------

' Windows APIs 
$SCS_32BIT_BINARY = 0
$SCS_64BIT_BINARY = 6
$SCS_DOS_BINARY   = 1
$SCS_OS216_BINARY = 5
$SCS_PIF_BINARY   = 3
$SCS_POSIX_BINARY = 4
$SCS_WOW_BINARY   = 2

' Declare Function

' <summary>
' GetBinaryType
' </summary>
' <param name="lpApplicationName"></param>
' <param name="lpBinaryType"></param>
' <returns>Returns boolean.</returns>
Declare Function GetBinaryType Lib "kernel32" Alias "GetBinaryTypeA" (ByVal lpApplicationName As String, Byref lpBinaryType As Long) As Boolean