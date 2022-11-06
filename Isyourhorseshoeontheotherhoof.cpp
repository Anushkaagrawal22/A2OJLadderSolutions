#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int arr[4],dif=0;
    for(int i=0;i<4;i++)
    cin>>arr[i];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<i;j++)
        if(arr[j]==arr[i])
        {arr[i]=i+1000;
        dif++;}
    }
    cout<<dif;
}