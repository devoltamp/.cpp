/* floating formate */

#include <iostream>
using namespace std;

int main(){

    double x = 2.0;

    /* the precision will matter it's like a script
    in order to work out the other part */
    cout.precision(2);
    cout << x << endl;
    cout << showpoint << x << endl;
    cout << fixed << x << endl;
    cout << scientific << x << endl;
    return 0;
}
