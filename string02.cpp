/* concatination is simply done by + */
#include <iostream>
#include <string>
using namespace std;

int main(){

    string prompt = "enter two lines\n",
    line1, line2, key = "y";

    while(key == "y" || key == "Y"){
        cout << prompt;
        getline(cin, line1);
        getline(cin, line2);

        if (line1 == line2)
            puts("both same");
        else{
            puts("smaller line");
            cout << ((line1 < line2) ? line1 : line2 ) << endl;

            /* the len. */
            int len1 = line1.length(),
                len2 = line2.length();

            if (len1 == len2)
                puts("both have same length");
            else{
                puts("not same");
            }
        }

        puts("\nwanna repeat [y/n] ?");
        do
            getline(cin, key);
            /* cause the key is stored as str */
        while(key != "y" && key != "Y" && key != "n" && key != "N");
    }

    /* insert & erase */
    string s1("miss summer");
    s1.insert(5, "ashley ");
    cout << s1 << endl;

    string s2("the summer-time");
    s2.erase(4, 7);
    cout << s2 << endl;
    /* cut the o/p */
    s2.erase(3);
    // s2.erase();
    cout << s2 << endl;

    return 0;
}
