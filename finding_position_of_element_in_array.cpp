#include<iostream>
using namespace std;
int main()
{
  int A[10] ,n=10;
  cout<<"enter element of an array consisting of 10 element";

  for ( int i=0; i <n; i++)
  { 
    cin>>A[i];
  }
  
  cout<<"enter value of key ";
  int k;
  cin>>k;

  for (int i = 0; i < n; i++)
  {
    if (A[i]==k)
    {
      cout<<"the position of key in arrary is: "<<i<<endl;
      exit(0);
    }


  }
  
  cout<<"key is not found in array ";
  return 0;

}
//use exit(0) for terminating the programme instantly with out continuing further//