#include<bits/stdc++.h>
#include "1_1.h"
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  int n;
  //while(cin >> n && n)
  for(int n=1; n<1000000000000; n++)
    if (isPerfect(n))
      cout << n << " isPerfect = " << isPerfect(n) << endl;
}
