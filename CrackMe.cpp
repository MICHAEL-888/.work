//
// Created by Michael on 2024/3/9.
//
#include <bits/stdc++.h>
#include <windows.h>

#define endl '\n'
using namespace std;

int main() {
    //SetConsoleCP(65001);
    //SetConsoleOutputCP(65001);
    //wstring FILENAME;
    //wcout << "Please enter the FILENAME:" << endl;
    //wcin >> FILENAME;
    //const WCHAR *pstr = FILENAME.c_str();

    HANDLE hFile = CreateFileW(L"اللغة العربية.exe",
                               GENERIC_READ | GENERIC_WRITE,
                               0,
                               NULL,
                               OPEN_EXISTING,
                               FILE_ATTRIBUTE_NORMAL,
                               NULL);


    if (hFile == INVALID_HANDLE_VALUE) {
        DWORD error = GetLastError();
        if (error == ERROR_FILE_NOT_FOUND || error == ERROR_PATH_NOT_FOUND) {
            cout << "ERROR_FILE_NOT_FOUND" << endl;
        }
    } else {
        cout << "FILE_EXISTING" << endl;
        CloseHandle(hFile);
    }
    system("pause");
    return 0;
}