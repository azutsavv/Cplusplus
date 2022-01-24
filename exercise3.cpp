#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"i can tell you about leap and century year";
    cout<<"enter year";
    cin>>year;
    if(year%4==0&&year%400==0) {
        cout<<"century leap year";
    }
    else if(year%4==0) { 
        cout<<"leap year";
    }
    else {
        cout<<"not a leap year";
    }
    return 0;   
}
    