#include <iostream>
using namespace std;

struct Book {
    int id;
    string title;
};

int main() {
    Book b[3];

    for(int i = 0; i < 3; i++) {
        cout << "\nEnter Book ID: ";
        cin >> b[i].id;

        cin.ignore();
        cout << "Enter Book Title: ";
        getline(cin, b[i].title);
    }

    cout << "\n--- Library Books ---\n";

    for(int i = 0; i < 3; i++) {
        cout << b[i].id << " - " << b[i].title << endl;
    }

    return 0;
}