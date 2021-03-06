#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  map<string, string> favorBooks, favorBands;
  string lastName, book, band;
  while(cin >> lastName >> book >> band){
    auto it1 = favorBooks.find(book),
         it2 = favorBands.find(band);
    if ((it1==favorBooks.end()) != (it2==favorBands.end())){
      cout << "Interests overlap: ";
      if (it1!=favorBooks.end())
        cout << lastName <<  " " << (*it1).second;
      else
        cout << lastName << " " << (*it2).second;
      break;
    }
    favorBooks.insert({book, lastName});
    favorBands.insert({band, lastName});
    // если оба интереса совпадают, прежний человек сотрется, но ведь нужно найти только двух, одним из которых будет новый
  }
}
