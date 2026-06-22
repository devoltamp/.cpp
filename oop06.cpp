/* having more than one constructor
-- that's overloading */
#include <iostream>
#include <string>
using namespace std;

class _car{
public:
    string brand;
    string model;

    _car(){
        brand = "unknown";
        model = "unknown";
        cout << brand << endl;
        cout << model << endl;
    }

    _car(string b, string m){
        brand = b;
        model = m;
        cout << brand << endl;
        cout << model << endl;
    }
};

int main(){

    _car obj1;
    _car obj2("byd", "a4");
    _car obj3("audi", "r8");
    return 0;
}
