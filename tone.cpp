#include <iostream>
using namespace std;

const long delay = 10000000L;
int main(){

    int tic;
    puts("enter a #n");
    cin >> tic;

    /* if you didn't noticed
    this is based on -- tick */
    do{
        for (long i = 0; i < delay; ++i)
            ;
        cout << "the tone!\a" << endl;
    }
    while(--tic > 0);
    puts("pc is f*cked!");

    return 0;
}
