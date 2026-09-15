#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Range: ";
    cin >> num;

    char ch = 'A';

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << (char)ch << " ";
        }
        ch++;
        cout << "\n";
    }

    return 0;
}