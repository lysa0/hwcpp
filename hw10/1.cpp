#include<bits/stdc++.h>
#include "1_1.cpp"
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  string date{};
  cout << "Enter date %MM.%DD: ";
  Celebration cl = Celebration();
  cl.setCelebr("cl.in");
  cin >> date;
  cout << cl.getCelebr(date);
}
