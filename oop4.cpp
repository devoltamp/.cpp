#include <iostream>
#include <string>
using namespace std;

class _car{
public:
    string brand,
    model;
    int year;

    /* constructor with parameters */
    _car(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
        cout << brand << endl;
        cout << model << endl;
        cout << year << endl;
    }
};

int main(){

    _car obj1("bmw", "a5", 1999);
    _car obj2("byd", "a6", 2006);
    /* with just making an obj.
    -- it exicutes itself
    & multiple also works */
    return 0;
}
