#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,rev=0,m,r;
    
    cout<<"enter value of n :";
    cin>>n;
    m=n;

   while (n>0)

   {
       r=n%10;
       n=n/10;
       rev=rev*10+r;
   
   }
   
   cout<<rev;
   
   return 0;
}