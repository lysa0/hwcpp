#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  map<pair<string, string>, string> favorBooks;
  string lastName, book, band;
  while(cin >> lastName >> book >> band && favorBooks.find({book, band})==favorBooks.end())
    favorBooks[{book, band}]=lastName;
  cout << "Interests coincode: " << lastName << ' ' << favorBooks[{book, band}];
}
