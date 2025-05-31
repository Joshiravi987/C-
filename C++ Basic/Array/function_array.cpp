#include<iostream>
using namespace std;
//add character array function
void char_function(char arr[]){
    for (int i = 0; i < 5; i++) {
        cout << arr[i] <<endl; // Print each character of the array
    } 
}
void array_function(int arr[]){
    for (int i = 0; i < 5; i++) {
        cout << arr[i] <<endl; // Print each element of the array
    } 
}
 int main(){
    int arr[5]; // Declare an array of size 5
    cout << "Enter array elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i]; // Input elements into the array
    }
    array_function(arr); // Call the function to print the array elements
    // Optionally, demonstrate char array usage
    char charArr[5];
    cout << "Enter 5 characters: ";
    for (int i = 0; i < 5; i++) {
        cin >> charArr[i];
    }
    char_function(charArr);
    return 0; // Return 0 to indicate successful execution
}