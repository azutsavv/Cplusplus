#include<iostream>
using namespace std;
int main()
{
    int n,k,sum=0;
    cout<<"enter number of values : ";
    cin>>n;
    int A[n];
    float avg;
    
    cout<<"enter values : ";
    for (int i = 1; i <=n; i++)
    {   
        
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