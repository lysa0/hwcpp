#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  const int n=4;
  char c[n]{};
  int cnt{};
  for(int i=0; i<n; i++){
    cin >> c[i];
    cnt+=__builtin_popcount(c[i]);
  }
  cout << cnt;
}
