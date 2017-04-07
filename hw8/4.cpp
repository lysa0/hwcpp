#include<bits/stdc++.h>
using namespace std;
void solve();
template<typename T> 
void print(T & vect){
  for (auto &v:vect)
    cout << v << ' ';
  cout << endl;
}
int main(){
  solve();
  return 0;
}
void solve(){
  vector<int> intV {1, 2, 3, 4, 5};
  vector<string> strV {"123", "456", "789"};
  print(intV);
  print(strV);
}
