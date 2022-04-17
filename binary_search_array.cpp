#include<iostream>
using namespace std;
int main()
{
    int A[9] = { 7,9,12,15,18,21,23,28,32 };
    int n=9, l=0, h=9, mid=0, k;
    cout<<"enter value of key : ";
    cin>>k;
    while (l<=h)
    {    
        mid=(l+h)/2;
        if (k== A[mid])
        {
            cout<<"position of key in an array is :"<<mid;
            return 0;
        }
        else if (k<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<"key is not found in array"; 
    return 0;
}