#include<bits/stdc++.h>
using namespace std;
void solve();
list<int> getDiff(list<int> numb1, list<int> numb2);
int main(){
  solve();
  return 0;
}
void solve(){
  list<int> numbers1, numbers2;
  int a;
  cout << "Enter list1, end of list --- 0\n";
  cin >> a;
  while(a){
    numbers1.push_back(a);
    cin >> a;
  }
  cout << "Enter list1, end of list --- 0\n";
  cin >> a;
  while(a){
    numbers2.push_back(a);
    cin >> a;
  }
  list<int> res=getDiff(numbers1, numbers2);
  for(auto num:res)
    cout << num << ' ';
}
list<int> getDiff(list<int> numb1, list<int> numb2){
  list<int> res;
  list<int>::iterator iter1=numb1.begin(), iter2=numb2.begin();
  do{
    if (*iter1<*iter2){
      res.push_back(*iter1);
      iter1++;
    }
    else{
      if (*iter1==*iter2)
        iter1++;
      iter2++;
    }
  }while(iter1!=numb1.end() && iter2!=numb2.end());
  while(iter1!=numb1.end()){
    res.push_back(*iter1);
    iter1++;
  }
  return res;
}

