#include<bits/stdc++.h>
using namespace std;
int solve(int * a);
int main(){
  int a[10] {2,3,7,9,0,0,0,0,0,0};
  cout << "Count elements = " << solve(a) << endl;
  return 0;
}
int solve(int * a){
  int it{};
  while(*a++)
    it++;
  return it;
}
