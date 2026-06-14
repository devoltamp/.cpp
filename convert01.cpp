/* char. to all sorts of #ns */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

    char ch;
    int num = ' ';

    puts("enter a single char.");
    cin >> ch;
    num = ch;

    cout << uppercase;
    /* uppercase is sticky */
    cout << setw(10) << oct << num << endl;
    cout << setw(10) << dec << num << endl;
    cout << setw(10) << hex << num << endl;

    return 0;
}
