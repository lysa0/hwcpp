#include<bits/stdc++.h>
using namespace std;
struct evalStat{
  evalStat(int sum, int cnt){
    this->sum=sum;
    this->cnt=cnt;
  }
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
    auto iter = evals.find(lastName);
    if (iter==evals.end()){
      evals.insert({lastName,{0,0}});
      iter=evals.find(lastName);
    }
    iter->second.sum+=eval;
    iter->second.cnt++;
    cin >> lastName;
  }
  for(auto eval:evals)
    cout << eval.first << " " << eval.second.sum*1./eval.second.cnt << endl;
}
      
