#include<bits/stdc++.h>
using namespace std;
int main()
{  
    long long n,s=0;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    cout<<arr[n-1]-arr[0]<<" ";
    long long max=arr[n-1]-arr[0];
    auto r = equal_range(arr, arr+n, arr[0]);
    long long t= r.second-r.first ;
    auto r1 = equal_range(arr, arr+n, arr[n-1]);
    long long t1= r1.second-r1.first ;
    if(arr[0]!=arr[n-1])
    cout<<t*t1;
    else
    {
        unsigned long long m=n*(n-1)/2;
    cout<<m;
    }
  return 0;
}