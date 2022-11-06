#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a,b,x,y;
  cin>>n;
  int arr[n],arr1[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
    arr1[i]=arr[i];
  }
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  {
    if(arr[0]==arr1[i])
    b=i;
  }
  for(int i=n-1;i>=0;i--)
  {
    if(arr[n-1]==arr1[i])
    a=i;
  }
  x=abs(a-0);
  y=abs(b-(n-1));
  if(a>b)
  cout<<x+y-1;
  else
  cout<<x+y;
}