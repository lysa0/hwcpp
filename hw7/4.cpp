#include<bits/stdc++.h>
using namespace std;
template<typename T>
T swp(T &a, T &b){
  T tmp=a;
  a=b;
  b=tmp;
}
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  double x, y;
  cin >> x >> y;
  swp(x, y);
  cout << x << " " << y << endl;
  int g, h;
  cin >> g >> h;
  swp(g, h);
  cout << g << " " << h << endl;
}
