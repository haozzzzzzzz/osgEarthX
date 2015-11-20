echo 更新OSG...
xcopy .\build\OpenSceneGraph-build-2010\bin\*.dll .\bin\ /s /y /d
xcopy .\build\OpenSceneGraph-build-2010\bin\*.exe .\bin\ /s /y /d

xcopy .\build\OpenSceneGraph-build-2010\lib\*.lib .\lib\ /s /y /d

xcopy .\build\OpenSceneGraph\include\*.* .\include\ /s /y /d
xcopy .\build\OpenSceneGraph-build-2010\include\*.* .\include\ /s /y /d

echo 更新OSGEarth...
xcopy .\build\osgearth-2.6-build-2010\bin\Debug\*.dll .\bin\ /s /y /d
xcopy .\build\osgearth-2.6-build-2010\bin\Debug\*.exe .\bin\ /s /y /d
xcopy .\build\osgearth-2.6-build-2010\bin\Release\*.dll .\bin\ /s /y /d
xcopy .\build\osgearth-2.6-build-2010\bin\Release\*.exe .\bin\ /s /y /d

xcopy .\build\osgearth-2.6-build-2010\lib\Debug\*.dll .\bin\ /s /y /d
xcopy .\build\osgearth-2.6-build-2010\lib\Release\*.dll .\bin\ /s /y /d

xcopy .\build\osgearth-2.6-build-2010\lib\Debug\*.lib .\lib\ /s /y /d
xcopy .\build\osgearth-2.6-build-2010\lib\Release\*.lib .\lib\ /s /y /d

xcopy .\build\osgearth-2.6\src\*.  .\include\ /s /y  /d
xcopy .\build\osgearth-2.6\src\*.h  .\include\ /s /y  /d

xcopy .\build\osgearth-2.6\data\*.* .\data\ /s /y /d
xcopy .\build\osgearth-2.6\tests\*.* .\tests\ /s /y /d

echo 更新第三方库
xcopy .\build\3rdParty\bin\* .\bin\ /s /y /d

echo 更新osgX_相关库
xcopy .\build\osgearth-2.6-build-2010\bin\osgXd.dll .\bin\ /s /y /d
xcopy .\build\osgearth-2.6-build-2010\bin\osgX.dll .\bin\ /s /y /d
xcopy .\build\osgearth-2.6-build-2010\bin\osgX_Threadsd.dll .\bin\ /s /y /d
xcopy .\build\osgearth-2.6-build-2010\bin\osgX_Threads.dll .\bin\ /s /y /d