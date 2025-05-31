//call derive class function from person class pointer
#include <iostream>
using namespace std;
class person {
public:
    virtual void demo() {
        cout << "person class demo function called." << endl;
    }
};
class student : public person {
public:
    void demo() override { // Use override to indicate this function overrides a base class function
        // This function overrides the demo function in the person class
        cout << "student class demo function called." << endl;
    }
};
int main() {
    person* p;
    student s;
    p = &s;
    p->demo();
    return 0;
}