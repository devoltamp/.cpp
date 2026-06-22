/* multilevel inheritance
parent -> child -> grandchild
*/
#include <iostream>
using namespace std;

/* base c. */
class _parent{
public:
    void fn(void){
        puts("parent class");
    }
};

/* child c. */
class _child: public _parent{};

/* child c. */
class _grandchild: public _child{};

int main(){

    _grandchild obj;
    obj.fn();
    return 0;
}
