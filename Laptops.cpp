#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,c=0;
    cin>>n;
    vector <pair<int,int>> arr;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++)
    {
        if(arr[i].second>arr[i+1].second)
        c++;
    }
    if(c>0)
    cout<<"Happy Alex";
    else
    cout<<"Poor Alex";
  return 0;
}