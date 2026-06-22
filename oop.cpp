#include <iostream>
using namespace std;

class _class{
    public:
        int num;
        string s;
};

int main(){

    _class obj;
    obj.num = 5;
    obj.s = "hello there!";

    cout << obj.num << endl;
    cout << obj.s << endl;

    /* multiple obj.
    -- same class */
    _class obj01;
    obj01.num = 10;
    obj01.s = "general kernobi";

    cout << obj01.num << endl;
    cout << obj01.s << endl;

    return 0;
}
