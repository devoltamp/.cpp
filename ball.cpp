#include <iostream>
#include <string>
// #include "ball.hpp"
#include <windows.h>
using namespace std;

#define DELAY 10000000L
#define CLS (cout << "\033[2J");
/* i liked this CLS part */
#define LOCATE(z, s) (cout << "\033[" << z << ';' << s << 'H')
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING 0x0004


int main(){

    int x = 2,
        y = 3,
        dx = 1,
        speed = 0;
    string floor(79, '-'), header = "--- jumping ball ---";

    /* the required block */
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD dwMode = 0;
    GetConsoleMode(hOut, &dwMode);
    dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
    SetConsoleMode(hOut, dwMode);

    CLS;
    LOCATE(1, 25);
    cout << header;
    LOCATE(25, 1);
    cout << floor;

    while(1){

        LOCATE(y, x);   cout << 'o' << endl;
        for (long wait = 0; wait < DELAY; ++wait)
            ;

        /* gotta be both false */
        if (x == 1 || x == 79)
            dx = -dx;
        if (y == 24){
            speed = -speed;
            if (speed == 0) speed = -7;
        }

        Sleep(1);
        speed += 1;
        LOCATE(y, x); cout << ' ';
        y += speed; x += dx;
    }
    return 0;
}

/* i thought this was going to be a little interactive
-- but i was wrong
edit -- this does work */
