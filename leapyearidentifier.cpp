#include<iostream>
using namespace std;

int main()
{
    int year;
    cout<<"i can tell you about leap and century year"<< endl;
    cout<<"enter year : ";
    cin>>year;
    if(year%4==0&&year%100==0&&year%400!=0) 
    {
        cout<<"leap year";
    }
    else {
        cout<<"not a leap year";
    }
    return 0;   
}
    
