#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cout<<"enter the sentence";
    getline(cin,a);
    for (int  i = 0; a[i]!='\0'; i++)
    {
        if(a[i] == 'a'||a[i] == 'A'||a[i] == 'a'||a[i] == 'e'||a[i] == 'E'||a[i] == 'i'||a[i] == 'I'||a[i] == 'o'||a[i] == 'O'||a[i] == 'u'||a[i] == 'U') 
       { cout<<"vowel"<<endl;}
       else if(a[i]==' ')
       {cout<<" ";}

        else
        cout<<"consonent"<<endl;
        
    }
    return 0;
    

}