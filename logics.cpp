/* i always make mistakes in the && or ||
-- idk why */
#include <iostream>
#include <string>
using namespace std;

int main(){

    string line(2, '-');

    /* [1] */
    bool a, b = 1;
    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << line << endl;

    /* [2] */
    a = 1, b = 0;
    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << line << endl;

    /* [3] */
    a = 0, b = 1;
    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << line << endl;

    /* [4] */
    a = 0, b = 0;
    cout << (a && b) << endl;
    cout << (a || b) << endl;
    // cout << line << endl;

    return 0;
}
