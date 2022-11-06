#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,count1=0,count2=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(arr[i]>max)
        {  
            max=arr[i];
            count1++;
        }
        if(arr[i]<min)
        {  
             min=arr[i];
            count2++;
        }
        }
    }
    cout<<count1+count2;
}