#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[3],arr1[3];
  for(int i=0;i<3;i++)
  {
    cin>>arr[i];
  }
  copy(arr,arr+3,arr1);
  sort(arr,arr+3);
  cout<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;
  cout<<endl;
  cout<<arr1[0]<<endl<<arr1[1]<<endl<<arr1[2]<<endl;
  return 0;
}