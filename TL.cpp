#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,m,maxx=0,a=0,b=0;
    cin>>n>>m;
    int arr[n],arr1[m];
    for(int i=0;i<n;i++) 
    cin>>arr[i];
    for(int i=0;i<m;i++) 
    cin>>arr1[i];
    sort(arr,arr+n);
    maxx=arr[n-1];
    for(int i=0;i<n;i++)
    {
        if(maxx>=2*arr[i])
        a++;
    }
    if(a>0)
    {
       for(int i=0;i<m;i++)
       {
        if(maxx<arr1[i])
         b++;
       }
       if(b==m)
       cout<<maxx;
       else
       cout<<"-1";
    }
    else
    {
        for(int i=maxx;i<=2*maxx;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i>=2*arr[j])
                {a++;
                maxx=i;
                break;}
            }
            if(a>0)
            break;
        }
        for(int i=0;i<m;i++)
       {
        if(maxx<arr1[i])
         b++;
       }
       if(b==m)
       cout<<maxx;
       else
       cout<<"-1";
    }
}