#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to get a Driving License.";
    } else {
        cout << "You are not eligible to get a Driving License.";
    }

    cout << "\n";

    return 0;
}