#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,a=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int  arr1[1001]={0};
    for(int i=0;i<n;i++)
    {
        arr1[arr[i]]++;
    }
    for(int i=0;i<1001;i++)
    {
        if(n%2==0)
        {if(arr1[i]>n/2)
        {
            a++;
        }
        }
        else
        {
         if(arr1[i]>(n/2+1))
         a++;
        }
    }
    if(a>0)
    cout<<"NO";
    else
    cout<<"YES";
  return 0;
}