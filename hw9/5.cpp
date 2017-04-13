#include<bits/stdc++.h>
using namespace std;
void solve();
template<typename T>auto mean1(T & vt)->double;
template<class T> auto mean2(T & vt)->double;
int main(){
  solve();
  return 0;
}
void solve(){
  vector<int> vi = {1, 2, 3, 4, -5, -6, 7};
  list<double> ld = {1.2, 3.4, 5.4, -2.1, 2.5, 1.5, -9.0};
  cout << mean1(vi) << endl;
  cout << mean2(vi) << endl;
  cout << mean1(ld) << endl;
  cout << mean2(ld) << endl;

}
template<class T>
auto mean1(T & vt)->double{
  typename T::value_type mean{};
  int cnt{};
  for(auto &t: vt)
    if (t>0)
      mean+=t, cnt++;
  return 1.*mean/cnt;
}
template<class T>
auto mean2(T & vt)->double{
  decltype(*vt.begin()+0) mean{};
  int cnt{};
  for (auto &t:vt)
    if (t>0)
      mean+=t, cnt++;
  return 1.*mean/cnt;
}
