#include<iostream>
#include<vector>
using namespace std;

void display2DVector(vector<vector<int>> v){
  for(int i=0; i<v.size(); i++){
    for(int j=0; j<v[i].size(); j++){
      cout << v[i][j] << "  ";
    }
    cout << endl;
  }
};
void disp2DVec(vector<vector<int>> v){
  for(int i=0; i<v.size(); i++){
    for(auto it=v[i].begin(); it != v[i].end(); it++){
      cout << *it << "  ";
    }
    cout << endl;
  }
};
int main(int argc, char const *argv[]) {
  vector<vector<int>> v = {{1, 2, 3},
                           {4, 5, 6},
                           {7, 8, 9}};
  vector<int> v2 = {2, 5, 8};
  // push to vector
  v.push_back(v2);
  v[0].push_back(9);
  // display vector
  display2DVector(v);
  // pop from vector v
  v[v.size()-1].pop_back();
  v[v.size()-1].pop_back();
  v[v.size()-2].pop_back();
  // display vector
  disp2DVec(v);
  return 0;
};
