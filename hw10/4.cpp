#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  char a[8], b[4], c[4];
  auto& x = (double&)(a);
  cin >> x;
  for(int i=0; i<8; i++){
    cout << (int)a[i] << " ";
    if (i<4)
      b[i]=a[i];
    else
      c[i%4]=a[i];
  }
  auto& i1 = (int&)b;
  auto& i2 = (int&)c;
  cout << "\n" << (int)i1 << " " << (int)i2;
}
