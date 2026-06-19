/* u -- for unix */
#include <iostream>
using namespace std;

#define COLOR(f, b) (cout << "\033[1;3" << (f) << ";4" << (b) << 'm' << flush)
#define WHITE 7
#define BLUE 4

int main(){

    COLOR(WHITE, BLUE);
    puts("kinda good");
    return 0;
}
/* now we are talking about.
this will work like a charm */
