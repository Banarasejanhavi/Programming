#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  a%=100;
  b%=100;
  c%=100;
  d%=100;
  
  long long int mul=a*b*c*d;
  int r=mul%100;
  if(r<10)
     cout<<0<<r;
  else 
     cout<<r;
  return 0;
}