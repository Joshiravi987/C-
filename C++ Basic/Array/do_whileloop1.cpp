#include<iostream>
using namespace std;
int main() {
    int arr[10];
    int count = 0;
    int choice,val;
    char ch;

    cout<< "1:add values to array: " << endl;
    cout<< "2:display values in array: " << endl;
    cout<< "3:exit: " << endl;

    do{
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (count < 10) {
                    cout << "Enter value to add to array: ";
                    cin >> val;
                    arr[count] = val;
                    count++;
                    cout << "Value added successfully!" << endl;
                } else {
                    cout << "Array is full!" << endl;
                }
                break;
            case 2:
                if(count == 0) {
                    cout << "Array is empty!" << endl;
                } else {
                    cout << "Array values: ";
                    for(int i=0;i<count;i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
        cout << "\nDo you want to continue? (y/n): ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    cout << "Exiting program." << endl;
    return 0;
}