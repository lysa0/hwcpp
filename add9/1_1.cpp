#include<bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
  if (n==1)
    return 0;
  int sum{1};
  int sqrtn=sqrt(n);
  for(int i=2; i<sqrtn; i++)
    if (n%i==0)
      sum+=i, sum+=n/i;
  if (sqrtn*sqrtn==n)
    sum+=sqrtn*(sqrtn*sqrtn==n);
  return sum==n;
}

