#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    cout <<" enter range :";
    cin >> start >> end;
    
    for (int num = start; num <= end; num++){
        int temp = num, sum = 0, digits = 0;
        
        while( temp > 0){
            
            digits++;
            temp /= 10;

        }
        temp = num;

        while (temp > 0){

            int digit = temp %10;
            sum += 10;

        }
        if ( sum == num)
        cout<<num <<" ";
     }
     return 0;

}