/* inheritance access
-- more for the protected */
#include <iostream>
using namespace std;

/* base c. */
class _employee{
protected:
    int salary;
};

/* child c. */
class _prog: public _employee{
public:
    int bonus;
    /* setter */
    void setsalary(int s){
        salary = s;
    }
    /* getter */
    int getsalary(){
        return salary;
    }
};

int main(){

    _prog obj;
    obj.setsalary(5000);
    obj.bonus = 500;

    cout << "salary: " << obj.getsalary() << endl;
    cout << "bonus : " << obj.bonus << endl;
    cout << "total : " << obj.getsalary() + obj.bonus << endl;
    return 0;
}
