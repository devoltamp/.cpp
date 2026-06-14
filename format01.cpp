#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float x;
    int fieldwidth = cout.width();

    cout.width(100);
    cout << "hello there!" << endl;
    cout << fieldwidth << endl;

    /* setw() */
    cout << setw(10) << 'X' << endl;
    cout << setw(10) << "hola" << endl;

    puts("enter x: ");
    cin >> x;
    cout << setw(10) << internal << x << endl;
    /* internal seperates the sign */

    cout.width(10);
    cout.fill('*');
    cout << 12 << endl;

    return 0;
}

/* width() -- method always .
and setw() -- manipulator always <<
cout.width(10);
cout << setw(10);
it'll only work one at a time */
