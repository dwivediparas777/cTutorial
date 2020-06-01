#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

void swapTwoNo(int a,int b){
  a^=b;
  b^=a;
  a^=b;
  cout << "after swapping a = " << a << "; b = " << b << endl;
};

void loopArrayPrint(auto a[]){
  for(int i=0; a[i]; i++){
    cout << a[i] << "  ";
  }
  cout << endl;
};

int mostSignificantBit(int number){
  double k = log10(number);
  k -= floor(k);
  int x = pow(10, k);
  return x;
};

int main(int argc, char const *argv[]) {
  int a=3, b=5, number = 1684352168;
  swapTwoNo(a, b);
  char c[]="test the pointer";
  loopArrayPrint(c);
  // gcd of two numbers
  cout << "gcd for a = " << a << ", and b = " << b << " is " << __gcd(a, b) << endl;
  // most significant bit
  cout << "most significant bit for " << number << " is " << mostSignificantBit(number) << endl;
  // no of digits in number
  cout << "no of digits in number " << number << " is " << (floor(log10(number))+1) << endl;
  // no of digits in number
  cout << "is number " << number << " power of 2 = " << (number && (!(number&(number-1)))) << endl;
  return 0;
};
