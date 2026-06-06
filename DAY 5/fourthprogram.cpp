#include <iostream>
using namespace std;

bool isPrime(int n) {
    if(n < 2)
        return false;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, largest = -1;
    cout<<" enter a number :";
    cin >> n;

    for(int i = 2; i <= n; i++) {
        if(n % i == 0 && isPrime(i))
            largest = i;
    }

    cout << "Largest Prime Factor = " << largest;

    return 0;
}