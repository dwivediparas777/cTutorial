#include<iostream>

using namespace std;

int globalVar = 123;

int main(int argc, char const *argv[]) {
  int localVar = 321;
  int globalVar = 121;
  cout << "local variable :: " << localVar << endl;
  cout << "gobal variable name with local scope :: " << globalVar << endl;
  cout << "gobal variable name with global scope :: " << ::globalVar << endl;
  ::globalVar = 777;
  cout << ::globalVar << endl;
  return 0;
}
