#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
  question:
The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)^2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

long long sumsquare(){
  int i=1;
  long long sum=0;
  while (true){
    if (i>100) break;
    sum=sum+i*i;
    i++;
  }
  return sum;
}

long long squaresum(){
  int i=1;
  long long sum=0;
  while (true){
    if (i>100) break;
    sum=sum+i;
   i++;
  }
 return sum*sum;
}



int main(){

  int diff=squaresum()-sumsquare();
  cout << diff << endl;
  return 0;
}
