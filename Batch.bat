@echo off
call :helloWorld print

:helloWorld
if "%~1"=="print" (
    echo Hello, World!
)