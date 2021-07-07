# ThinBasicUnRAR

UnRAR Wrapper for ThinBasic Programming Language.

![GitHub](https://img.shields.io/github/license/jiowcl/ThinBasicUnRAR.svg)

## Environment

- Windows 7 above (recommend)  
- ThinBasic 1.10 above (recommend)  
- [UnRAR](https://www.rarlab.com/rar_add.htm)  

## How to Build

Building requires ThinBasic Interpreter and test under Windows 10.  
Type features require ThinBasic 1.4.0 and above.

## Example

Extract the RAR file

```vb
Uses "CONSOLE"

#INCLUDE Once ".\Core\Enums.inc"
#INCLUDE Once ".\Core\Runtime.inc"
#Include Once ".\Core\RARArchive.inc"
#Include Once ".\Core\UnRARWrapper.inc"

Dim UnRAR As UnRARArchive

Global lpszSampleFilePath As String

Global ArchiveData As RAROpenArchiveDataEx
Global HeaderData As RARHeaderDataEx

Global hRARArchiveHandle As Long
Global hUnRARProcCode As Long

lpszSampleFilePath = ".\TestFile\example.rar"

ArchiveData.ArcNameW = Ascii2Unicode(lpszSampleFilePath)
ArchiveData.OpenMode = $RAR_OM_EXTRACT
ArchiveData.CmtBuf = ""
ArchiveData.CmtBufSize = 0

hRARArchiveHandle = UnRAR.OpenArchiveEx(ArchiveData)

If ArchiveData.OpenResult = $ERAR_SUCCESS Then
  Printl("Source: " . lpszSampleFilePath)

  While UnRAR.ReadHeaderEx(hRARArchiveHandle, HeaderData) = $ERAR_SUCCESS
    hUnRARProcCode = UnRAR.ProcessFileW(hRARArchiveHandle, $RAR_TEST, "", "")
    
    Printl "Test File: " . HeaderData.FileNameW
  Wend
End If

UnRAR.CloseArchive(hRARArchiveHandle)
```

## License

Copyright (c) 2020-2021 Ji-Feng Tsai.  
Code released under the MIT license.  

## TODO

- More examples  

## Donation

If this application help you reduce time to coding, you can give me a cup of coffee :)

[![paypal](https://www.paypalobjects.com/en_US/TW/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=3RNMD6Q3B495N&source=url)

[Paypal Me](https://paypal.me/jiowcl?locale.x=zh_TW)
