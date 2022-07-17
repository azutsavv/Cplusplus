#include<iostream>
using namespace std;
template <class T>
T max_i(T x,T y)
{
    return x>y?x:y;
}

int main()
{
    
    cout<<max_i(12,3)<<"  "<<max_i(1.2,3.4);
    return 0;
}
