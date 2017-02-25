#include<bits/stdc++.h>
using namespace std;
double solve();
int main(){
  cout << "Result = " << setprecision(10) << solve();
  return 0;
}
double solve(){
  int a{},
      it{};
  double res{};
  cin >> a;
  while(a){
    it++;
    res+=a;
    cin >> a;
  }
  res/=it+(it==0);
  return res;
}
