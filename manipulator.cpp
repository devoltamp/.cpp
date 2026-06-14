#include <iostream>
using namespace std;

int main(){

    cout << showpos << 123;
    cout << "\n";

    /* another method */
    cout.setf(ios::showpos);    /* + */
    cout << 123;

    cout << "\n";
    cout << noshowpos << 123;
    cout << "\n";

    /* same as the upper one */
    cout.unsetf(ios::showpos);
    cout << 123;
    return 0;
}
