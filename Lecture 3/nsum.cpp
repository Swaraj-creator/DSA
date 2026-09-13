#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Number: ";
    cin >> num;
    
    double sum = 0;

    for(int i=0; i <= num; i++) {
        sum += i;
    }

    cout << "Sum of numbers upto " << num << " is: " << sum << "\n";

    return 0;
}