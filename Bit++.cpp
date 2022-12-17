#include<bits/stdc++.h>
using namespace std;
int main()
{  int n;
    cin>>n;
    int a=0;
   for(int i=0;i<n;i++)
   {
    string arr;
    cin>>arr;
    if((arr==("++X"))||(arr==("X++")))
    a++;
    if((arr==("--X"))||(arr==("X--")))
    a--;
   }
   cout<<a;
}