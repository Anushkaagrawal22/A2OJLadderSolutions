#include<bits/stdc++.h>
using namespace std;
int main()
{  
    long long n,a=0,b=0,c=0;
    cin>>n;
    long long arr[n];
    for(long long i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    a=abs(arr[n-1]-n);
    arr[n-1]=arr[n-1]-n;
    b=abs(1-arr[0]);
    arr[0]=b;
    if(n>2)
    {for(long long i=1;i<n-1;i++)
    {
        c=c+abs(i+1-arr[i]);
        arr[i]=abs(i+1-arr[i]);
    }}
    cout<<a+b+c;
  return 0;
}