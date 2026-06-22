#include <iostream>
using namespace std;

class _class{
    public:
        /* method */
        void print(void){
            cout << "hello there!\n";
        }
        void reply(void);   /* but gotta declare */
};

/* method outside the class */
void _class::reply(void){
    cout << "general kernobi" << endl;
}

int main(){

    _class obj;
    _class obj01;

    obj.print();
    obj.reply();
    // obj01.print();
    
    return 0;
}
