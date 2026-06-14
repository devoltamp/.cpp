/* o/p three random #n's */
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    unsigned int seed;
    int z1, z2, z3;

    puts("enter a seed #n: ");
    cin >> seed;
    /* if i give -ve -- it'll still take it */
    srand(seed);    /* the dec. ~ void srand(unsigned int seed)*/

    z1 = rand();
    z2 = rand();
    z3 = rand();

    cout << z1 << endl;
    cout << z2 << endl;
    cout << z3 << endl;
    return 0;
}
/* random #n bet'n 0 to 32767 */
