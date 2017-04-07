#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  map<string, int> bestEvals;
  int n;
  cin >> n;
  while(n--){
    string lastName;
    int eval;
    cin >> lastName >> eval; 
    if (bestEvals.find(lastName)!=bestEvals.end())
      bestEvals[lastName]=max(bestEvals[lastName], eval);
    else
      bestEvals[lastName]=eval;
  }
  for(auto bestEval:bestEvals)
    cout << bestEval.first << " " << bestEval.second << endl;
}
