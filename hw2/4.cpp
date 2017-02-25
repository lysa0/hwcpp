#include<bits/stdc++.h>
using namespace std;
void solve();
void twice(int *a);
int main(){
  solve();
  return 0;
}
void solve(){
  int i = 5;
  twice(&i);
  cout << i;
}
void twice(int * a){
  (*a)<<=1;
}

