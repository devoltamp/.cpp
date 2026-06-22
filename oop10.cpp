/* inheritance
-- derived class (child)
& base class (parent) */
#include <iostream>
#include <string>
using namespace std;

/* base c. */
class _vehicle{
public:
    string brand = "ford";
    void honk(){
        cout << "toot!" << endl;
    }
};

/* child c. */
class _car: public _vehicle{
public:
    string model = "mustang";
};

int main(){

    _car obj;
    obj.honk();
    cout << obj.brand + " " + obj.model << endl;
    return 0;
}

/* accessing the base from the child c.
that is cool */
