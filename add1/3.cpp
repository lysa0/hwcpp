#include<bits/stdc++.h>
using namespace std;
void solve();
int binSearch(int * a, int n);
int main(){
  solve();
  return 0;
}
void solve(){
  int a[1000]{};
  for(int *i=a; i<a+32; i++)
    *i=3;
  cout << binSearch(a, 1000);
}
int binSearch(int * a, int n){
  int l=0,
      r=n-1,
      m;
  while(l-r){
    m=(l+r)>>1;
    if (a[m]==0)
      r=m;
    else
      l=m+1;
  }
  return l;
}
