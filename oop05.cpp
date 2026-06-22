/* almost same as oop4 */
#include <iostream>
#include <string>
using namespace std;

class _car{
public:
    string brand,
    model;
    int year;

    /* constructor with parameters */
    _car(string x, string y, int z);
};

/* idk why but the highlighting does not work */
_car::_car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
        cout << brand << endl;
        cout << model << endl;
        cout << year << endl;
}

int main(){

    _car obj1("bmw", "a5", 1999);
    _car obj2("byd", "a6", 2006);
    return 0;
}
