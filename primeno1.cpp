#include <iostream>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"enter value of 'n' :" ;
    cin>>n;
    for ( i = 1; i <=n; i++)
    { 
       if (n%i==0)
       {
          sum++; 
       }
       
       
    }
    if (sum==2)
       {
           cout<<"n is a prime no. ";
       }
       else
       {
           cout<<"n is not a prime no";
       }
    
    return 0;
}