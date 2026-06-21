/* if the current time is not taken
it will print 1970 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){

    long sec;
    time(&sec);

    string tm = ctime(&sec);
    cout << tm;

    /* greetings and all could be added
    via substring
    -- but i'm not gonna do that */
    return 0;
}
