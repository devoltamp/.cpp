#include <iostream>
#include <string>
/* class -- string */
using namespace std;

int main(){

    string prompt("what's your name: "), name, line(40, '-'), total = "hello ";

    /* for print */
    cout << prompt;
    getline(cin, name);
    total = total + name;

    cout << line << endl;
    cout << total << endl;
    cout << "your name is " << name.length() << " char. long" << endl;
    /* i miss c */
    cout << line << endl;
    // line(40, '-');
    return 0;
}

/* so the string class has the method line(#n, 'pattern')
i think this eliminates the need of writting one */
