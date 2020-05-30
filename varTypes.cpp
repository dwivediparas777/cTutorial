#include<iostream>

using namespace std;

class Solution {
public:
  /* static variable */
  static int staticVar;
  /* instance variable */
  int instVar;
public:
  void incrementer(){
    ++staticVar;
  };
  void ageAdder(){
    /* local Variable */
    int age = 65;
    cout << "Age is :: " << age+5 << endl;
  };
};

int Solution::staticVar = 0;

int main() {
  Solution sol1;
  sol1.ageAdder();
  sol1.incrementer();
  cout << "static value :: " << sol1.staticVar << endl;
  return 0;
}
