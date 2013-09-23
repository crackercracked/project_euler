#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
  question:
Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

bool pyth(int a, int b, int c){
  if (a*a+b*b==c*c) return true;
  else return false;
}

long long findPyth(){
  //int a=1;  
  //int b=1;  
  //int c=1000-a-b;
   for (int a=1; a<1000; a++){
     for (int b=1; b<1000; b++){
       int c=1000-a-b;
       if (pyth(a,b,c)){
         return a*b*c;
         //cout << "a=" << a << " b=" << b << " c=" << c << endl;
         //break;
       }
     }
  }
}




int main(){
  cout << findPyth() << endl;

  return 0;
}
