/*Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
operators. Perform operations using each type of operator and display the results.
*/
#include <iostream>
using namespace std;
int main(){
    // Arithmetic Operators
    int a = 10, b = 15;
    cout << "Arithmetic Operators:" << endl;
    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a, b) << endl;

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "Equal to: " << (a == b) << endl;
    cout << "Not equal to: " << (a != b) << endl;
    cout << "Greater than: " << (a > b) << endl;
    cout << "Less than: " << (a < b) << endl;
    cout << "Greater than or equal to: " << (a >= b) << endl;
    cout << "Less than or equal to: " << (a <= b) << endl;

    // Logical Operators
    cout << "\nLogical Operators:" << endl;
    cout << "Logical AND: " << (a > 0 && b > 0) << endl;
    cout << "Logical OR: " << (a > 0 || b < 0) << endl;
    cout << "Logical NOT: " << (!a) << endl;

    // Bitwise Operators
    cout << "\nBitwise Operators:" << endl;
    cout << "Bitwise AND: " << (static_cast<int>(a) & static_cast<int>(b)) << endl;
    cout << "Bitwise OR: " << (static_cast<int>(a) | static_cast<int>(b)) << endl;
    cout << "Bitwise XOR: " << (static_cast<int>(a) ^ static_cast<int>(b)) << endl;
    cout << "Bitwise NOT: " << (~static_cast<int>(a)) << endl;

    return 0;
}