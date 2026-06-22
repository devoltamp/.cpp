/* friend f'n */
#include <iostream>
using namespace std;

class _employee{
private:
    int salary;
public:
    /* constructor */
    _employee(int s){
        salary = s;
    }
    friend void display(_employee emp){
        cout << emp.salary << endl;
    }
};

int main(){

    /* the obj. could be anything
    it'll still run */
    _employee obj(5000);
    display(obj);
    return 0;
}
