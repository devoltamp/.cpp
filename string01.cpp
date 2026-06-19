#include <iostream>
#include <string>
using namespace std;

int main(){

    string prompt("enter some text "), line(50, '-');
    prompt += "to end double press ""enter""\n";

    cout << line << '\n' << prompt << line << endl;

    string text, _line;
    while(1){
        getline(cin, _line);
        if(_line.length() == 0)
            break;
        text = _line + '\n' + text;
    }
    /* line is defined twice
    -- is that allowed
    -- i was right */

    puts("o/p:");
    cout << text << endl;
    long temp = text.length();
    cout << temp << endl;
    return 0;
}
