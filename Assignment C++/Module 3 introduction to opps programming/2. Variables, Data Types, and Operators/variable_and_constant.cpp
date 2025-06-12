/*Write a C++ program that demonstrates the use of variables and constants. Create
variables of different data types and perform operations on them.*/
#include <iostream>
using namespace std;   
int main(){
    // Declare variables of different data types
    int integerVar = 10;          // Integer variable
    float floatVar = 5.5;         // Float variable
    double doubleVar = 3.14159;   // Double variable
    char charVar = 'A';           // Character variable
    string stringVar = "Hello";   // String variable

    // Declare a constant
    const int constantVar = 100;  // Constant variable

    // Perform operations on the variables
    int sum = integerVar + constantVar;
    float product = floatVar * 2.0;
    double division = doubleVar / 2.0;

    // Display the results
    cout << "Integer Variable: " << integerVar << endl;
    cout << "Float Variable: " << floatVar << endl;
    cout << "Double Variable: " << doubleVar << endl;
    cout << "Character Variable: " << charVar << endl;
    cout << "String Variable: " << stringVar << endl;
    
    cout << "Constant Variable: " << constantVar << endl;
    
    cout << "Sum of Integer and Constant: " << sum << endl;
    cout << "Product of Float and 2.0: " << product << endl;
    cout << "Division of Double by 2.0: " << division << endl;

    return 0;

}