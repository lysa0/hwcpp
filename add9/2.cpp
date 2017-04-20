#include<bits/stdc++.h>
#include "2_1.h"
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  vector<int> vi {1,2,3,4,5,6};
  vector<int> vi1 {1,2,3,4,4,5};
  vector<int> vi2 {1,1,2,3,4,4};
  list<double> ld {1.3,2.5,6.5,7.6};
  list<string> ls {"abc", "ab", "abd", "abd"};
  cout << *eqVal(vi.begin(), vi.end()) << endl; // Не нашло, выводит бред
  cout << *eqVal(vi1.begin(), vi1.end()) << endl; // Выводит 4
  cout << *eqVal(vi2.begin(), vi2.end()) << endl; // Выводит 1
  cout << *eqVal(ld.begin(), ld.end()) << endl; // Не нашло, выводит бред
  cout << *eqVal(ls.begin(), ls.end()) << endl; // Выводит abd
}
