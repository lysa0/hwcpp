#include<bits/stdc++.h>
using namespace std;
void solve();
int sumDgt(int n);
int main(){
  solve();
  return 0;
}
void solve(){
  multimap<int, int> mmii;
  int i;
  while(cin>> i && i!=0)
    mmii.insert({sumDgt(i), i});
  for(auto ii:mmii)
    cout << ii.second << ' ';
}
int sumDgt(int n){
  int res{};
  while(n)
    res+=n%10, n/=10;
  return res;
}
