#include<iostream>
using namespace std;
int max(int x,int y)
{
    return x>y?x:y;
}
float max(float x,float y)
{
    return x>y?x:y;
}

int main()
{
    
    cout<<max(12,3)<<"  "<<max(1.2,3.4);
    return 0;
}
