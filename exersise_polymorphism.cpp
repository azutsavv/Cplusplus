#include<bits/stdc++.h>
using namespace std;
class shape
{   
    public:
    virtual float perimeter()=0;
    
    virtual float  area()=0;
    
};
class rectangle : public shape
{   private:
    float length;
    float breadth;
    public:

    rectangle(float l=1, float b=1)
    {
       length=l;
       breadth=b;
    }
   
    
    float perimeter()
    {
      return 2*(length+breadth);
    }
    float area()
    {
        return length*breadth;
    }
   
};
class circle :public shape
{   private:
    float radius;
    public:
    
    circle(float r)
    {
        radius=r;
    }
    float perimeter()
    {
        return 2*3.14*radius;
    }
    float area()
    {
      return radius*radius*3.14;      
            
    }

};
int main()
{
    shape *s=new rectangle(4,5);
    cout<<"perimeter of rectangle is : "<<s->perimeter() << endl;
    cout<<"area of rectangle is : "<<s->area()<<endl;
    s=new circle(3);
     cout<<"perimeter of circle is : "<<s->perimeter() << endl;
    cout<<"area of circle is : "<<s->area();
    return 0;
}

