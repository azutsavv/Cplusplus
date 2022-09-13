#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    public :
void rect()
{
    cout<<"display  of parent .";
}

};
class cube : public rectangle
{   public:
    void rect()
    {
        cout<<"diaplay of parem  ";
    }
};
int main()
{
    rectangle r;
    cube c;
    c.rect();
    r.rect();


}
