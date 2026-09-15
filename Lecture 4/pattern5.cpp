#include <iostream> 
using namespace std;

int main() {
    int n;
    cout << "Enter a Range: ";
    cin >> n;

    for(int i = n; i > 0; i--) {
        for(int j = 0; j <= n - i; j++) {
            cout << "*" << " ";
        }
        cout << "\n";
    }
}