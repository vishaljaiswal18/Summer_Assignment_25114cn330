#include<iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"enter n :";
    cin>>n;
    int product = 1;
    for( i=1 ; i<=n ; i++){
        product = product*i;
    }
    cout<<product;
}