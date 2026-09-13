#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //to calculate simple interest
    int principal;
    float rate, time;

    cout << "Enter Princiapl Amount (₹): ";  //principal
    cin >> principal;

    cout << "Enter Rate of Interest (% per year): ";  //rate
    cin >> rate;

    cout << "Enter Total Time (Months): ";  //time
    cin >> time;
    time = time / 12; //to months
    
    double SI = (principal * rate * time) / 100;
    double amount = principal + (SI);
    
    cout << "\n";
    cout << "Interest Per Month: ₹" << (SI / (time * 12)) << "\n";
    cout << "Total Interest: ₹" << SI << "\n" << "\n";
    cout << fixed << setprecision(2);
    cout << "Total Amount: ₹" << amount << "\n";
    cout << "Installment Per Month: ₹" << amount / (time * 12) << "\n";


    return 0;
}