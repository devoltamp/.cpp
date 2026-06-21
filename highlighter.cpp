/* just like google
-- that they highlight the text findings,
this is still string version */
#include <iostream>
#include <string>
#include "defines.hpp"
using namespace std;

#define COLOR(f, b) (cout << "\033[1;3" << (f) << ";4" << (b) << 'm' << flush)
#define WHITE 7
#define BLUE 4
#define GREEN 2

int main(){

    win();
    /* search
    & high lighting the find */
    string s;
    puts("enter the string: ");
    getline(cin, s);
    puts("tofind: ");
    string tofind;
    getline(cin, tofind);


    size_t pos = s.find(tofind);
    /* while (pos != std::string::npos){
        cout << "_at index" << pos << endl;
        pos = s.find(tofind, pos + tofind.length());
    }
    */
    s.insert(pos, "");

    cout << s.substr(0, pos);
    COLOR(WHITE, BLUE);
    cout << tofind;
    COLOR(2, 0);        /* reset color */
    cout << s.substr(pos + tofind.length()) << endl;      /* to print the rest */


    return 0;
}
