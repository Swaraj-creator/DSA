#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    bool isPrime = true;

    if(num >= 0 && num <= 1) {
        cout << num << " is not a Prime Number.\n";
    } else {
        for(int i = 2; i * i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if(isPrime) {
            cout << num << " is a Prime Number.\n";
        } else {
            cout << num << " is not a Prime Number.\n";
        }
    }


    return 0;
}