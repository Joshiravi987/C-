#include <iostream>
//make it user defined inheritance
using namespace std;
class parent

{
public:
    parent(int a)
    {
        cout<< "Enter value for parent class constructor: ";
        cin >> a; // Taking input for parent class constructor
        cout << "Parent class constructor called with value: " << a << endl;
    }
     
};
class child : public parent
{
public:
    child(int a) : parent(a) // Calling parent class constructor
    {
        cout << "Child class constructor " << a << endl;
        cin >> a; // Taking input for child class constructor
        cout << "Child class constructor called with value: " << a << endl;
    }
};

class grandchild : public child
{
public:
    grandchild(int a) : child(a) // Calling child class constructor
    {
        cout << "Grandchild class constructor " << a << endl;
    }
};

int main()
{
    int a;
    cout << "Enter value for grandchild class constructor: ";
    cin >> a;
    grandchild g(a); // Creating an object of grandchild class, which calls child and parent constructors
    return 0;
}