#include<bits/stdc++.h>
using namespace std;
int main()
{   int b=0;
    long long n=0;
    cin>>n;
    string arr=to_string(n);
    for(int i=arr.size()-1;i>=0;i--)
    {
        if(arr[i]=='4')
        {
            if(arr[i-1]=='4')
            {
                if(arr[i-2]=='1')
                i=i-2;
                else
                {b++;
                break;}
            }
            else if(arr[i-1]=='1')
            i--;
            else
            {
                b++;
                break;
            }
        }
        else if(arr[i]=='1')
        continue;
        else
        {
            b++;
            break;
        }
    }
    if(b>0)
    cout<<"NO";
    else 
    cout<<"YES";
  return 0;
}