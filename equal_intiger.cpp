#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
    
    int x,y,t=0;
    cin>>x>>y;
   
    if(x==y)
    {cout<<"0";
    }
    if(y>x)
    {
        
        cout<<(y-x);
    }
    if(x>y)
    {
        while(y<x)
        {
            y+=2;
            t++;
        }
        if(y>x)
        {
            cout<<(y-x)+t;
            return 0;
        }
        cout<<t;
    }
    }    
    return 0;
}
