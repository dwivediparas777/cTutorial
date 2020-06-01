#include <iostream>
#include<cmath>
using namespace std;

void printpi(){
  double pi = 2*acos(0.0);
  cout << "pi from cos :: " << pi << endl;
  pi = 2*asin(1.0);
  cout << "pi from sin :: " << pi << endl;
  cout << "pi from cmath :: " << M_PI << endl;
}
int main(int argc, char const *argv[]) {
  printpi();
  return 0;
}
