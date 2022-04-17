#include<iostream>
using namespace std;
int main()
{
    int A[2][3];
    cout<<"enter value of matrix : ";
    for ( auto& x:A)
    {
        for (auto& y:x)
        {
            cin>>y;
        }
        
    }
    for ( auto& x:A)
    {
        for (auto& y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}