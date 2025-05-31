//user input array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of the elements in the array: ";
    cin >> n;
    int arr[n]; // Declare an array of size n
    cout << "Enter " << n << " elements: ";
    for (int i=0; i<n; i++){
        cin >> arr[i]; // Input elements into the array
    }
    cout << "You entered: ";
    for (int i=0; i<n; i++){
        cout << arr[i] ; // Output the elements of the array
    }
}