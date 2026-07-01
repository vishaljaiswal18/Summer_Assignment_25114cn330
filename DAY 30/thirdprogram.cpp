#include <iostream>
using namespace std;

struct Employee {
    int id;
    string name;
};

int main() {
    Employee e[3];

    for(int i = 0; i < 3; i++) {
        cout << "\nEnter Employee ID: ";
        cin >> e[i].id;

        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, e[i].name);
    }

    cout << "\n--- Employee Records ---\n";

    for(int i = 0; i < 3; i++) {
        cout << e[i].id << " - " << e[i].name << endl;
    }

    return 0;
}