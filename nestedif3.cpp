// #include <iostream>
// using namespace std;
// int main ()
// {   
//     int a,b,c;
//     float avg;
    
//     cout<<"enter marks of three subjet(out of 100) : a, b, c ";
//     cin>>a>>b>>c;
//     avg=(a+b+c)/3.0;
//     //use .0 in case we want to show float value


//     if(avg>=60)
//     {cout<<"a-grade ";
//     cout<< avg;}

//     else if (avg>=35&&avg<60)
//     {cout<<"b-grade ";
//     cout<< avg;
//     }

//     else 
//     {cout<<"c-grade";}
    
//     return 0;

//}


#include <iostream>
using namespace std;
int main ()
{   
    int a;
    float discounted_bill;
    
    cout<<"value of bill";
    cin>>a;

    if(a>=5000)
    {discounted_bill=a-((a*20)/100.0);
    cout<<discounted_bill;}
   

    else if (a>2000&&a<5000)
    {discounted_bill=a-((a*10)/100.0);
    cout<<discounted_bill;}

    else 
    {discounted_bill=a-((a*20)/100.0);
    cout<<discounted_bill;}
    return 0;

}