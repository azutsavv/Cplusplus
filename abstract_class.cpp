#include<bits/stdc++.h>
using namespace std;
class car
{   
    public:
    virtual void start()=0;  // beacuse there are pure virtual function thats why this is abstract class//
   
    virtual void stop()=0;
    
};
class innova : public car
{
    public :
    void start()
    {
        cout<<"innova started  ";
    }
    void stop()
    {
        cout<<"innova stoped";

    };
};
class swift : public car
{
    public :
    void start()
    {
        cout<<"swift started";
    }
    void stop()
    {
        cout<<"swift stoped";

    };
    
};
int main()
{
    car *c;
    c=new innova;
    c->start();
    cout<<endl;
    c->stop();
    c=new swift;
    c->start();
    cout<<endl;
    c->stop();

    return 0;

}