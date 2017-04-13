#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  map<string, string> favorBooks;
  string lastName, book;
  while(cin >> lastName >> book && favorBooks.find(book)==favorBooks.end())
    favorBooks[book]=lastName;
  cout << "Interests coincode: " << lastName << ' ' << favorBooks[book];
}
