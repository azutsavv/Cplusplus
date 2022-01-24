#include<iostream>
using namespace std;
int main()
{   int no,x,y,n;
    cout<<"1. Add\n"<<"2. Sub\n"<<"3. Multiply\n"<<"4. Divide\n";
    cin>>no;
    cout<<"enter two number";
    cin>>x>>y;
    switch (no)
    {
    case 1: n=x+y;
        break;
    case 2: n=x-y;
        break;
    case 3: n=x*y;
        break;
    case 4: n=x/y;
        break;
    }
    cout<<"result is"<<n;
return 0;

}