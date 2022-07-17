#include<bits/stdc++.h>
using namespace std;

class rectangle
{    
    public:
    int len,bre;
    int area()
    {
        return len*bre;
    }
    int per()
    {
        return 2*(len+bre);
    }
};

int main()
{
  rectangle *r1;
  rectangle r;
  r1=&r;
  
  cout<<"enter len and bre of r1 :";
  cin>>r1->len>>r1->bre;
  cout<<r1->area()<<" "<<r1->per();
  return 0;
}