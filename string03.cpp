#include <iostream>
#include <string>
#include "defines.hpp"
using namespace std;

#define COLOR(f, b) (cout << "\033[1;3" << (f) << ";4" << (b) << 'm' << flush)
#define WHITE 7
#define BLUE 4

int main(){

    /* replace */
    string s1("there they go again!"),
    s2("bob and bill");
    s1.replace(6, 4, s2);
    cout << s1 << endl;

    string s3("here comes mike!"),
    s4("my brother?");
    s3.replace(11, 4, s4, 0, 11);
    cout << s3 << endl;



    return 0;
}
