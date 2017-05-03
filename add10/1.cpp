#include<bits/stdc++.h>
using namespace std;
bool hasRoute(map<string, set<string>> &routes, string from, string to);
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  string s1, s2;
  map<string, set<string>> routes;
  while(cin >> s1 && s1!="*" && cin >> s2){
    routes[s1].insert(s2);
  };
  cout << (hasRoute(routes, "СПб", "Париж")?"Да":"Нет");
}
bool hasRoute(map<string, set<string>> &routes, string from, string to){
  auto toCities = routes.find(from);
  if (toCities==routes.end())
    return 0;
  if ((toCities->second).find(to)!=(toCities->second).end())
    return 1;
  for (auto fCity:toCities->second){
    auto sCity = routes.find(fCity);
    if (sCity==routes.end())
      continue;
    if (sCity->second.find(to)!=sCity->second.end())
      return 1;
  }
  return 0;
}
