#include<bits/stdc++.h>
#define eps 1e-7
#define delta 1e-9
using namespace std;
void solve();
bool degThr(const int a);
int main(){
  solve();
}
void solve(){
  int a[5]{15, 27, 243, 100, 387420488};
  for (int *it = a; it<a+5; it++){
      cout << *it << " its " << degThr(*it) << " degree three\n"; 
  }
}
bool degThr(int a){
  for(; a%3==0; a/=3);
  return a==1;
}
