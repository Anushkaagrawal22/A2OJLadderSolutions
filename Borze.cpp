#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr;
       cin>>arr;
     for(int i=0;i<arr.size();i++)
    {
       if(arr[i]=='.')
        {
         cout<<"0";
        }
   
        if(arr[i]=='-')
        {
          if(arr[i+1]=='-')
         {
          cout<<"2";
          i++;
         }
         else if(arr[i+1]=='.')
            {
          cout<<"1";
          i++;
          }
        }
       
    }
    
    return 0;
}