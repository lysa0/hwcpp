#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  map<pair<string, string>, string> favorBooksAndBands;
  string lastName, book, band;
  while(cin >> lastName >> book >> band){
    auto it = favorBooksAndBands.find({book, band});
    if (it!=favorBooksAndBands.end()){
      cout << "Interests coincode: " << lastName << ' ' << (*it).second;
      break;
    }
    favorBooksAndBands.insert({{book, band},lastName});
  }
}
