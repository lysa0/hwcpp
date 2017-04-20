#include<bits/stdc++.h>
using namespace std;
template<typename T>
auto eqVal(T it2, T it3){
  auto it1=it2;
  it2++;
  for(;it2!=it3; it1++, it2++)
    if (*it1==*it2) // что здесь делать с типами с плавающей точкой? Переопределять ==?
      return it1;
  return it2;
}





