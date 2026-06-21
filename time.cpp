/* if the current time is not taken
it will print 1970 */

#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;

int main(){

    long sec;
    while (1){

        time(&sec);
        string o_tm = ctime(&sec);

        /* greetings and all could be added
        via substring
        & also the time and date could be
        seperate too
        -- but i'm not gonna do that */
        o_tm.erase(0, 11);
        o_tm.erase(9);
        cout << o_tm << endl << flush;
        Sleep(1000);
    }
    return 0;
}
