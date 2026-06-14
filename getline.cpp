/* in c i would have to write an
entire loop to check that ! explicitly */

#include <iostream>
#include <string>
using namespace std;

int main(){

    string word, rest;
    string line(15, '-');

    // cin.get();
    puts("enter lines:");
    cin >> word;
    getline(cin, rest, '!');

    cout << line << endl;
    cout << "first word: " << word << endl;
    cout << "remaining: " << rest << endl;

    return 0;
}
