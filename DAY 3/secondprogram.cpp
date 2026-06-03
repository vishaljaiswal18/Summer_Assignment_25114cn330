#include<iostream>
using namespace std;
int main(){
    int start, end;
    cout<<"enter the start and end :";
    cin>>start>>end;
    cout<<"prime number are :";
    for(int i=start; i<=end; i++){
        bool isPrime = true;
        if(i<=1){
            isPrime = false;
        }else{
            for(int j=2; j<=i/2; j++){
                if(i%j==0){
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
    return 0;
}