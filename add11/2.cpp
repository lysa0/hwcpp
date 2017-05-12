#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  ifstream fin("2.in");
  vector<int> vi;
  int a, min1{INT_MAX}, min2{INT_MAX};
  while(fin >> a){
    if (a%2==1)
      min1=min(min1, a);
    else
      min2=min(min2, a);  
  }
  cout << (min1<min2?"Yes":"Not");
  /*cout << all_of(vi.begin(), vi.end(), [](int i){return any_of(vi.begin(), vi.end() [](int j){return if ((i%2==0)&&(j%2==1)
  i>j
  else return true;})};*/
}
