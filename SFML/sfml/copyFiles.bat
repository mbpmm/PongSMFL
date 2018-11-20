echo Copiando archivos

XCOPY "%1libs\SFML-2.5.1\bin\sfml-graphics-d-2.dll" %2 /E /Y /S
XCOPY "%1libs\SFML-2.5.1\bin\sfml-system-d-2.dll" %2 /E /Y /S
XCOPY "%1libs\SFML-2.5.1\bin\sfml-window-d-2.dll" %2 /E /Y /S
XCOPY "%1libs\STP\bin\STP-d.dll" %2 /E /Y /S
XCOPY "%1libs\STP\bin\zlibd.dll" %2 /E /Y /S
mkdir "%2res"
xcopy "%1res\assets" "%2res\assets" /E /Y /S /C

::"C:\Users\Administrador\Desktop\SFMLGame\SFML\"
::XCOPY ""C:\Users\Administrador\Desktop\SFMLGame\SFML\"libs\SFML-2.5.1\bin\sfml-system-d-2.dll" "C:\Users\Administrador\Desktop\SFMLGame\SFML\bin\Win32\Debug\" /E /Y /S 

::xcopy ""C:\Users\Administrador\Desktop\SFMLGame\SFML\"res\assets" ""C:\Users\Administrador\Desktop\SFMLGame\SFML\bin\Win32\Debug\"res\assets" /E /Y /S