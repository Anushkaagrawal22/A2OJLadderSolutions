#include<bits/stdc++.h>
using namespace std;
int main()
{  int a=0;
    string arr1,arr2;
    cin>>arr1>>arr2;
    for(int i=0;i<arr1.size();i++)
    {
    arr1[i]=toupper(arr1[i]);
    arr2[i]=toupper(arr2[i]);
    }
    if((arr1)>(arr2))
    {cout<<1;
    }
    else if((arr1)<(arr2))
    {
        cout<<-1;
    }
    else
    cout<<0;
}