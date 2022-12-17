#include<bits/stdc++.h>
using namespace std;
char sum(char a,char b)
{
    if((b=='1')&&(a=='0'))
    return '1';
    if((a=='1')&&(b=='1'))
    return '0';
    if((a=='1')&&(b=='0'))
    return '1';
    else
    return '0';
}
int main()
{  
    string arr1,arr2,arr3;
    cin>>arr1>>arr2;
     arr3="";
    for(int i=0;i<arr1.size();i++)
    {
        arr3+=sum(arr1[i],arr2[i]);
        cout<<arr3[i];
    }
}