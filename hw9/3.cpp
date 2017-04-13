#include<bits/stdc++.h>
using namespace std;
void solve();
void sortedVectorByLastDigit(vector<int> & vi, int n);
int main(){
  solve();
  return 0;
}
void solve(){
  vector<int> vi;
  int n, i;
  cout << "Please enter N: ";
  cin >> n;
  cout << "\nPlease enter vector<int> until 0: ";
  while(cin >> i && i!=0)
    vi.push_back(i);
  sortedVectorByLastDigit(vi, n);
  for(auto i:vi)
    cout << i << ' ';
}
void sortedVectorByLastDigit(vector<int> & vi, int n){
  sort(vi.begin(), vi.end(), 
    [n](int i, int j){
      return (i%(long long)pow(10, n)) < (j%(long long)pow(10, n));
    });
}

