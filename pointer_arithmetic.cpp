#include<iostream>
using namespace std;
int main()
{
    int A[5]{2,3,4,5,6};
    int *p=A;
    int*q=&A[4],d;
    cout<<p<<endl;//adress of p
    cout<<*p<<endl;//pointing  of p
    cout<<A<<endl;//address of p
    p++;//arithmatic operation
    cout<<*p<<endl;
    p=p+2;
    cout<<*p<<endl;
    d=q-p;
    cout<<"difference is: "<<d<<endl;
    
    return 0;
}