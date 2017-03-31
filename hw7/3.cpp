#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  list<int> numbers;
  int num{};
  cin >> num;
  while(num){
    numbers.push_back(num);
    cin >> num;
  }
  list<int>::reverse_iterator iter = numbers.rbegin();
  do{
    cout << *iter << ' ';
  }while(++iter!=numbers.rend());
}
