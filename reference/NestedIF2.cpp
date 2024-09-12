#include <iostream>
using namespace std;
 
int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
 
   // check the boolean condition
   if( a == 100 ) {
      // if condition is true then check the following
      if( b == 200 ) {
         // if condition is true then print the following
         cout << "Value of a is 100 and b is 200" << endl;
      } else {
      	cout << "Out of reach" << endl;
	  }
      
   }
   cout << "Exact value of a is : " << a << endl;
   cout << "Exact value of b is : " << b << endl;
 
   return 0;
}