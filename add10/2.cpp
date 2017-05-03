#include<bits/stdc++.h>
using namespace std;
bool hasRoute(map<string, set<string>> &routes, unordered_map<string, bool> &routesUsd, string from, string to);
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  string s1, s2;
  map<string, set<string>> routes;
  unordered_map<string, bool> routesUsd;
  while(cin >> s1 && s1!="*" && cin >> s2){
    routes[s1].insert(s2);
    routesUsd[s1]=true;
  };
  cout << (hasRoute(routes, routesUsd, "СПб", "Париж")?"Да":"Нет");
}
bool hasRoute(map<string, set<string>> &routes, unordered_map<string, bool> &routesUsd, string from, string to){
  routesUsd[from]=0;
  auto toCities = routes.find(from);
  if (toCities==routes.end())
    return 0;
  if (toCities->second.find(to)!=toCities->second.end())
    return 1;
  for (auto fCity:toCities->second){
    if (routesUsd[fCity] && hasRoute(routes, routesUsd, fCity, to))
      return 1;
  }
  return 0;
}
