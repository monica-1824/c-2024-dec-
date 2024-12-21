#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows in the pattern

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

