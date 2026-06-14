#include <iostream>
using namespace std;

int main(){

    /* one single char. */
    char ch;
    cin.get(ch);
    cout << ch << endl;
    cin >> ch;
    cout << ch << endl;

    /* without argument -- std. int value */
    int c = cin.get();
    cout << c << endl;

    /* one single char. put */
    cout.width(1);
    cout.put('a');
    cout << 'a';

    return 0;
}
