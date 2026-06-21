#include <iostream>
#include <string>
using namespace std;

int main(){

    string word;
    puts("enter some text: ");
    cin >> word;

    int i = 0,
        j = word.length();
    for (; i <= j; ++i, --j){
        if(word[i] != word[j]){
            puts("not P A L I N D R O M E");
            break;
        }
        else{
            puts("P A L I N D R O M E");
        }
    }
    return 0;
}
