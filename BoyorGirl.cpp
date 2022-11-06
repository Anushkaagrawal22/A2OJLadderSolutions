#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int distinct;
    string arr;
    cin>>arr;
    set<char> arr1;
    for(int i=0;i<arr.size();i++)
    {
        arr1.insert(arr[i]);
    }
    distinct=arr1.size();
    if(distinct%2==0)
    cout<<"CHAT WITH HER!";
    else
    cout<<"IGNORE HIM!";
}