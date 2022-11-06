#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,sum=0,j=0;
    cin>>k;
    int arr[12];
    for(int i=0;i<12;i++) 
    cin>>arr[i];
    sort(arr,arr+12);
    int i=11;
    if(k==0)
    cout<<"0";
    else{
    do
    {
        j=i;
        sum=sum+arr[i];
        i=i-1;
        if(j<0)
        break;
    }
    while((sum<k)&&(j>0));
    if(sum<k)
    cout<<"-1";
    else if(sum>=k)
    cout<<12-j;
    }
  return 0;
}