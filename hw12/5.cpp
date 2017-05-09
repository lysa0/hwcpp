#include<bits/stdc++.h>
using namespace std;
void solve();
int count1(int n),
    count2(int n);
bool isSimple(int n);
int main(){
  solve();
  return 0;
}
void solve(){
  int n{};
  cin >> n;
  auto fut1 = async(launch::async, count1, n);
  auto fut2 = async(launch::async, count2, n);
  cout << fut1.get() + fut2.get();
}
int count1(int n){
  int cnt{};
  for(int i=2; i<n/2; i++)
    if (isSimple(i)){
      cnt++;
      //cout << i << ' ';
    }
  return cnt;
}
int count2(int n){
  int cnt{};
  for(int i=n/2; i<=n; i++)
    if(isSimple(i)){
      cnt++;
      //cout << i << ' ';
    }
  return cnt;
}
bool isSimple(int n){
  double sqrtN=sqrt(n);
  for(int i=2; i<=sqrtN; i++)
    if (n%i==0)
      return false;
  return true;
}
