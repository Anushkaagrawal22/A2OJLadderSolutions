#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,m,sum=0,a=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<m;i++)
    {
        if(arr[i]<0)
        a++;
    }
    for(int i=0;i<a;i++)
    {  
        sum=sum+abs(arr[i]);
    }
     cout<<sum;
    return 0;
}