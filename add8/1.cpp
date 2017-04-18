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
  while(cin >> lastName >> book){
    auto it = favorBooks.find(book);
    if (it!=favorBooks.end()){
      cout << "Interests coincode: " << lastName << ' ' << (*it).second;
      break;
    }
    favorBooks.insert({book, lastName});
  }
}
