#include<bits/stdc++.h>
using namespace std;
struct node{
  node * prev{};
  int data{};
  node(){
  }
  ~node(){
  }
};
class stc{
  node * head{};
  int size{},
      sumSt{};
  public:
  stc(){
  }
  void push(int val){
    node * tmp = new node;
    tmp->prev = head;
    tmp->data = val;
    head = tmp;
    sumSt+=val;
  }
  int pop(){
    if (!head){
      cout << "STACK EMPTY\n";
      exit(9999);
    }
    sumSt-=head->data;
    int tmp = head->data;
    head=head->prev;
    return tmp;
  }
  void print(){
    node * tmp = head;
    cout << "Stack: ";
    while(tmp){
      cout << tmp->data << ' ';
      tmp=tmp->prev;
    }
    cout << endl;
  }
  int sum(){
    return sumSt;
  }
  ~stc(){
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
  cout << m.sum() << endl;
  m.pop();
  m.pop();
  m.push(0);
  m.push(1);
  m.print();
  cout << m.sum() << endl;
  m.pop();
  m.pop();
  m.print(); // 3 2
  cout << m.sum() << endl;
  m.pop();
  m.push(9);
  m.print(); // 9 3
  cout << m.sum() << endl;
}

