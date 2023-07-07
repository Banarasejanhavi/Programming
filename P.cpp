#include<iostream>
using namespace std;
int main()
{
  int n,r;
  cin>>n;
  while(n>0)
  {
    r=n%10;
    n=n/10;
  }
  if (r%2==0)
  {
    cout<<"EVEN";
  }
  else cout<<"ODD";
  
 return 0;
}