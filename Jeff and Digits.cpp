#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,sum=0,five=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==5)
        five++;
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    if((n-five!=0)&&(five!=0))
    {if(sum%9==0)
    {sort(arr,arr+n);
    for(int i=0;i<(sum/5);i++)
        cout<<"5";
    for(int i=0;i<(n-five);i++)
        cout<<"0";}
    else
    {
        for(int i=0;i<five;i++)
        {
            if(sum%9==0)
            sum=sum;
            else
            sum=sum-5;
        }
        for(int i=0;i<(sum/5);i++)
        cout<<"5";
        if((sum%9==0)&&(sum!=0))
        {for(int i=0;i<(n-five);i++)
        cout<<"0";}
        else
        cout<<"0";
    }}
    else if(n-five==0)
    cout<<"-1";
    else  if(five==0)
    cout<<"0";
  return 0;
}