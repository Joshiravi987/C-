#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// FoodItem class representing individual menu items
class FoodItem {
public:
    string name;
    double price;

    FoodItem(string n = "", double p = 0.0) {
        name = n;
        price = p;
    }
};

// Order class for customer orders
class Order {
private:
    string customerName;
    double totalBill;
    FoodItem menu[5]; // Sample menu

public:
    Order() {
        totalBill = 0.0;
        menu[0] = FoodItem("Pizza", 250.00);
        menu[1] = FoodItem("Burger", 120.00);
        menu[2] = FoodItem("Pasta", 150.00);
        menu[3] = FoodItem("Fries", 80.00);
        menu[4] = FoodItem("Coke", 40.00);
    }

    void takeCustomerName() {
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin, customerName);
    }

    void displayMenu() {
        cout << "\n---- MENU ----\n";
        for (int i = 0; i < 5; i++) {
            cout << i + 1 << ". " << menu[i].name << " - Rs. " << fixed << setprecision(2) << menu[i].price << endl;
        }
    }

    void takeOrder() {
        int choice, quantity;
        char cont;

        do {
            displayMenu();
            cout << "\nEnter your choice (1-5): ";
            cin >> choice;

            if (choice < 1 || choice > 5) {
                cout << "Invalid choice. Please try again.\n";
                continue;
            }

            cout << "Enter quantity for " << menu[choice - 1].name << ": ";
            cin >> quantity;

            double cost = menu[choice - 1].price * quantity;
            totalBill += cost;

            cout << "Added " << quantity << " x " << menu[choice - 1].name << " to your order. Subtotal: Rs. " << cost << endl;

            cout << "Do you want to order more? (Y/N): ";
            cin >> cont;

        } while (cont == 'Y' || cont == 'y');

        generateBill();
    }

    void generateBill() {
        cout << "\n----- FINAL BILL -----\n";
        cout << "Customer: " << customerName << endl;
        cout << "Total Amount: Rs. " << fixed << setprecision(2) << totalBill << endl;
        cout << "Thank you for ordering!\n";
    }
};

// Main function
int main() {
    Order order;
    order.takeCustomerName();
    order.takeOrder();
    return 0;
}
// This program simulates a food ordering system where customers can view a menu, place orders, and receive a final bill.