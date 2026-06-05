#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, sum = 0, digits = 0;
    cout <<" enter number : ";
    cin >> num;

   temp =  num;

    while (temp > 0) {
        digits++;
        temp /=10;
      }
       
      temp = num;

      while( temp > 0 ) {
        int digit  = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
      }

      if ( sum == num )
          cout<<" Armstrong number ";
      else
          cout<<" Not Armstrong number ";
         return 0;
    }





}