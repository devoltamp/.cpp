#include <iostream>
#include <conio.h>
using namespace std;

int main(){

    int c;
    puts("press any key to stop...");

    while(!_kbhit()){
        ;
    }
    c = _getch();
    _putch(c);
    return 0;
}
