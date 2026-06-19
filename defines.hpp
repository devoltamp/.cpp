#include <windows.h>

#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004
#define CLS (cout << "\033[2J")
#define LOCATE(z, s) (cout << "\033[" << z << ';' << s << 'H')
#define PI 3.1415926536


/* custom block for windows
kinda good */
void win(void){

    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);
}
