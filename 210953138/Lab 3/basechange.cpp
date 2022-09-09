#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

    void dec_to_base(int number) {
     int rem, base;
while (number > 0) {
        stack<int> s;
        int rem = (number % base); // taking remainder //
        number = number / base;
        s.push(rem);

     }
    }

  int main() {
      int number,  base;
      stack<int> s;
      cout << "Enter a number: ";
      cin >> number;
      cout << "Enter the base number: ";
      cin >> base;
      dec_to_base(number);
      cout  << "The number after base change is: " << s ;


  }

