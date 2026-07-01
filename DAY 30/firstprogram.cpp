#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter Number of Students: ";
    cin >> n;

    string name[n];
    int marks[n];

    for(int i = 0; i < n; i++) {
        cin.ignore();
        cout << "\nEnter Name: ";
        getline(cin, name[i]);

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    cout << "\n--- Student Records ---\n";

    for(int i = 0; i < n; i++) {
        cout << name[i] << " : " << marks[i] << endl;
    }

    return 0;
}