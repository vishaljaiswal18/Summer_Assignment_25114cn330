#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char ans;

    cout << "Q1. Capital of India?\n";
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\n";
    cin >> ans;
    if(ans == 'b' || ans == 'B')
        score++;

    cout << "\nQ2. 2 + 2 = ?\n";
    cout << "a) 3\nb) 4\nc) 5\n";
    cin >> ans;
    if(ans == 'b' || ans == 'B')
        score++;

    cout << "\nQ3. C++ is a?\n";
    cout << "a) Programming Language\n";
    cout << "b) Operating System\n";
    cout << "c) Browser\n";
    cin >> ans;
    if(ans == 'a' || ans == 'A')
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}