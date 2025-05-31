#include <iostream>
using namespace std;
class parent
{
public:
    parent(int a)
    {
        cout << "Parent class constructor called with value: " << a << endl;
    }
};
class child : public parent
{
public:
    child(int a) : parent(25) // Calling parent class constructor
    {
        cout << "Child class constructor " << a << endl;
    }
};
class grandchild : public child
{
    public:
    grandchild(int a) : child(240000000) // Calling child class constructor
    {
        cout << "Grandchild class constructor " << a << endl;
    }
};
int main()
{
    grandchild(246);
}