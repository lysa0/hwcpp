#include<bits/stdc++.h>
using namespace std;
void solve();
bool compare(const char* s1, const char* s2);
int main(){
  solve();
}
void solve(){
  char s1[100];
  char s2[100];
  cin.getline(s1, 100);
  cin.getline(s2, 100);
  cout << compare(s1, s2);
}
bool compare(const char* s1, const char* s2){
  for(int i=0; ; i++){
    if (s1[i]!=s2[i])
      return 0;
    if (s1[i]=='\0' && s2[i]=='\0')
      break;
    if (s1[i]=='\0' || s2[i]=='\0')
      return 0;
  } 
  return 1;
}
