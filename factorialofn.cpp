#include <iostream>
using namespace std;
int main()
{
     long int n, fact=1;
    cout<<"eanter value of n : ";
    cin>>n;
    
    for ( int i = n; i > 0 ; i--)
    
    {
         fact=fact*i;    
    }
    
    cout<<"value of n ! :"<<fact;
    return 0;
    
}
//take care of memory in c++
//as long int can have max of 8 bit