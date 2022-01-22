#include <iostream>
#include <iomanip>
using namespace std;
#include <cmath>
int main()
{
  int a = 1, b = 3, c=2,v,z;
  v=(-b+sqrt(b*b-4*a*c))/(2*a);
   z=(-b-sqrt(b*b-4*a*c))/(2*a);
  cout<< "roots are "<< v<< z;
  return 0;
}