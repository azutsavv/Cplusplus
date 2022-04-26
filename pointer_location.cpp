#include<iostream>
using namespace std;
int main()
{
    int A[]{2,3,4,5,6,7,8};
    int *p=A;

    for (int i = 0; i < 7; i++)
    {
        cout<<(A+i)<<endl;
        cout<<"separation ";
        cout<<(p+i)<<endl; // address of elements in array a
        cout<<p[i]<<endl;// elements of array a 

    }

    return 0;
}