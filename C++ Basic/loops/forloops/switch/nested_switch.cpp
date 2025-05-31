#include<iostream>
#include<math.h>
using namespace std;
int a,b;
char op;
int choice;
int main(){
    cout << "Enter your choice (1: Calculator, 2: Power, 3: Square Root): ";
    cin >> choice;
    switch (choice) {
        // 1: Basic calculator, 2: Power calculation, 3: Square root calculation
        case 1:
            cout << "Enter any 3 of the choice: ";
            cin >> a >> b;
            cout << "Enter an operator (+, -, *, /): ";
            cin >> op;
             switch (op) {
                case '+':
                    cout << a << " + " << b << " = " << a + b << endl;
                    break;
                case '-':
                    cout << a << " - " << b << " = " << a - b << endl;
                    break;
                case '*':
                    cout << a << " * " << b << " = " << a * b << endl;
                    break;
                case '/':
                    if (b != 0) {
                        cout << a << " / " << b << " = " << (double)a / b << endl;
                    } else {
                        cout << "Error: Division by zero!" << endl;
                    }
                    break;
                default:
                    cout << "Error: Invalid operator!" << endl;
                    break;
            }
            break;
        case 2:
            cout << "Enter base and exponent: ";
            cin >> a >> b;
            cout << fixed;
            cout.precision(2);
            cout << a << " ^ " << b << " = " << pow(a, b) << endl;
            break;
        case 3:
            cout << "Enter a number to calculate its square root: ";
            cin >> a;
            if (a >= 0) {
                cout << fixed;
                cout.precision(2);
                cout << "Square root of " << a << " is " << sqrt(a) << endl;
            } else {
                cout << "Error: Cannot take square root of a negative number!" << endl;
            }
            break;
        default:
            cout << "Error: Invalid choice!" << endl;
            break;
    }
    return 0;
}