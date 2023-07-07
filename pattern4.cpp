/*
Print Pattern
321
321
321
*/ 
/*#include<iostream>
using namespace std;
int main()
{
   int n=3;
   int i=1;
   while(i<=n)
   {
       int j=1;
       while(j<=n)   
       {
          cout<<n-j+1;
          j++;
        }
        cout<<endl;
        i++;
   }
   return 0;
}*/
#include<iostream>
using namespace std;
int main()
{
   int n=3;
   for(int i=0;i<n;i++)
   {
    for(int j=3;j>0;j--)
    {
        cout<<j;
    }
    cout<<endl;
   }
  
   return 0;
}