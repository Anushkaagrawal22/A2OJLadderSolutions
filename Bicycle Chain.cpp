#include<bits/stdc++.h>
using namespace std;
int main()
{  int n,m;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  cin>>m;
  int arr1[m];
  for(int i=0;i<m;i++)
  cin>>arr1[i]; 
  int maxx=0,a=0;
  for(int i=0;i<n;i++) 
  {
    for(int j=0;j<m;j++)
    {
        if(arr1[j]%arr[i]==0)
        {
          maxx=max(maxx,arr1[j]/arr[i]);
        }
    }
  }
  for(int i=0;i<n;i++) 
  {
    for(int j=0;j<m;j++)
    {
        if(arr1[j]%arr[i]==0)
        {if(arr1[j]/arr[i]==maxx)
         a++;
        }
    }
  }
  cout<<a;
  return 0;
}