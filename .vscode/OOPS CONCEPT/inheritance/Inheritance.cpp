#include <iostream>
using namespace std;

class person
{
protected:
    int a = 12;

public:
    // Default constructor
    person()
    {
        cout << "Base class default constructor called" << endl;
    }
};
class child : public person
{
public:
    child()
    {
        cout << "Child class default constructor called" << endl;
        cout << "Protected member a from base class: " << a << endl; // Accessing protected member from base class
    }
};
int main()
{
    // Create an object of the child class
    child c; // This will call both the base class and child class constructors
    return 0;
}