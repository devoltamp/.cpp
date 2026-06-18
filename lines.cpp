#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){

    string line;
    int num = 0;

    while(getline(cin, line, '.')){
        cout << setw(0) << ++num << ": " << line << endl;
    }
    /* the . is the manual interept */
    return 0;
}
