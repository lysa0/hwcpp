#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  int a, res{};
  cin >> a;
  while(a){
    res+=(a&1);
    a>>=1;
  }
  cout << res;
}
