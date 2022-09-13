#include<bits/stdc++.h>
using namespace std;
class friend1;      // first declare function here 
class hello
{
  private:
  int a;
  friend friend1;  // use of friend
};
class friend1
{   public:
    hello h;
    
    void fun()
    {
        h.a=2;       // now class can acess the private member of other class;
        cout<<h.a;
    }
};
int main()
{   friend1 f;

    f.fun();
    return 0 ;
}