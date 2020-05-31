#include<iostream>
#include<vector>

using namespace std;

void traverseVector(vector<int>* v){
  for(int i=0; i<7;i++){
    for (auto j = v[i].begin(); j!=v[i].end(); j++) {
      cout << *j << "  ";
    }
    cout << endl;
  }
};

int main(int argc, char const *argv[]) {
  vector<int> v[7];

  // insertion
  for(int i=1; i<8; i++){
    for(int j=0; j<i; j++){
      v[i-1].push_back(i+j);
    }
  }

  // display
  traverseVector(v);
  return 0;
};
