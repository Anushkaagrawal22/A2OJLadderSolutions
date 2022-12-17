#include<bits/stdc++.h>
using namespace std;
int main()
{  
   int n,sum=0,max=0,max1=0;
   cin>>n;
   int arr[n][2],arr1[n];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<2;j++)
    cin>>arr[i][j];
   }
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<2;j++)
    {
        if(j==1)
        sum=sum+arr[i][j];
        else if(j==0)
        sum=sum-arr[i][j];
    }
    for(int k=0;k<n;k++)
        {
            arr1[k]=sum;
            if(arr1[k]>max1)
            max1=arr1[k];
        }
   }
        cout<<max1;
}