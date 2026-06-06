#include <iostream>
using namespace std;

int main() {
    long long binary;
    cin >> binary;

    int decimal = 0, base = 1;

    while(binary > 0) {
        int rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    cout << decimal;

    return 0;
}