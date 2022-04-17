#include<iostream>
using namespace std;
int main()
{
    int A[100],n,k,sum=0;
    float avg;
    cout<<"enter number of values : ";
    cin>>n;
    
    for (int i = 1; i <=n; i++)
    {   
        cout<<"enter values : ";
        cin>>A[i];
    }
    for (int j = 1; j <=n; j++)
    {
        sum=sum+A[j];

    }
    
    avg=(float)sum/n;
    cout<<avg;
    return 0;
}