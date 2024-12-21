#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10; // Extract the last digit
        number /= 10;        // Remove the last digit
    }
    return sum;
}

// Function to check if a number is a Harshad number
bool isHarshadNumber(int number) {
    int sum = sumOfDigits(number); // Get the sum of digits
    return (number % sum == 0);    // Check if number is divisible by sum of digits
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHarshadNumber(num)) {
        cout << num << " is a Harshad number." << endl;
    } else {
        cout << num << " is not a Harshad number." << endl;
    }

    return 0;
}
