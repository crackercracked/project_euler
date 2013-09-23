#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
  question:
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

bool prime(int num){
  for (int i=3; i<num; i=i+2){
    if (num%i==0) return false;
  }
  return true;
}


long long sum(){
  long long max1=1000000;
  //vector<long> vec(max/2+1);
  //vec.push_back(2);
  long long sum=2;
  for (long i=3; i<max1; i=i+2){
    if (prime(i)){
      sum=sum+i;
    }
  }
  for (int i=max1+1; i<2000000; i=i+2){
    if (prime(i)){
      sum=sum+i;
    }
  }
  return sum;
}


int main(){
  cout << sum() << endl;
  return 0;
}
