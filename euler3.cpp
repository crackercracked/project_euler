#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*
  question description:
  The prime factors of 13195 are 5, 7, 13 and 29.
  What is the largest prime factor of the number 600851475143 ?
*/


void printVec(vector<long> &vec){
  for (long i=0; i<vec.size(); i++) cout << vec[i] << " ";
  cout << "" << endl;
}

bool prime(long num){
  if (num%2==0) {
    if (num==2) return true;
    else return false;
  }
  else{
    bool flag=true;
    for (long i=3; i<num; i=i+2){
      if (num%i==0) flag=false;
    }
    return flag;
  }
}

void largestPrimeFactor(long long num){
  long long i=2;
  //vector<long> vec;
  while(true){
    if(i>num) break;
    else {
      if (num%i==0){
        cout << "i=" << i << endl;
        while(true){ 
          if(num%i!=0) break;
          long long reduce=num/i;
          num=reduce;
          cout << "reduced to " << num << endl;
        }
      }//end of if
      i++;
    }//end of elase
  }//end of while
  cout << i-1 << endl;
  if (prime(i-1)) cout << "this is a prime" << endl;
}


int main(){
  long long num=600851475143; cout << "num=" << num << endl;
  largestPrimeFactor(num);
  //if (prime(145)) cout << "prime" << endl;
  return 0;
}
