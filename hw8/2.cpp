#include<bits/stdc++.h>
using namespace std;
void solve();
bool checkDigits(vector<int> & v, int & lastDigit);
int main(){
  solve();
  return 0;
}
void solve(){
  vector<int> v {2, 32, 162};
  int lastDigit = 2;
  bool b=checkDigits(v, lastDigit);
  cout << b;
}
bool checkDigits(vector<int> & v,int & lastDigit){
  return all_of(v.begin(), v.end(), [lastDigit](int i){return lastDigit==(i%10);});
}
