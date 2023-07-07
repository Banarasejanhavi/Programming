/*
       1
      121
     12321
    1234321
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int p=1;
        for(int j=i;j<=n;j++)
        {
           cout<<" ";
        }

        for(int j=1;j<i;j++)
        {
           cout<<p++;
           
        }
        for(int j=1;j<=i;j++)
        {
           cout<<p--;
        }
        cout<<endl;
    }
    
    
    
}