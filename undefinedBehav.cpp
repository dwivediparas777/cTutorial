#include<iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[]) {
  cout << "case 1 uninitialized var" << endl;
  bool val;
  cout << "value of val is :: " << val << endl;

  cout << "case 2 accessing null pointer value" << endl;
  int *ptr = NULL;
  //cout << "value of pointer ptr" << *ptr << endl;

  cout << "case 3 accessing out of bound" << endl;
  int arr[5];
  for(int i=0; i<=5;i++)
    cout << arr[i] << endl;

  cout << "case 4 beyond max length" << endl;
  int num = INT_MAX;
  cout << num+1 << endl;

  cout << "case 5 String literal modification" << endl;
  char *s = "undefined behaviour";
  //cout << *s << endl;
  //s[0]='U';
  //cout << *s << endl;

  cout << "case 6 multiple variable modification before defined seq point" << endl;
  int i=5;
  int p = i++*i++;
  cout << p << endl;

  cout << "case 7 divide by 0" << endl;
  int z = p/0;
  cout << z << endl;

  return 0;
}
