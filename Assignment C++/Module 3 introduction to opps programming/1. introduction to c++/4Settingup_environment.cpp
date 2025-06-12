//Write a program that asks for two numbers and displays their sum
#include <iostream>
using namespace std;

int main() {
    float a,b, sum;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    sum = a + b;
    cout << "The sum is: " << sum << endl;
    return 0;
}