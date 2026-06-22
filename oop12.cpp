/* multiple inheritance
-- child c. from more than one base class */
#include <iostream>
using namespace std;

/* base c. */
class _parent1{
public:
    void fn(void){
        puts("parent #n = 01");
    }
};

/* another base c. */
class _parent2{
public:
    void fnn(){
        puts("parent #n = 02");
    }
};

/* derived c. */
class _child: public _parent1, public _parent2{};

int main(){

    _child obj;
    obj.fn();
    obj.fnn();
    return 0;
}
/* same name of f'n would not work */
