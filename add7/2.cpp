#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  vector<vector<int>> vvi{{10, 21}, {1,2}, {2,4,3}, {2, 4, 6, 8}};
  cout << any_of(vvi.begin(), vvi.end(), [](vector<int> vi){return all_of(vi.begin(), vi.end(), [](int i){return i%10==0;});});
}
