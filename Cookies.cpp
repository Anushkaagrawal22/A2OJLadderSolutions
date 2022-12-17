#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,e=0,o=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      e++;
      else
      o++;
    }
    if(o%2==0)
    cout<<e;
    else if(o==1)
    cout<<"1";
    else
    cout<<o;
  return 0;
}