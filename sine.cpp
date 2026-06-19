#include <iostream>
#include <cmath>
#include "defines.hpp"
using namespace std;

#define START 0.0
#define END (2.0 * PI)
#define PNT 64
#define STEP ((END - START) / PNT)
#define XA 14
#define YA 10

int main(){

    int row, column;
    win();
    CLS;
    LOCATE(2, 25);
    cout << "t. sine plot";

    // /* the coordinate sys. */
    // /* X */
    // LOCATE(XA, 1);
    // for (column = 1; column < 78; ++ column){
    //     cout << (((column - YA) % 8) ? '\304' : '\305');
    // }
    //
    // /* TOP */
    // cout << '\020';
    //
    // /* Y */
    // LOCATE(XA - 1, YA + 64);
    // cout << "2PI x";
    // for (row = 5; row < 24; ++row){
    //     LOCATE(row, YA);
    //     cout << '\305';
    // }
    // LOCATE(4, YA);  cout << "\306 sin(x)";
    // LOCATE(XA-8, YA+1); cout << " 1";
    // LOCATE(XA+8, YA+1); cout << " -1";

    /* ------------------------- */

    int begpt = 10;
    while(begpt <= 50){

        int endpt = begpt + PNT;
        for (column = begpt; column <= endpt; ++column){
            double x = (column - YA) * STEP;
            row = (int)(XA - 8 * sin(x) + 0.5);
            LOCATE(row, column);
            cout << '*';
        }
        // LOCATE(25, 1);
        // Sleep(50);
        ++begpt;
    }
    return 0;
}

/* useful char.
\020
\304
\305
\036
*/
