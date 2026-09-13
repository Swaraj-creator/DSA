#include <iostream>
#include <iomanip>
using namespace std;

//to calculate factorial of a given number
int main() {
    int num;
    double result = 1;

    cout << "Enter Num: ";
    cin >> num;

    if (num == 0) {
        cout << "Factorial of Num is: 1\n";
    } else {
        while (num > 0) {
            result = result * num;
            num--;
        }
        cout << fixed << setprecision(0);
        cout << "Factorial of Num is: " << result << "\n";
    }

    return 0;
}