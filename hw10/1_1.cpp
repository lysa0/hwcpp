#include<bits/stdc++.h>
#include "1_1.h"
using namespace std;
void Celebration::setCelebr(string fileName){
  ifstream fin(fileName);
  string s{}, date{}, celebr{};
  while(getline(fin, s) && s!=""){
    date = s.substr(0, 5);
    celebr = s.substr(6);
    Celebration::celebrs.insert({date, celebr});
  }
  fin.close();
}
void Celebration::getCelebr(){
  for(auto cel: celebrs)
    cout << cel.first << " " << cel.second << endl;
}
string Celebration::getCelebr(string date){
  auto it = celebrs.find(date);
  if (it!=celebrs.end())
    return it->second;
  return "Праздника нет!";
}
