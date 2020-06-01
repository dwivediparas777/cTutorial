#include<iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<int> sieveOfEratosthenes(int N){
  bool prime[N+1];
  vector<int> primeVals;
  memset(prime, true, sizeof(prime));
  for(int i=2; i*i<=N;i++){
    if(prime[i] == true){
      for(int j=i*i; j<=N;j+=i){
        prime[j]=false;
      }
    }
  }
  for(int i=2; i<=N; i++){
    if(prime[i]==true)
      primeVals.emplace_back(i);
  }
  return primeVals;
};

void disp2DVec(vector<int> v){
  for(auto it=v.begin(); it != v.end(); it++){
    cout << *it << "  ";
  }
  cout << endl;
};

int main(int argc, char const *argv[]) {
  int N=0;
  cin >> N;
  vector<int> prime = sieveOfEratosthenes(N);
  disp2DVec(prime);
  return 0;
};
