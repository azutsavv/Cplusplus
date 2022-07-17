#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s=" print every word in this sentence that has an even number of letters ";
    int a=0,b=0;
    
    for(int n=0;b <s.length();n=b)
    {
        
    a=s.find_first_of(' ',n);
    b=s.find_first_of(' ',(a+1));
    
    
    if((b-a-1)%2==0)
    {
     cout<<s.substr(a,(b-a))<<endl;
    }

    }   
    return 0;

}