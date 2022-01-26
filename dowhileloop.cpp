#include <iostream>
using namespace std;
int main()
{   int n,i=1;
    cout<<"enter value of N: ";
    cin>>n;

    do
    {
      cout<<i<<endl;
      i++;
    } while (i<=n);
    
    return 0;
    
}
// difference between while and do while is that in while loop first condition is checked if true then only be code will
// executed on the other hand in do while loop first code will be executed after that condition will be checked