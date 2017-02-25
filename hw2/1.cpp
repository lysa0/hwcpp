#include<bits/stdc++.h>
using namespace std;
int * reverse(int * a, int n); 
void solve();
int main(){ 
  solve();
  return 0;
}
void solve(){
  int * a = new int[500]{};
  int n;
  cout << "Enter size: ";
  cin >> n;
  for(int * i=a; i<a+n; i++)
    cin >> *i;
  cout << "Input array:\t";
  for (int * i=a; i<a+n; i++)
    cout << *i << ",."[i==a+n-1]<< " \n"[i==a+n-1];
  a=reverse(a, n);
  cout << "Ouput array:\t";
  for(int * i=a; i<a+n; i++)
    cout << *i << ",."[i==a+n-1]<< " \n"[i==a+n-1];
}
int * reverse(int * a, int n){
  int *i=a, 
      *j=a+n-1;
  n++;
  n>>=1;
  while(n--) 
    swap(*i++, *j--);
  return a;
}


