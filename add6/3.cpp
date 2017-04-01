#include<bits/stdc++.h>
using namespace std;
void solve();
bool canSplit(list<int> mainList, list<int> subList1, list<int> subList2);
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
    cout << "Res: " << canSplit(list1, list2, list3) << ", ans: " << boo << endl;
  }
}
bool canSplit(list<int> mainList, list<int> subList1, list<int> subList2){
  list<int>::iterator iterM=mainList.begin(), iter1=subList1.begin(), iter2=subList2.begin();
  if (mainList.size()!=subList1.size()+subList2.size())
    return 0;
  while(iterM!=mainList.end() || iter1!=subList1.end() || iter2!=subList2.end()){
    if (iter1!=subList1.end() && *iterM==*iter1){
      iterM++;
      iter1++;
    }
    else
      if(iter2!=subList2.end() && *iterM==*iter2){
        iterM++;
        iter2++;
      }
      else
        return 0;
  }
  if (iterM!=mainList.end() || iter1!=subList1.end() || iter2!=subList2.end())
    return 0;
  return 1;
}
