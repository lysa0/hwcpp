#include<bits/stdc++.h>
using namespace std;
struct evalStat{
  int sum, cnt;
};
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  map<string, evalStat> evals;
  string lastName;
  int eval;
  cin >> lastName;
  while(lastName!="*"){
    cin >> eval;
    evals[lastName].sum+=eval;
    evals[lastName].cnt++;
    cin >> lastName;
  }
  for(auto eval:evals)
    cout << eval.first << " " << eval.second.sum*1./eval.second.cnt << endl;
}
      
