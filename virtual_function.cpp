#include<bits/stdc++.h>
using namespace std;
class parent
{ 
    public:
    virtual void run()   // if  i remove virtual statement from the line then the parernt class function is executed.
    {
        cout<<"parent class";

    }

};
class son : public parent
{
    void run()
    {
        cout<<"son class";

    }
};
int main()
{
    son s;
    parent *p=&s;
    p->run();
     return 0;
}