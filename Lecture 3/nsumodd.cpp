#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    double sum = 0;

    for(int i=0; i <= num; i++) {
        if(!(i % 2 == 0)) {
            sum += i;
        }
    }

    cout << "Sum of all Odd Numbers upto " << num << " is: " << sum << "\n";

    return 0;
}