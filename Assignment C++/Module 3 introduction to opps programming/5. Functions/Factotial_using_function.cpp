/* Write a C program that calculates the factorial of a given number using a function.*/
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: 0! = 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}
