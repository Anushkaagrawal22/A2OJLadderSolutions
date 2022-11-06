#include<bits/stdc++.h>
using namespace std;
int main()
{  
    long long int n,x,y;
    cin>>n;
     long long int arr2[n+1]={0},arr3[n+1]={0};
    for(long long int i=1;i<=n;i++)
    {
        cin>>x;
        arr2[x]=i;
        arr3[x]=n-i+1;
    }
    long long int m,sum=0,sum2=0;
    cin>>m;
    for(long long int i=0;i<m;i++)
    {
        cin>>y;
        sum=sum+arr2[y];
        sum2=sum2+arr3[y];
    }
    cout<<sum<<" "<<sum2;
}