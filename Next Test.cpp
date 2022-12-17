#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,b=0;
    cin>>n;
    int arr[n],arr1[3002]={0};
    for(int i=0;i<n;i++)
    {cin>>arr[i];
     arr1[arr[i]]++;}
     for(int i=1;i<3002;i++)
     {
        if(arr1[i]==0)
        {
            b=i;
            break;
        }
        else
        continue;
     }
     cout<<b;
  return 0;
}