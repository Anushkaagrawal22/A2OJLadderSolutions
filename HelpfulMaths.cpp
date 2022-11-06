#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int temp=0;
    string arr;
    cin>>arr;
    for(int j=1;j<arr.size();j=j+2)
    {
    for(int i=0;i<(arr.size()-j);i=i+2)
    {
        if(arr[i]>arr[i+2])
    {
        temp=arr[i];
        arr[i]=arr[i+2];
        arr[i+2]=temp;
    }
    }
    }
    for(int i=0;i<arr.size();i++)
    cout<<arr[i];
}