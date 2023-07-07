#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  long long n,m;
  int rn,rm;
  cin>>n>>m;
  for(int i=0;i<1;i++)
  {
    rn=n%10;
    rm=m%10;
  }
  cout<<rn+rm;
}
