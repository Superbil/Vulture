Name "Vulture's Eye"
OutFile "vultures-a.b.c-eye_win32-d.exe"
InstallDir "$PROGRAMFILES\Vulture's Eye"

;--------------------------------

Page directory
Page instfiles

;--------------------------------

Section ""
  SetOutPath $INSTDIR
  File ..\..\nethack\binary\*
  SetOutPath $INSTDIR\config
  File ..\..\nethack\binary\config\*
  SetOutPath $INSTDIR\graphics
  File ..\..\nethack\binary\graphics\*
  SetOutPath $INSTDIR\manual
  File ..\..\nethack\binary\manual\*
  SetOutPath $INSTDIR\sound
  File ..\..\nethack\binary\sound\*

  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\VulturesEye" "DisplayName" "Vulture's Eye"
  WriteRegStr HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\VulturesEye" "UninstallString" '"$INSTDIR\uninstall.exe"'
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\VulturesEye" "NoModify" 1
  WriteRegDWORD HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\VulturesEye" "NoRepair" 1
  WriteUninstaller "uninstall.exe"
SectionEnd

Section "Desktop icon" SecDesktop
  SetOutPath $INSTDIR
  CreateShortcut "$DESKTOP\Vulture's Eye.lnk" "$INSTDIR\VulturesEye.exe" "" "$INSTDIR\VulturesEye.exe" 0
SectionEnd

Section "Start Menu Shortcuts"
  SetOutPath $INSTDIR
  CreateDirectory "$SMPROGRAMS\Vulture's Eye"
  CreateShortCut "$SMPROGRAMS\Vulture's Eye\Play Vulture's Eye.lnk" "$INSTDIR\VulturesEye.exe" "" "$INSTDIR\VulturesEye.exe" 0
  CreateShortCut "$SMPROGRAMS\Vulture's Eye\Manual.lnk" "$INSTDIR\manual\index.html" "" "$INSTDIR\manual\index.html" 0
  CreateShortCut "$SMPROGRAMS\Vulture's Eye\Darkarts Studios.lnk" "http://www.darkarts.co.za" "" "http://www.darkarts.co.za" 0
  CreateShortCut "$SMPROGRAMS\Vulture's Eye\Uninstall Vulture's Eye.lnk" "$INSTDIR\uninstall.exe" "" "$INSTDIR\uninstall.exe" 0
SectionEnd

Section "Uninstall"
  DeleteRegKey HKLM "Software\Microsoft\Windows\CurrentVersion\Uninstall\VulturesEye"
  DeleteRegKey HKLM SOFTWARE\VulturesEye
  Delete $INSTDIR\config\*
  Delete $INSTDIR\graphics\*
  Delete $INSTDIR\manual\*
  Delete $INSTDIR\sound\*
  Delete $INSTDIR\*
  RMDir "$INSTDIR\config"
  RMDir "$INSTDIR\graphics"
  RMDir "$INSTDIR\manual"
  RMDir "$INSTDIR\sound"
  RMDir "$INSTDIR"
  Delete "$SMPROGRAMS\Vulture's Eye\Play Vulture's Eye.lnk"
  Delete "$SMPROGRAMS\Vulture's Eye\Manual.lnk"
  Delete "$SMPROGRAMS\Vulture's Eye\Darkarts Studios.lnk"
  Delete "$SMPROGRAMS\Vulture's Eye\Uninstall Vulture's Eye.lnk"
  RMDir "$SMPROGRAMS\Vulture's Eye"
  Delete "$DESKTOP\Vulture's Eye.lnk"
SectionEnd