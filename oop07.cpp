#include <iostream>
#include <string>
using namespace std;

class _class{
    public:
        int x;
    private:
        int y;
};

int main(){

    _class obj;
    obj.x = 25;
    obj.y = 12;
    /* not allowed */

    return 0;
}

/* if nothing is specified it's considered
as private
& the protected can be accessed via
child classes */
