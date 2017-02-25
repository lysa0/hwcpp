#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(int a);
int main(){
  ll a{};
  cin >> a;
  for(int i=6; i<=a/2; i++)
    if (solve(i) && solve(a-i)){
      cout << "Yes: " << a << "=" << i << "+" << a-i << endl;
      return 0;
    }
  cout << "Not" << endl;
  return 0;
}
bool solve(int a){
  ll sqrT{(ll)sqrt(a)},
     cnt{};
  for (ll i=2; i<=sqrT; i++){
    if (!(a%i))
      cnt++,            // считаем количество делителей числа до корня, включая
      cnt+=!(a/i%(i*i));  // Проверка для кубов 
                          // (т.к. cnt для чисел вида p^{3} 
                          // будет равным единице 
    if (cnt>1)      // если у числа до корня, включая, 
                    // больше одного нетривиального делителя, 
                    // то полупростым, оно, очевидно, не является 
      break;
  }
  return (cnt==1?1:0);
}

