#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int t=n;
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        for(int m=0;m<2;m++)
        cin>>arr[i][m];
    }
    int minn=arr[0][0];
    int maxx=arr[0][1];
    for(int i=0;i<n;i++)
    {
       minn= min(minn,arr[i][0]);
       maxx=max(maxx,arr[i][1]);
    }
    vector<int> j,k;
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i][0]==minn && arr[i][1]==maxx)
        {
            cout<<i+1;
            a++;
            break;
        }
     
    }
    if(a==0)
    cout<<"-1";
    return 0;
}
