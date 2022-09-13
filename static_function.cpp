#include<bits/stdc++.h>
using namespace std;

class rect
{ 
    float a;
    float b;

    public:
    rect (float l=1,float m=1)
    {
        a=l;
        b=m;
        count++;     
    }
   int static count;
   
   
   int get()
   {
    cout<<a<<endl;
    cout<<b<<endl;
   }
   
};
int rect :: count =0;

int main()
{
    //cout<<rect::count<<endl;
    rect r1(8,3);
    rect r2(7,8);
    cout<<r1.count<<endl;
    cout<<r2.count<<endl;
   // cout<<r1.get();
   // cout<<r2.get();
   cout<<rect ::count;
    return 0;
} 