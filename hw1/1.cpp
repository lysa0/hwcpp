#include<bits/stdc++.h>
using namespace std;
double solve(int n);
int main(){
  int n{};
  cin >> n;
  cout << "Result = " << setprecision(10) << solve(n) << endl;
  return 0;
}
double solve(int n){
  double res{};
  for(int i=1; i<=2*n+1; i+=2)
    res+=1./pow(i, 3);
  return res;
}

