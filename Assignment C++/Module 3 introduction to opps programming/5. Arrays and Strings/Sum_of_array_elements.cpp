/* Write a C program that takes N numbers from the user and stores them in an array. The 
program should then calculate and display the sum of all array elements.*/
#include<iostream>
using namespace std;

int main(){
    int n,sum =0;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i=0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Calculate the sum of elements
    }
    cout << "The sum of the array elements is: " << sum << endl;
    return 0;
}