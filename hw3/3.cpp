#include<bits/stdc++.h>
using namespace std;
class stc{
  stc * prev,
      * head;
  int data{},
      size{};
  public:
  stc(){
  }
  void push(int val){
    stc * tmp = new stc;
    tmp->prev = head;
    tmp->data=val;
    head = tmp;
  }
  int& max(){
    stc * tmp = head,
        * max;
    int maxVal{(int)-1e9};
    while(tmp){
      if (tmp->data>maxVal){
        max=tmp;
        maxVal=tmp->data;
      }
      tmp=tmp->prev;
    }
    return max->data;
  }
  int pop(){
    if (head==NULL){
      cout << "STACK EMPTY\n";
      exit(9999);
    }
    int tmp = head->data;
    head=head->prev;
    return tmp;
  }
  void print(){
    stc * tmp = head;
    cout << "Stack: ";
    while(tmp!=NULL){
      cout << tmp->data << ' ';
      tmp=tmp->prev;
    }
    cout << endl;
  }
};
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  stc m;
  m.push(2); 
  m.push(3); 
  m.push(1);
  m.push(5);
  m.print(); // 5 1 3 2
  m.pop();
  m.pop();
  m.print(); // 3 2
  m.max()=0;
  m.print(); // 0 2
  m.max()++;
  m.print(); // 0 3
  m.pop();
  m.push(9);
  m.print(); // 9 3
}

