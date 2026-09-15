#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Range: ";
    cin >> num;

    for(int i = 0; i <= num; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << "\n";
    }

    return 0;
}