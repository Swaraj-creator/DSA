#include <iostream>
using namespace std;

//pyramid
int main() {
    int num, indexes, current = 1;
    cout << "Enter a Range: ";
    cin >> num;

    indexes = (int)((num * 2) - 1);

    for(int i = 0; i < num; i++) {
        current = 1;
        for(int j = 0; j <= indexes; j++) {
            if(j <= (((indexes / 2) + 1) + i) && j >= (((indexes / 2) + 1) - i)) {
                cout << current << " ";
                if(j >= ((indexes / 2) + 1)) {
                    current--;
                } else {
                    current++;
                }
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
}