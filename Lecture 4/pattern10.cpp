#include <iostream>
using namespace std;

//floyd's triangle
int main() {
    int num, count = 1;
    cout << "Enter a Range: ";
    cin >> num;

    for(int i = 0; i < num; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }

    return 0;
}