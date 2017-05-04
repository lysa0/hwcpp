#include<bits/stdc++.h>
#define TRACE(a) cout << "Значение " << #a << "="  << a << endl;
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  vector<int> vi {1,2,3,4,5,6,7,8,9,0};
  for(int i=0; i<10; i++)
    TRACE(vi[i]);  // Выводит именно i, а не индекс :(
  TRACE(vi[5]);   // А здесь нормально
}
