#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n,k;
    cin>>n;
    string arr1;
    arr1="";
    for(int i=0;i<n;i++)
    {
        string arr;
        cin>>arr;
        k=arr.size();
        if(k<=10)
        arr1+=arr;
        else
        {arr1+=arr[0];
        arr1+=to_string(k-2);
        arr1+=arr[k-1];}
        arr1+="\n";
    }
    cout<<arr1;
}