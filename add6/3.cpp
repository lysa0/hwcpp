#include<bits/stdc++.h>
using namespace std;
void solve();
bool canSplit(auto iter, auto iter1, auto iter2, list<int> &mainList, list<int> &subList1, list<int> &subList2);
int main(){
  solve();
  return 0;
}
void solve(){
  ifstream fin("tests.in");
  int a, b, c;
  bool boo;
  while(fin>>a>>b>>c){
    int tmp;
    list<int> list1, list2, list3;
    for(int i=0; i<a; i++){
      fin >> tmp;
      list1.push_back(tmp);
    }
    for(int i=0; i<b; i++){
      fin >> tmp;
      list2.push_back(tmp);
    }
    for(int i=0; i<c; i++){
      fin >> tmp;
      list3.push_back(tmp);
    }
    fin >> boo;
    cout << "Res: " << canSplit(list1.begin(), list2.begin(), list3.begin(), list1, list2, list3) << ", ans: " << boo << endl;
  }
}
bool canSplit(auto iter, auto iter1, auto iter2, list<int> &mainList, list<int> &subList1, list<int> &subList2){
  if (iter==mainList.end() && iter1==subList1.end() && iter2==subList2.end())
    return 1;
  while(iter!=mainList.end() || iter1!=subList1.end() || iter2!=subList2.end()){
    if (iter!=mainList.end() && iter1!=subList1.end() && iter2!=subList2.end() && *iter==*iter1 && *iter==*iter2)
      return (canSplit(++iter, ++iter1, iter2, mainList, subList1, subList2) || canSplit(iter, --iter1, ++iter2, mainList, subList1, subList2));
    if (iter1!=subList1.end() && *iter==*iter1){
      iter++;
      iter1++;
    }
    else
      if(iter2!=subList2.end() && *iter==*iter2){
        iter++;
        iter2++;
      }
      else
        return 0;
  }
  return 1;
}

