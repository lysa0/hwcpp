#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  int * a[10]{};
  int it{};
  for(int **i=a; i<a+10; it++, i++){
    *i = new int[it+1]{};
    *(*i+it)=1;
  }
  it=0;
  for(int **i = a; i < a+10; it++, i++)
    for (int *j = *i; j <= *i+it; j++)
      cout << *j << " \n"[j==*i+it];
  //Для проверки
  //for(int i=0; i<10; i++)
  //  for(int j=0; j<=i; j++)
  //    cout << a[i][j] << " \n"[j==i];
}
