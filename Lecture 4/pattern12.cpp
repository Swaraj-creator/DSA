#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Range: ";
    cin >> num;
    char ch = 'A';

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            if(j >= i) {
                cout << (char)(ch) << " ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
        ch++;
    }

    return 0;
}