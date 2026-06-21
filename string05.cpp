/* simply a word counter */
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string text;
    puts("enter some text: ");
    getline(cin, text);

    int i,
        nspace = 0,
        nword = 0;
    bool fspace = 1;
    int len = text.length();

    for (i = 0; i < len; i++){
        if (text[i] == ' '){
            nspace++;
            fspace = 1;
        }
        else if(fspace){
            nword++;
            fspace = 0;
        }
    }

    /* result */
    cout << "char \t: " << len << endl;
    cout << "word \t: " << nword << endl;
    cout << "space\t: " << nspace << endl;

    return 0;
}
