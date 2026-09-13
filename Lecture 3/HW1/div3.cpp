#include <iostream>
using namespace std;

//to find sum of all numbers divisible by 3 upto a given number
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    double sum = 0;

    for(int i = 0; i <= num; i++) {
        if(i % 3 == 0) {
            sum += i;
        }
    }

    cout << "Sum of all numbers divisible by 3 upto " << num << " is: " << sum << "\n";

    return 0;
}