void subx123()
{
    // login
    std::string p;
    std::cout << "Type your key -> ";
    std::cin >> p;
    if (p == "Th1s 1s Y0ur K3y")
    {
        std::cout << "succes!";
        system("pause");
    }
}

void subx553()
{
    while (true)
    {
        // x86dbg
        if (system("for /f \"tokens=1\" %a in ('tasklist /m x64dbg.dll ^| find \"x64dbg.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        if (system("for /f \"tokens=1\" %a in ('tasklist /m x32dbg.dll ^| find \"x32dbg.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        if (system("for /f \"tokens=1\" %a in ('tasklist /m scylla.dll ^| find \"scylla.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        if (system("for /f \"tokens=1\" %a in ('tasklist /m scylla_hide.dll ^| find \"scylla_hide.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // id
        if (system("for /f \"tokens=1\" %a in ('tasklist /m ida.dll ^| find \"ida.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        if (system("for /f \"tokens=1\" %a in ('tasklist /m idapython.dll ^| find \"idapython.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        if (system("for /f \"tokens=1\" %a in ('tasklist /m idaw.dll ^| find \"idaw.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // systeminformer
        if (system("for /f \"tokens=1\" %a in ('tasklist /m DotNetTools.dll ^| find \"DotNetTools.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // onlydbg
        if (system("for /f \"tokens=1\" %a in ('tasklist /m ollydbg.dll ^| find \"ollydbg.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // Ghrida
        if (system("for /f \"tokens=1\" %a in ('tasklist /m Ghidra.dll ^| find \"Ghidra.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // Proces Hacker
        if (system("for /f \"tokens=1\" %a in ('tasklist /m ProcessHacker.dll ^| find \"ProcessHacker.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        if (system("for /f \"tokens=1\" %a in ('tasklist /m KProcessHacker.dll ^| find \"KProcessHacker.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // petools
        if (system("for /f \"tokens=1\" %a in ('tasklist /m petools.dll ^| find \"petools.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // Cheat Engine
        if (system("for /f \"tokens=1\" %a in ('tasklist /m cheatengine.dll ^| find \"cheatengine.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            exit(0);
        }
        // redare2
        if (system("for /f \"tokens=1\" %a in ('tasklist /m r2.dll ^| find \"r2.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // upx
        if (system("for /f \"tokens=1\" %a in ('tasklist /m upx.dll ^| find \"upx.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // themida
        if (system("for /f \"tokens=1\" %a in ('tasklist /m themida.dll ^| find \"themida.dll\"') do taskkill /im %a /f >nul 2>&1") == 0)
        {
            system("cls");
            exit(0);
        }
        // replace here with more SystemCalls and change the name of dll for the reversing program hunter


        // sleep for while
        Sleep(600);
    }
}