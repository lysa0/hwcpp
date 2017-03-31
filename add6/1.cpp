#include<bits/stdc++.h>
using namespace std;
void solve();
int getSecBySize(list<int> numb);
int main(){
  solve();
  return 0;
}
void solve(){
  list<int> numbers;
  int num;
  cin >> num;
  while(num){
    numbers.push_back(num);
    cin >> num;
  }
  cout << getSecBySize(numbers);
}
int getSecBySize(list<int> numb){
  int max{(int)-1e9}, res{-1};
  list<int>::iterator iter = numb.begin();
  do
    if (*iter>max){
      res=max;
      max=*iter;
    }
    else
      if (*iter>res)
        res=*iter;
  while(++iter!=numb.end());
  return res;
}

