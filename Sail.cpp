#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    long long t,sx,sy,ex,ey,s=0,w=0;
    cin>>t>>sx>>sy>>ex>>ey;
    string arr;
    cin>>arr;
    for(int i=0;i<=arr.size();i++)
    {
        if(ex==sx)
        {s=1;
        w=i;
        break;}
        else if(ex>sx)
        {
            if(arr[i]=='E')
          {sx=sx+1;}
        }
        else if(sx>ex)
        {
            if(arr[i]=='W')
          {sx=sx-1;}
        }
    } 
    if(s==1)
    {
    for(int i=0;i<=arr.size();i++)
    {
        if(ey==sy)
        {
            if(w>=i)
            cout<<w;
            else
            cout<<i;
            break;
        }
        else if(ey>sy)
        {
            if(arr[i]=='N')
          {sy=sy+1;}
        }
        else if(sy>ey)
        {
            if(arr[i]=='S')
         { sy=sy-1;}
        }
     }
    }
    if((s!=1)||(ey!=sy)) 
    cout<<"-1";
  return 0;
}