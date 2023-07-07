#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 double pi=3.141592653;
 double a,r;
 cin>>r;
 a=pi*r*r;
 cout<<setprecision(9)<<a;
 return 0;
}
