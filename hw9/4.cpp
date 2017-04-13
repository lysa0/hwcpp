#include<bits/stdc++.h>
using namespace std;
void solve();
template<typename T>
class node{
  public:
  node<T> * next=NULL;
  T value;
};
template<typename T>
class myQu{
  private:
  node<T> * head=NULL,
          * tail=NULL; 
  public:
  myQu(){
  }
  void push(T n){
    if (!head){
      head = new node<T>;
      head->value=n;
      head->next=NULL;
      return;
    }
    if (!head->next){
      tail = new node<T>;
      tail->value=n;
      head->next=tail;
      return;
    }
    node<T> * tmp = new node<T>;
    tail->next=tmp;
    tmp->value=n;
    tmp->next=NULL;
    tail=tmp;
  }
  T pop(){
    if (head==NULL){     /// С типом string на этом моменте работает как-то неочевидно
      cout << "Stack empty";
      return 0;
    }
    T tmp{};
    node<T> * tmph;
    tmp=head->value;
    tmph=head->next;
    if (head->next){
      delete head;
    }
    head=tmph;
    return tmp;
  }
  void print(){
    if (!head)
      cout << "Stack empty";
    node<T> * tmp = head;
    while(tmp){
      cout << tmp->value << ' ';
      tmp=tmp->next;
    }
    cout << endl;
  }
};
int main(){
  solve();
  return 0;
}
void solve(){
  myQu<char> mq;
  mq.print();
  mq.push('y');
  mq.print();
  mq.push('e');
  mq.print();
  mq.push('a');
  mq.push('z');
  mq.print();
  cout << mq.pop() << endl;
  mq.print();
  mq.push('h');
  mq.print();
  cout << mq.pop() << endl;
  cout << mq.pop() << endl;
  cout << mq.pop() << endl;
  cout << mq.pop() << endl;
  cout << mq.pop() << endl;
  mq.push('b');
  mq.push('b');
  mq.push('b');
  mq.push('a');
  mq.push('1');
  mq.print();
}
