#include <iostream>
#include<cmath>
using namespace std;
int main ()
{   
    int a,b,c,d;
    
    cout<<"enter three number : a, b, c ";
    cin>>a>>b>>c;
    d=((b*b)-(4*a*c));


    if(d==0)
    {cout<<"roots are equal ";
    cout<< (-b/2*a);}

    else if (d>0)
    {cout<<"roots are real and distint ";
    cout<< -b+sqrt(d);
    cout<< -b-sqrt(d);
    }

    else 
    {cout<<"roots are imaginary";}
    
    return 0;

}