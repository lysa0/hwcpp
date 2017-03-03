#include<bits/stdc++.h>
using namespace std;
class stc{
  stc * prev,
      * head;
  int data{},
      size{},
      prod=1,
      cntNull{};
  public:
  stc(){
  }
  void push(int val){
    stc * tmp = new stc;
    tmp->prev = head;
    tmp->data=val;
    head = tmp;
    if (val!=0)
      prod*=val;
    else
      cntNull++;
  }
  int pop(){
    if (head==NULL){
      cout << "STACK EMPTY\n";
      exit(9999);
    }
    if (head->data == 0)
      cntNull--;
    else
      prod/=head->data;
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
  int product(){
    if (cntNull>0)
      return 0;
    else
      return prod;
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
  cout << m.product() << endl;
  m.pop();
  m.pop();
  m.push(0);
  m.push(1);
  m.print();
  cout << m.product() << endl;
  m.pop();
  m.pop();
  m.print(); // 3 2
  cout << m.product() << endl;
  m.pop();
  m.push(9);
  m.print(); // 9 3
  cout << m.product() << endl;
}

