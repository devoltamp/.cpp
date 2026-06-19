/* mostly type casting */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    char temp = 'A';
    cout << temp << endl;
    cout << (int)temp << endl;

    short temp1 = -2;
    cout << dec << temp1 << endl;
    cout << hex << temp1 << endl;

    unsigned short temp2 = temp1;
    cout << hex << temp2 << endl;

    float temp3 = -1.99;
    cout << temp3 << endl;
    cout << (int)temp3 << endl;

    /* the o/p 4294967295 that's beyond int
    the eight F's
    very noice to represent -1 for hex */

    return 0;
}
