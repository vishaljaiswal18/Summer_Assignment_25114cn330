#include<iostream>
using namespace std;
int main () {

    int n, original, rev=0, remainder;
    cout<<"enter the value of n  :";
    cin>>n;
    original = n; 

    while(n!=0) {
        remainder = n%10;
        rev = rev * 10 + remainder;
        n = n/10;
    }
    if (original == rev) {
        cout<< original <<" is a palindrome number.";
    }
        else {
              cout<< original <<" is not a palindrome number.";
        }
    }
    
