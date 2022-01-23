#include<iostream>
using namespace std;
int main()
{
    int x=12,y=23;
    {
        int c=x+y;
    
    if(c>x)
    { 
        
        cout<<c;
    }
    }
    return 0;
}
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x=12,y=23;
//     
//     if(int c=x+y;c>x)
       //works on version 17 g++ compiler
//     { 
        
//         cout<<c;
//     }
//     
//     return 0;
// }