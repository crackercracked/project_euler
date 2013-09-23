#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


/*
  question description:
  A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
  Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool palindromic(long long num){
  stringstream converter;
  converter << num;
  string s=converter.str();
  int i=0; int j=s.size()-1;
  while (true){
    if (i>=j) break;
    if (s.at(i)!=s.at(j)) return false;
    i++; j--;
  }
  return true;
}

long long findlargest(){
  long long largest=0;
  for (int i=100; i<=999; i++){
     for (int j=100; j<=999; j++){
        int num=i*j;
        if (palindromic(num) && largest <num) largest=num;
     } 
  }
  return largest;
}


int main(){
  //if (palindromic(18981)) cout << "palin" << endl;
   cout << findlargest() << endl;
  return 0;
}
