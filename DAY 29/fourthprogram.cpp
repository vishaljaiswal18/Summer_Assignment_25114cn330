#include <iostream>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
};

int main() {
    Item item;

    cout << "Enter Item ID: ";
    cin >> item.id;

    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, item.name);

    cout << "Enter Quantity: ";
    cin >> item.quantity;

    cout << "\n--- Inventory Details ---\n";
    cout << "Item ID: " << item.id << endl;
    cout << "Item Name: " << item.name << endl;
    cout << "Quantity: " << item.quantity << endl;

    return 0;
}