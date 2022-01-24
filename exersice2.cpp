#include<iostream>
using namespace std;
int main()
{   float totalamount,discountamount,netamount;
    cout<<"enter bill amount";
    cin>>totalamount;

    if (totalamount>=1000)
    {
        discountamount=totalamount*20/100;
        netamount=totalamount-discountamount;
        cout<<"your net amount :"<<netamount;

    } 
    else if(totalamount>=500&&totalamount<1000) 
    {
        discountamount=totalamount*10/100;
        netamount=totalamount-discountamount;
        cout<<"your net amount :"<<netamount;
    } 
    else
    {discountamount=0;
        netamount=totalamount-discountamount;
        cout<<"your net amount :"<<netamount;
    }
return 0;

} 