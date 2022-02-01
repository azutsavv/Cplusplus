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
          sum+=i; 
       }
       if (n*2==sum)
       {
           cout<<"n is a perfect no. "<<endl;
       }
       
    }
    cout<<"sum of facotrs : "<<sum;

    return 0;
}