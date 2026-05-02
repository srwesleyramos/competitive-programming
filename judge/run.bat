echo off
cls

@REM ----------------------------------
@REM            COMPILACAO
@REM ----------------------------------

g++ -o code.exe ..\code.cpp

@REM ----------------------------------
@REM             TESTES
@REM ----------------------------------

set i=1

:loop
    if not exist .\%i%\input.txt goto end

    echo ----------------------------------
    echo Teste #%i%
    echo ----------------------------------

    code.exe < .\%i%\input.txt > .\%i%\result.txt

    fc .\%i%\result.txt .\%i%\output.txt > nul

    if %errorlevel% neq 0 (
        echo.
        echo Esperado:
        echo --
        type .\%i%\output.txt
        echo.
        echo Recebido:
        echo --
        type .\%i%\result.txt
        echo.
    ) else (
        echo.
        echo O teste passou corretamente.
        echo.
    )

    pause
    del .\%i%\result.txt
    cls
    set /a i+=1
    goto loop
:end

@REM ----------------------------------
@REM            LIMPEZA
@REM ----------------------------------

del .\code.exe