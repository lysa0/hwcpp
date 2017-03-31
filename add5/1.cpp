#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  vector<int> numbers;
  int num;
  double mean{};
  cin >> num;
  while(num){
    numbers.push_back(num);
    mean+=num;
    cin >> num;
  }
  mean/=numbers.size();
  vector<int>::reverse_iterator iter=numbers.rend();
  while(iter!=numbers.rbegin()){
    iter--;
    if (*iter>mean)
      cout << *iter << " ";
  }
}
