#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows for the multiplication table: ";
    cin >> n;

    cout << "Multiplication Table for " << n << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n*i << endl;
    }
}