/*Write a C++ program that accepts an array of integers, calculates the sum and
average, and displays the results.
*/
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int sum = 0;

    // Input
    cout << "Enter " << SIZE << " integers: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    // Calculate average
    double average = static_cast<double>(sum) / SIZE;

    // Output
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}