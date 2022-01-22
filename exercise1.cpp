#include <iostream>
using namespace std;
int main()
{
    float basic, allowance ,deduction, net_salery ;
    cout<<"basic salery";
    cin>>basic;
    cout<<"allowance";
    cin>>allowance;
    cout<<"deduction";
    cin>>deduction;
    net_salery= basic + (basic*allowance/100)-(basic*deduction/100);
    cout<<"net salery is "<< net_salery;
    return 0;
    }