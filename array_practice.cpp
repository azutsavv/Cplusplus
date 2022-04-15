#include<iostream>
using namespace std;
int main()
{
    float a[]={2.3,3.4,4.5,5.6,6.7};
    for (float  x:a)
    {
        cout<<x<<endl;
    
     }

    return 0;
    
}




//  #include<iostream>
// using namespace std;
// int main()
// {
//     float a[]={2.3,3.4,4.5,5.6,6.7};
//     for (auto  x:a)
//     {
//         cout<<x<<endl;
    
//      }
     
//     return 0;
    
// }
 
//  on line 24 "auto" gives freedom of not choosing type of variable x as it auto detects the type of x , as used in 
//  for each loop