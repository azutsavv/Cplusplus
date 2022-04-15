#include<iostream>
using namespace std;
int main()
{
     int A[11]={4,3,54,23,4,6,7,8,9,11,63};
     int max=0,n=11;
     for (int i = 0; i < n; i++)
      {
         
        if (A[i]>max)
        { 
          max=A[i];
        }
      
       }
     
    cout<<"max is "<<max;

    return 0;
    
}