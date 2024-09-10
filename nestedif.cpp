#include <iostream>

using namespace std;

int main() {
    int num = 10;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << "The number is positive and even." << endl;
        } else {
            cout << "The number is positive and odd." << endl;
        }
    } else {
        cout << "The number is not positive." << endl;
    }

    return 0;
}