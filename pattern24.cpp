
/*
1234
 123
  12
   1

*/

#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   for(int i=1;i<=n;i++)
   {  
      int count=0;
      for(int j=1;j<=n;j++) 
      { 
        if(i>j) cout<<" ";
        else 
        {   
            count++;
            cout<<count;
        }
        
      }
      cout<<endl;
   }
  
   return 0;
}