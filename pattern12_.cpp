#include <iostream>
using namespace std;

int main() {
    int n = 7; // Number of rows

    for (int row = 0; row < n; row++) {
        // Print leading spaces (optional, for alignment)
        for (int s = 0; s < n - row; s++) {
            cout << '-';
        }
             for (int col = 0; col < 1 + 2 * row; col++) {
            cout << "*";
        }

        cout << endl;
        // for (int s = 0; s < row; s++)
        // {
        //     cout << "_";
        // }

        // // Print stars with increasing count
        // for (int col = 0; col < 7 - 2 * row; col++)
        // {
        //     cout << "*";
        // }
    }

    return 0;
}
