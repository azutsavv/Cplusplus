#include<iostream>
using namespace std;

void maxNumber(int x, int y);
int firstNumber();
int secondNumber();
int main()
{
    int f = firstNumber();
    int s = secondNumber();
    maxNumber(f, s);
    return 0;
}

void maxNumber(int x, int y) {
    if (x>y)
        cout<<x;
    else
        cout<<y;
}

int firstNumber() {
    int x;
    cout<<"enter First number : ";
    cin>>x;
    return x;
}
int secondNumber() {
    int y;
    cout<<"enter Second number : ";
    cin>>y;
    return y;
}