#include <iostream>
#include <cctype>
using namespace std;

int main(){

    char c;
    long nchar, nconv = 0;

    while (cin.get(c)){
        nchar++;
        if(islower(c)){
            c = toupper(c);
            ++nconv;
        }
        cout.put(c);
    }
    printf("\n");
    printf("%ld\n", nchar);
    printf("%ld", nconv);
    return 0;
}
/* namely there are many such macros in the lib. */
