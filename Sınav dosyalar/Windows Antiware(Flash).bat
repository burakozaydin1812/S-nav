mkdir "%USERPROFILE%\\WindowsAntiware"
mkdir "%USERPROFILE%\\WindowsAntiware\\Files"
xcopy "%CD%" "%USERPROFILE%\\WindowsAntiware" /Y
"%USERPROFILE%\\WindowsAntiware\\Windows Antiware.vbs"