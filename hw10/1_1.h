#include<bits/stdc++.h>
using namespace std;
class Celebration{
  map<string, string> celebrs;
  public:
  Celebration(){
  }
  void getCelebr();
  string getCelebr(string date);
  void setCelebr(string fileName);
};
