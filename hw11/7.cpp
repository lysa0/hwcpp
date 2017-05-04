#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
template<class T>
auto sum(initializer_list<T> lst){
  auto res=*lst.begin();
  for(auto iter=lst.begin()+1; iter!=lst.end(); ++iter)
    res+=*iter;
  return res;
}
void solve(){
  cout << sum({1, 2, 3, 4, 5}) << endl;
  cout << sum({1.1, 2.2, 3.3, 4.4, 5.5}) << endl;
  string s1{"ab"}, s2{"cd"}, s3{"ef"}, s4{"12"}; 
  cout << sum({s1, s2, s3, s4});
}
