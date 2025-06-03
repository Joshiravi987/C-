/*Write two small programs: one using Procedural Programming (POP) to calculate the
area of a rectangle, and another using Object-Oriented Programming (OOP) with a
class and object for the same task */
#include <iostream>
using namespace std;
// Procedural Programming (POP) to calculate the area of a rectangle
void calculateAreaPOP() {
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    float area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
}

// Object-Oriented Programming (OOP) to calculate the area of a rectangle
class Rectangle {
public:
    float length;
    float width;

    float calculateArea() {
        return length * width;
    }
};

int main() {
    // POP approach
    cout << "Procedural Programming (POP) Approach:" << endl;
    calculateAreaPOP();

    // OOP approach
    cout << "\nObject-Oriented Programming (OOP) Approach:" << endl;
    Rectangle rect;
    cout << "Enter the length of the rectangle: ";
    cin >> rect.length;
    cout << "Enter the width of the rectangle: ";
    cin >> rect.width;
    cout << "The area of the rectangle is: " << rect.calculateArea() << endl;
    return 0;
}
// This program demonstrates both Procedural Programming (POP) and Object-Oriented Programming (OOP) approaches to calculate the area of a rectangle.
// The POP approach uses a function to perform the calculation, while the OOP approach defines a class with attributes and methods to achieve the same task.
// The POP approach is straightforward and uses a function to calculate the area, while the OOP approach encapsulates the properties and behavior of a rectangle within a class.
// The POP approach is more procedural and function-based, while the OOP approach is more structured and object-oriented.