#include <iostream>
using namespace std;

//to calculate max of two numbers
int main() {
    int a, b;

    cout << "Enter A: ";
    cin >> a;

    cout << "Enter B: ";
    cin >> b;

    if (a > b) {
        cout << "A is greater than B.";
    } else if (b > a) {
        cout << "B is greater than A.";
    } else if (a == b) {
        cout << "A is equal to B.";
    } else {
        cout << "Invalid Condition";
    }

    cout << "\n";

    return 0;
}