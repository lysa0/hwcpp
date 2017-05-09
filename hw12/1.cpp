#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  ifstream fin("abc.txt");
  char c{};
  bool b{};
  int cnt{};
  while(fin >> c){
    if (c=='<')
      b=1;
    if (c=='>')
      b=0;
    if (b==1 && isalpha(c))
      cnt++;
  }
  cout << cnt;
}
