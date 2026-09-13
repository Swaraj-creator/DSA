#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter Number 1 (A): ";
    cin >> num1;

    cout << "Enter Number 2 (B): ";
    cin >> num2;

    cout << "\n" << "Calculated Results:" << "\n";

    cout << "Sum of A & B -> (A + B): \t\t" << num1 + num2 << "\n";
    cout << "Difference of A & B -> (A - B): \t" << num1 - num2 << "\n";
    cout << "Difference of B & A -> (B - A): \t" << num2 - num1 << "\n";
    cout << "Product of A & B -> (A * B): \t\t" << num1 * num2 << "\n";
    cout << "Division of A by B -> (A / B): \t\t" << num1 / num2 << "\n";
    cout << "Division of B by A -> (B / A): \t\t" << num2 / num1 << "\n";
    cout << "Remainder of A / B -> (A % B): \t\t" << num1 % num2 << "\n";
    cout << "Remainder of B / A -> (B % A): \t\t" << num2 % num1 << "\n";

    return 0;
}