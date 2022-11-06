#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,a=0,b=0;
    cin>>n;
    string arr;
    cin>>arr;
    sort(arr.begin(),arr.begin()+n);
    sort(arr.begin()+n,arr.begin()+2*n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[n+i])
        a++;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<arr[n+i])
        b++;
    }
    if(a==n)
    cout<<"YES";
    else if(b==n)
    cout<<"YES";
    else
    cout<<"NO";
  return 0;
}