#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "Lowercase Character.\n";
    } else if(ch >= 'A' && ch <= 'Z') {
        cout << "Uppercase Character.\n";
    } else {
        cout << "Invalid Character.\n";
    }

    return 0;
}