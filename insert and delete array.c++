#include <iostream>
using namespace std;

int main() {
    int arr[100] = {1, 2, 3, 4, 5}, n = 5;

    // Insert
    int pos = 2, value = 99;
    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;

    // Delete
    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;

    // Print
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}

