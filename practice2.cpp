#include<iostream>
using namespace std;
int main()
{
    int count = 1;
    for (int  i = 1; i <6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cout<<count<<" ";
            count=++count;
        }

        cout<<endl;    
    }
    
    return 0;
}