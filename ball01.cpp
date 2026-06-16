#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

#define CLS cout << "\033[2J";
#define LOCATE(z, s) (cout << "\033[" << z << ';' << s << 'H')
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004

int main() {

    /* the stack says -- it's required */
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);

    CLS;
    LOCATE(10, 20);
    cout << "hello there @ R10, C20!" << endl;

    return 0;
}
