#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,rev=0,m,r,q;
    
    cout<<"enter value of n :";
    cin>>n;
    m=n;

   while (n>0)

   {
       r=n%10;
       n=n/10;
       rev=rev*10+r;
   
   }
   
   cout<<rev<<endl;
   
   while (rev>0)
   {
       q=rev%10;
       rev=rev/10;

   
   switch (q)
   {
   case 0:cout<<"zero ";
   break;
   case 1:cout<<"one ";
   break;
   case 2:cout<<"two ";
   break;
   case 3:cout<<"three ";
   break;
   case 4:cout<<"four ";
   break;
   case 5:cout<<"five ";
   break;
   case 6:cout<<"six ";
   break;
   case 7:cout<<"seven ";
   break;
   case 8:cout<<"eight ";
   break;
   case 9:cout<<"nine ";
   break;
   
   default:
       break;

   }

   }
 return 0;  
}









