#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){ // в этом задании совсем не уверен
  auto a = unique_ptr<int[]>(new int[11]); 
  for(int i=0; i<10; i++)
    a[i]=i;
  for(int i=0; i<10; i++)
    cout << a[i] << " \n"[i==9];
  a[10]=move(a[0]);
  for(int i=0; i<9; i++)
    a[i]=move(a[i+1]);
  a[9]=move(a[11]);
  for(int i=0; i<10; i++)
    cout << a[i] << " \n"[i==9];
}
