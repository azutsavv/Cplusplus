#include<iostream>
using namespace std;
int main()
{
    int A[]={4,3,54,23,4,6,7,8,9,11};
    int sum=0;
    for (int x=0;x<11;x++)
    {
        sum=sum+A[x];

    }

    cout<<sum;

    return 0;
    
}