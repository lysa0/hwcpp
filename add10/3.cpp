#include<bits/stdc++.h>
using namespace std;
bool hasRoute(map<string, set<string>> &routes, unordered_map<string, bool> &routesUsd, pair<string,string> disRoute, string from, string to);
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  string s1, s2;
  map<string, set<string>> routes;
  vector<pair<string, string>> vRoutes;
  while(cin >> s1 && s1!="*" && cin >> s2){
    routes[s1].insert(s2);
    vRoutes.push_back({s1, s2});
  };
  for (auto vRoute:vRoutes){
    unordered_map<string, bool> routesUsd;
    if (!hasRoute(routes, routesUsd, vRoute, "СПб", "Париж")){
       cout << "Да";
       return;
    }
  }
  cout << "Нет";
}
bool hasRoute(map<string, set<string>> &routes, unordered_map<string, bool> &routesUsd, pair<string, string> disRoute, string from, string to){
  routesUsd[from]=1;
  if (make_pair(from, to)==disRoute)
    return 0;
  auto toCities = routes.find(from);
  if (toCities==routes.end())
    return 0;
  if (toCities->second.find(to)!=toCities->second.end())
    return 1;
  for (auto fCity:toCities->second){
    if (!routesUsd[fCity] && hasRoute(routes, routesUsd, disRoute, fCity, to))
      return 1;
  }
  return 0;
}
