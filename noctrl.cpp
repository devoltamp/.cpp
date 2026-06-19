/* will ignore the control char. */
#include <iostream>
using namespace std;

#define isctrl(c) (c >= 0 && c <= 31 && c !='\n' && c != '\t')

int main(){

    char c, prec = 0;
    long nctrl = 0, nchar = 0;

    while (cin.get(c)){

        cout << isctrl(c);
        if (isctrl(c)){
            nctrl++;
            nchar = 0;
        }
        else{
            if(nctrl > 0){
                cout.put(' ');
                nctrl = 0;
            }
            switch(++nchar){
                case 1: break;
                case 2: cout.put(prec);
                default: cout.put(c);
                /* the current one */
            }
            prec = c;
        }
    }
    return 0;
}
