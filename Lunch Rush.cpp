#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long n,k;
    cin>>n>>k;
    long long arr[n][2]={0},joy[n]={0},maxx=-(10e+9);
    for(long long i=0;i<n;i++)
    {
        for(long long j=0;j<2;j++)
        cin>>arr[i][j];
    }
    for(long long i=0;i<n;i++)
    {
            if(arr[i][1]<=k)
            joy[i]=arr[i][0];
            else
            joy[i]=arr[i][0]+k-arr[i][1];
    }
    for(long long i=0;i<n;i++)
    maxx=max(maxx,joy[i]);
    cout<<maxx;
  return 0;
}