#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,sum=0,h=0,t=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    {cin>>arr[i];
    sum=sum+arr[i];
    if(arr[i]==100)
    h++;
    else
    t++;}
    int s2=sum/2;
    if(sum%200!=0||n==1)
    cout<<"NO";
    else
    {
        for(int i=0;i<t;i++)
        {
            if(s2>=200)
            s2=s2-200;
            else
            break;
        }
        for(int i=0;i<h;i++)
        {
           if(s2>=100)
           s2=s2-100;
        }
        if(s2==0)
        cout<<"YES";
        else
        cout<<"NO";
    }
  return 0;
}