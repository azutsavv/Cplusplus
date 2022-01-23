// #include <iostream>
// using namespace std;
// int main ()
// {   
//     int a,b,c;
    
//     cout<<"enter three number : a, b, c ";
//     cin>>a>>b>>c;

//     if(a>b&&a>c)
//     {cout<<"a is greatest";}
    
//     if (b>c)
//     {cout<<"b is greatest";}

//     else
//     {cout<<"c is greatest";}
    
//     return 0;

// }
#include <iostream>
using namespace std;
int main ()
{   
    int a,b,c;
    
    cout<<"enter three number : a, b, c ";
    cin>>a>>b>>c;

    if(a>b&&a>c)
    {cout<<"a is greatest";}
    
    else if (b>c)
    {cout<<"b is greatest";}

    else
    {cout<<"c is greatest";}
    
    return 0;

}