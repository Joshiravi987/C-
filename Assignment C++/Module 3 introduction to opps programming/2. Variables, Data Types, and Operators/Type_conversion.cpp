/*Write a C++ program that performs both implicit and explicit type conversions and
prints the results.*/
#include <iostream>
using namespace std;
int main() {
    // Implicit type conversion
    int intVar = 10;
    double doubleVar = intVar; // int to double
    cout << "Implicit conversion (int to double): " << doubleVar << endl;

    // Explicit type conversion
    double anotherDoubleVar = 9.99;
    int anotherIntVar = static_cast<int>(anotherDoubleVar); // double to int
    cout << "Explicit conversion (double to int): " << anotherIntVar << endl;

    // Implicit conversion with arithmetic operation
    float floatVar = 5.5f;
    double result = floatVar + intVar; // float to double
    cout << "Result of float + int (implicit conversion): " << result << endl;

    return 0;
}