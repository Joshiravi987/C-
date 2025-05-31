#include<iostream>
using namespace std;
class person{
    public:
    //default constructor

    person(){
        cout<<"Default constructor "<<endl;
    }
    person(int a, int b){
        cout<<"Parameterized constructor "<<endl;
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    
    }
    string name;

};
int main(){
    //make objects (run default and parameterized constructors)
    person p1; // Calls default constructor
    person p2(10, 20); // Calls parameterized constructor
    p1.name = "John";
}