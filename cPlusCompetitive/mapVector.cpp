#include<iostream>
#include<vector>
#include<map>
using namespace std;

map<vector<int>, int> mapVec;

void checkVisited(vector<int> v){
  cout << (mapVec.find(v)!=mapVec.end()) << endl;
};

int main(int argc, char const *argv[]) {
  vector<int> v1 = {1, 2, 3};
  mapVec[v1] = 1;
  v1 = {4, 5, 6};
  mapVec[v1] = 1;
  v1 = {7, 8, 9};
  mapVec[v1] = 1;

  vector<int> vCheck = {1, 2, 3};
  checkVisited(vCheck);
  vCheck = {1, 3, 3};
  checkVisited(vCheck);
  return 0;
};
