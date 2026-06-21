/* to find multiple targets
using the index */
#include <iostream>
#include <string>
using namespace std;

int main() {

    string text = "apple banana apple orange apple";
    string target = "apple";

    size_t pos = text.find(target, 0);

    /* npos means "not found" */
    while (pos != std::string::npos) {
        cout << "_at index: " << pos << endl;
        pos = text.find(target, pos + target.length());
    }

    return 0;
}
