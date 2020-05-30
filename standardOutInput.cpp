#include<iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  char sample[] = "standartInputOutput";
  int day = 0;
  int randomVar;
  cout << sample << " - A c++ tutorial" << endl;
  cin >> day;
  cout << "No of days :: " << day << endl;
  cout << "default value of argument :: " << argc << endl;
  cout << "variable without initialization :: " << randomVar << endl;
  return 0;
}
