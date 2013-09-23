#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
  question description:
  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
  Find the sum of all the multiples of 3 or 5 below 1000.
*/

bool multiple(int num){
  if (num%3==0 || num%5==0) return true;
  else return false;
}

int getSum(){
  int num=0;
  int sum=0;
  while(true){
    if (num==1000) break;
    if (multiple(num)) sum=sum+num;
    num++;
  }
  return sum;
}


int main(){
  cout << getSum() << endl;

}
