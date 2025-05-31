//program that uses do-while loop and switch case to take array input from user and option 1 for addition and 2 for show the array elements and 3 for exit
#include <iostream>
using namespace std;
int main(){
    int n ,choice;
  cout << "Enter the number of the elements in the array: ";
   cin >> n;
    int* arr = new int[n]; // Use dynamic allocation for array
    cout << "Enter " << n << " elements: ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    int capacity = n; // Track current capacity
    do {
        cout << "\nMenu:\n";
        cout << "1. Add elements\n";
        cout << "2. Show elements\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                int newElement;
                cout << "Enter the element to add: ";
                cin >> newElement;
                int* newArr = new int[n + 1];
                for (int i = 0; i < n; i++) {
                    newArr[i] = arr[i];
                }
                newArr[n] = newElement;
                delete[] arr;
                arr = newArr;
                n++;
                cout << "Element added successfully.\n";
                break;
            }
            case 2: {
                cout << "Array elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            }
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);
    delete[] arr; // Free the allocated memory for the array
    return 0;
}