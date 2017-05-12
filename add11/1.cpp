#include<bits/stdc++.h>
using namespace std;
void solve();
int main(){
  solve();
  return 0;
}
void solve(){
  stack<char> bkt;
  char c;
  ifstream fin("abc.txt");
  while(fin>>c){
    if (c=='('){
      bkt.push(c);
    }
    if (c=='['){
      bkt.push(c);
    }
    if (c=='{'){
      bkt.push(c);
    }
    if (c==')'){
      if (bkt.top()!='('){
        cout << "Not";
        return;
      }
      else
        bkt.pop();
    }
    if (c==']'){

      if (bkt.top()!='['){
        cout << "Not";
        return;
      }
      else
        bkt.pop();
    }
    if (c=='}'){
      if (bkt.top()!='{'){
        cout << "Not";
        return;
      }
      else
        bkt.pop();
    }
  }
  cout << "Yes";
}

