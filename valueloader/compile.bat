@echo off
call "E:\kosz\QGIS\bin\o4w_env.bat"
call "E:\kosz\QGIS\bin\qt5_env.bat"
call "E:\kosz\QGIS\bin\py3_env.bat"

@echo on
pyrcc5 -o resources.py resources.qrc