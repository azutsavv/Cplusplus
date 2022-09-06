#include<bits/stdc++.h>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        if(l>=0)
        length=l;
        else
        length=0;
    }
    void setBreadth(int b)
    {
        if(b>=0)
        breadth=b;
        else
        breadth=0;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};
int main()
{
    rectangle r;
    int a,b;
    cin>>a>>b;
    r.setLength(a);
    r.setBreadth(b);
    cout<<r.getBreadth()<<" "<<r.getLength()<<endl;
    cout<<r.area()<<" "<<r.perimeter();
    return 0;



}

