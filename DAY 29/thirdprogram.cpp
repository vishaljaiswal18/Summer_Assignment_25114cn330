#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter String: ";
    getline(cin, str);

    int choice;

    do {
        cout << "\n1.Length\n2.Reverse\n3.Uppercase\n4.Display\n5.Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Length = " << str.length();
                break;

            case 2: {
                string temp = str;
                reverse(temp.begin(), temp.end());
                cout << temp;
                break;
            }

            case 3: {
                string temp = str;
                for(char &c : temp)
                    c = toupper(c);
                cout << temp;
                break;
            }

            case 4:
                cout << str;
                break;

            case 5:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 5);

    return 0;
}