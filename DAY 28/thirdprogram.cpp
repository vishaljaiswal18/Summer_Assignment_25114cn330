#include <iostream>
using namespace std;

int main() {
    string name;
    int tickets;
    const int price = 200;

    cout << "Enter Customer Name: ";
    getline(cin, name);

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    int total = tickets * price;

    cout << "\n--- Ticket Details ---\n";
    cout << "Customer Name: " << name << endl;
    cout << "Tickets Booked: " << tickets << endl;
    cout << "Total Amount: Rs. " << total << endl;

    return 0;
}