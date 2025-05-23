#include<iostream>
using namespace std;
int main(){
    //user input
    int i;
    float f;
    double d;
    char c;
    char str[23];

    cout<<"Enter an integer: ";
    cin>>i;
    cout<<"Enter a float: ";
    cin>>f;
    cout<<"Enter a double: ";
    cin>>d;
    cout<<"Enter a character: ";
    cin>>c;
    cout<<"Enter a string: ";
    cin>>str;

    //print all the datatypes
    cout<<"Integer: " << i << endl<<"Float : "<<f<<endl<<"Double: " << d << endl<<"Character: " << c << endl<<"String: " << str;
return 0;
}