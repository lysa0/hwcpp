#include<bits/stdc++.h>
using namespace std;

/*int sum(){
  return 0; это вроде не очень хорошо
}*/
template<class T>
auto sum(T a){
  return a; // так ведь лучше?
}
template<class T1, class ... T>
T1 sum(const T1 &first, const T & ... other){
  return first+sum(other...);
}
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  cout << sum(1, 3, 5) << endl;
  cout << sum(1.2, 1.9, 8.3, 9.4, 0.2, 4.5) << endl;
  string s1{"abc"}, s2{"123"}, s3{"defefwdsfas"};
  cout << sum(s1, s2, s3);
}
