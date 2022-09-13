#include<bits/stdc++.h>
using namespace std;
class car
{   
    public:
    virtual void start()
    {
        cout<<"car started ";
    }
    virtual void stop()
    {
        cout<<"car stopped ";

    }
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