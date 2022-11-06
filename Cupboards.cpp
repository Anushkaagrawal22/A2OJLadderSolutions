#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,c0=0,c1=0,d0=0,d1=0;
    cin>>n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]==0)
        c0++;
        else
        c1++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i][1]==0)
        d0++;
        else
        d1++;
    }
    if(((c0>c1)||(c0==c1))&&((d0>d1)||(d0==d1)))
    cout<<c1+d1;
    else if(((c0>c1)||(c0==c1))&&((d1>d0)||(d0==d1)))
    cout<<c1+d0;
    else if(((c1>c0)||(c0==c1))&&((d1>d0)||(d0==d1)))
    cout<<c0+d0;
    else if(((c1>c0)||(c0==c1))&&((d0>d1)||(d0==d1)))
    cout<<c0+d1;
}