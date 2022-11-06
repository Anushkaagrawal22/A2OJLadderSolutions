#include<bits/stdc++.h>
using namespace std;
int main()
{  int a=0;
    string arr;
    cin>>arr;
    for(int i=0;i<arr.size();i++)
    {
        if((arr[i]=='H')||(arr[i]=='Q')||(arr[i]=='9'))
    a++;
    }
    if(a!=0)
    cout<<"YES";
    else
    cout<<"NO";
}