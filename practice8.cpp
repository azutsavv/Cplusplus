#include<iostream>
using namespace std;
int main()
{
    int x=1, A[]{1,2,3,4,5};
    int *p=A;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<endl;

    }
    delete []p;
    p=nullptr;
    p=&x;
    cout<<p;
    return 0;
}