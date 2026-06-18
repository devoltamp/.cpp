#include <iostream>
using namespace std;

#define __name NAME

int main(){

    #ifdef __name
    puts("there there!");
    #endif
    #ifndef __name
    puts("not there!");
    #endif
    return 0;
}
/* very useful when the sys. dependent
code is to be written */
