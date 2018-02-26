#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
 int n,p=0,r,q;
 cout<<"Enter the number to be tested: ";
 cin>>n;
 q=n;
 do
 {
      r=q%10;
      p=p+pow(r,2);
      q=q/10;
 }
 while(q%10!=0);
 printf("%d",p);
 return 0;
}
