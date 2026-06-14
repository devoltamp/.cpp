#include <iostream>
using namespace std;

char menu(){

    char choice;
    puts("--- main menu ---");
    puts("action - 1");
    puts("action - 2");
    puts("quit");
    puts("enter choice: ");
    cin >> choice;
    return choice;
}

void action1(){
    puts("noice");
}

void action2(){
    puts("noice");
}

int main(){

    bool run = 1;
    while(run > 0){
        char command = menu();
        // cout << command << endl;

        switch(command){
            case '1':
                action1();
                break;
            case '2':
                action2();
                break;
            case 'q':
            case 'Q':
                puts("bye!");
                run = 0;
                break;
            default:
                cout << '\a' << "AGAIN!!\n" << flush;
                break;
        }
        cout << "\n";
    }
    return 0;
}
