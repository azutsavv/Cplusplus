#include<iostream>
using namespace std;
int main()
{
    int n,*p;
    cout<<"enter value of x : ";
    cin>>n;
    p=&n;
    cout<<p<<"   "<<*p;
    return 0;
}