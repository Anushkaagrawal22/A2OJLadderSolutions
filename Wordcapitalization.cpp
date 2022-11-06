#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string arr;
    cin>>arr;
    if(islower(arr[0]))
    arr[0]=toupper(arr[0]);
    cout<<arr;
}