#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  int * a = new int[10] {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
  for (int *i=a; i<a+10; i++)
    for (int *j=i; j<a+10; j++)
      if (abs(*j-*i)==1){
        cout << "Yes\n";
        exit(0);
      }
  cout << "No\n";
}
