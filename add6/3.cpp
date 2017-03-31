#include<bits/stdc++.h>
using namespace std;
void solve();
bool canSplit(list<int> mainList, list<int> subList1, list<int> subList2);
int main(){
  solve();
  return 0;
}
void solve(){
  list<int> mL {1, 3, 2, 7, 9, 3, 1}, sL1{1, 3, 7, 1}, sL2{2,9,3}, sL3{9, 2, 3};
  cout << canSplit(mL, sL1, sL2) << endl;
  cout << canSplit(mL, sL1, sL3) << endl; 
}
bool canSplit(list<int> mainList, list<int> subList1, list<int> subList2){
  list<int>::iterator iterM=mainList.begin(), iter1=subList1.begin(), iter2=subList2.begin();
  if (mainList.size()!=subList1.size()+subList2.size())
    return 0;
  do{
    if (*iterM==*iter1){
      iterM++;
      iter1++;
    }
    else
      if(*iterM==*iter2){
        iterM++;
        iter2++;
      }
      else
        return 0;
  }while(iterM!=mainList.end() && iter1!=subList1.end() && iter2!=subList2.end());
  return 1;
}
