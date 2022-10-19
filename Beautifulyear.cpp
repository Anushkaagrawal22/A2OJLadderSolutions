#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr,arr1;
    int rem=0,rem1=0,rem2=0,rem3=0;
    cin>>arr;
    arr1=arr;
    do 
    {
       arr=arr+1;
       arr1=arr;
    rem=arr1%10;
    arr1=arr1 / 10;
    rem1=arr1 % 10;
    arr1=arr1 / 10;
    rem2=arr1 % 10;
    arr1=arr1 / 10;
    rem3=arr1 % 10;
    }
    while((rem==rem1)||(rem1==rem2)||(rem2==rem3)||(rem1==rem3)||(rem==rem3)||(rem==rem2));
    
    if((rem!=rem1)&&(rem1!=rem2)&&(rem2!=rem3))
    cout<<arr;
    
    return 0;
}
