#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>

using namespace std;

int32_t main(int argc, char const *argv[]) {
  int arr[7] = {-19, -35, -37, -39, -38, -33, -32};
  vector<int> vecArr = {1, 5, 7, -9, 8, 3, -2};

  // all_of returns true when each element in range satisfies specified property, else returns false.
  // output for below will be All elements are negative
  all_of(arr, arr+5, [](int x) {return x<0;})?
          cout << "All elements are negative" << '\n':
          cout << "All elements are not negative" << '\n';

  // any_of Returns true if at least one element satisfies the property else returns false.
  // output for below will be No elements are negative
  any_of(vecArr.begin(), vecArr.begin()+3, [](int x) {return x<0;})?
          cout << "Some elements are negative" << '\n':
          cout << "No elements are negative" << '\n';

  // none_of Returns true if none of elements satisfies the given condition else returns false.
  // output for below will be There are negative elements
  none_of(vecArr.begin(), vecArr.begin()+4, [](int x) {return x<0;})?
          cout << "No elements are negative" << '\n':
          cout << "There are negative elements" << '\n';

  // iota assign continous value to array
  // output for below will be 23, 24, 25, 26, 27, 28
  int ar[6] = {0};
  iota(ar, ar+6, 23);
  for (int i = 0; i < 6; i++) {
    cout << ar[i] << endl;
  }

  return 0;
}
