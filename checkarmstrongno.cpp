#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,sum=0,m,r;
    
    cout<<"enter value of n :";
    cin>>n;
    m=n;

   while (n>0)

   {
       r=n%10;
       n=n/10;
       sum=sum+(r*r*r);
   
   }

   if (sum==m)
   {
       cout<<"yes number is armstrong number :"<<m;
   }
   else
   {
       cout<<"given number is not armstrong number";
   }
   return 0;
}