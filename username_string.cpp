#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cout<<"enter your email address: ";
    getline(cin,a);
    int s=a.find_first_of('@');
    cout<<"user name is: ";
    for (int i = 0; i < s; i++)
    {
        cout<< a[i];
    
    }
    return 0;
    



}