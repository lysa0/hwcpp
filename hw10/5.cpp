#include<bits/stdc++.h>
#define ASSERT(m) if(!(m))cout<<"not i>0!";
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  vector<int> vi {1,2,-3,4,-9,0,10};
  for(auto i:vi){
    cout << '\n' << i << " ";
    ASSERT(i>0);
  }
}

