#include<bits/stdc++.h>
using namespace std;
void solve();
void order(int &a, int &b, int &c);
int main(){
  solve();
  return 0;
}
void solve(){
  int a,
      b,
      c;
  cout << "Enter a, b and c: ";
  cin >> a >> b >> c;
  order(a, b, c);
  cout << "\na = " << a << "\nb = " << b << "\nc = " << c << endl;
}
void order(int &a, int &b, int &c){
  int t1=min(a,min(b, c)),
      t2=max(a,max(b,c));
  b=min(max(a,b),min(max(a,c),max(b,c)));
  a=t1;
  c=t2;
}


