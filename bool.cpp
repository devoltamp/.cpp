#include <iostream>
using namespace std;

int main(){

    bool ok = true;

    cout << ok << endl;
    cout << boolalpha << ok << endl;

    /* ref. manipulator,cpp */
    cout.setf(ios::boolalpha);
    cout << ok << endl;
    return 0;
}
