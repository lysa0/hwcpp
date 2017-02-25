#include<bits/stdc++.h>
using namespace std;
void solve();
void clear(int * a, int n);
void copy(int * b, int * a, int n);
int main(){
  solve();
  return 0;
}
void solve(){
  int a[10];
  clear(a, 10);
  int b[10];
  copy(b, a, 10);
  for(int *i=b; i<b+10; i++)
    cout << *i << " \n"[i==b+9];
}
void clear(int *a, int n){
  for(int *i=a; i<a+n; i++)
    *i=0;
}
void copy(int *b, int *a, int n){
  for(int *i=b, *j=a; i<b+n, j<a+n; i++, j++)
    *i=*j;
}
