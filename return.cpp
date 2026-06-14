#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    char ch;
    string word;
    puts("enter a char: ");
    cin >> ch;

    puts("three char max: ");
    cin >> setw(4) >> word;
    /* it's a string that why the 3 limit was allowed */

    cout << ch << endl;
    cout << word << endl;

    return 0;
}
