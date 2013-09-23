#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
  question description:
  2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

  What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

bool divisble(int num){
  for (int i=1; i<=20; i++){
    if(num%i!=0) return false;
  }
  return true;
}

int smallest(){
  int k=2*19*3*5*7*11*13*17;
  while(true){
    if (divisble(k)) break;
    k++;
  }
  return k;
}


int main(){
  cout << smallest() << endl;
  return 0;
}
