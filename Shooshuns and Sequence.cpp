#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,k,a=0,x=0,t=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=k-1;i<n;i++)
    {
        if(arr[k-1]==arr[i])
        a++;
    }
    if(a==n-k+1)
    {
        for(int i=0;i<k-1;i++)
        {
            if(arr[k-1]!=arr[i])
            {x=arr[i];
            t=i+1;}
        }
        cout<<t;
    }
    else
    cout<<"-1";
    return 0;
}