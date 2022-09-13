#include<bits/stdc++.h>
using namespace std;
class first
{   private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend void fn();    // using of friend here , enables us to acess the private and protected member of class
    
};
    void fn()
    {   
        first f;
         f.a=3;
         f.b=4;
         f.c=5;

    }
