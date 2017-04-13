#include<bits/stdc++.h>
using namespace std;
void solve();
int sumDgt(int n);
int main(){
  solve();
  return 0;
}
void solve(){
  vector<int> vi;
  int i;
  while(cin >> i && i!=0){
    vi.push_back(i);
  }
  sort(vi.begin(), vi.end(), 
    [](int i, int j){
      return sumDgt(i)<sumDgt(j);
    });
  for(auto i:vi)
    cout << i << ' ';
}
int sumDgt(int n){
  int res{};
  while(n)
    res+=n%10, n/=10;
  return res;
}
