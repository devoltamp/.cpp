#include <iostream>
using namespace std;

class _car{
    public:
        int speed(int maxspeed);
        /* implicit declaration */
};

int _car::speed(int maxspeed){
    return maxspeed;
}

int main(){

    _car obj;
    cout << obj.speed(200) << endl;
    return 0;
}
