/*
Print Pattern
123
456
789
*/ 
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;

    int count = 0;

    int i=1;
    while(i<=n)
    {
        int j = 1;

        while(j<=n)
        {
            count++;
            cout<<count;
            j=j+1;
        }

        cout<<endl;
        i=i+1;
    }
}
*/
#include<iostream>
using namespace std;
int main()
{
   int n=3;
   int count=0;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
       count++;
       cout<<count;
    }
    cout<<endl;
   }

  
   return 0;
}