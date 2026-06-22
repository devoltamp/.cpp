/* encapsulation
-- data is hidden but not that much */
#include <iostream>
using namespace std;

class _employee{

private:
    int salary;
public:
    /* setter */
    void setsalary(int s){
        salary = s;
    }

    /* getter */
    int getsalary(void){
        return salary;
    }
};

int main(){

    _employee obj;
    obj.setsalary(50000);
    cout << obj.getsalary() << endl;
    return 0;
}

/* don't forget that the
getsalary is a f'n */
