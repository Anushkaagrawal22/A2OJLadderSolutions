#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,c=0,b=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    if(n==1)
    cout<<"1";
    else
    {for(int i=0;i<n-2;i++)
    {
        if(arr[i+2]==(arr[i+1]+arr[i]))
        c++;
        else
        {b=max(b,c+2);
        c=0;}
    }
    b=max(b,c+2);
    cout<<b;}
  return 0;
}