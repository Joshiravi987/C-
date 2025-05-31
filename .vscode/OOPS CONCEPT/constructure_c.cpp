//method overloading
#include <iostream>
using namespace std;
class Person {
    public:
    // Default constructor
    void demo(){
        cout << "Default method called" << endl;

    }
    // Parameterized constructor
    void demo(int a){
        cout << "Parameterized method called with value: " << a << endl;
    }
    // Method with string parameter
    void demo(string s) {
        cout << s << endl;
    }
};
int main() {
    //call functions
    Person p;
    p.demo(); // Calls default method
    p.demo(10); // Calls parameterized method
    p.demo("Hello, World!"); // Calls method with string parameter
}