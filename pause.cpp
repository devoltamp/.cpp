#include <iostream>
using namespace std;

void pause(){
    cout << "BREAK";
}

int main(){

    /* idk why but endl at upfront does not look good */
    cout << endl << "dear, "
         << endl << "have a ";
    pause();
    cout << "!" << endl;
    cout << endl;

    return 0;
}
