#include<iostream>
using namespace std;
int main(){
    int a, b, maxnum;
    cout<<" enter the two numbers :";
    cin >> a >> b;

    maxnum = ( a > b ) ? a:b;
    while(true){
        if(maxnum % a == 0 && maxnum  % b == 0){
            cout<<"lcm = " << maxnum;
            break;
        }
        maxnum++;
    
    }
    return 0;
}
