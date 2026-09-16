#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Range: ";
    cin >> num;
    int count = 1;

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            if(j >= i) {
                cout << count << " ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
        count++;
    }
}