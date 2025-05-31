#include<iostream>
#include<string>
using namespace std;
int main(){
    // string s;
    // cout<<"Enter a string: ";
    // getline(cin, s);//getline is used to read a line of text,spaces included
    // cout<<s;

    char c[100];
    cout<<"Enter a string: ";
    cin.get(c, 100);//cin.get is used to read a string with spaces
    cout<<c;

    return 0;
}