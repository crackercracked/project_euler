#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
  question:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

*/

bool prime(int num){
  for (int i=2; i<num; i++){
    if(num%i==0) return false;
  }
  return true;
}

int kthprime(int k){
  int num=2;
  int count=0;
  while(true){
    if (count==k) break;
    if (prime(num)) count++;
    num++;
  }
  return num-1;
}


int main(){
  if (prime(9)) cout << "p" << endl;
  cout << kthprime(10001) <<endl;
  return 0;
}
