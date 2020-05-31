/*
storageclass > keyword > lifetime > visibility > initial value
Automatic > auto > function block > local > garbage
External > extem > whole program > global > zero
Static > static > whole program > local > zero
Register > register > function block > local > garbage
mutable > mutable > class > local > garbage
*/
#include<iostream>
using namespace std;
int i = 21;
int main(int argc, char const *argv[]) {
  auto a = "asda";
  extern int i;
  i=12;
  cout << a << endl;
  cout << i << endl;
  return 0;
}
