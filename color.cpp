/* it's all about macros
man this thing requires 7 more
lines to work */
#include <iostream>
#include <windows.h>
using namespace std;

#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
#define COLOR(f, b) (cout << "\033[1;3" << (f) << ";4" << (b) << 'm' << flush)
#define CLS cout << "\033[0J";
#define WHITE 7
#define BLUE 4

int main(){

    /* why blow the foot? -- bjarne */
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);

    CLS;
    COLOR(WHITE, BLUE);
    puts("kinda good");
    return 0;
}
