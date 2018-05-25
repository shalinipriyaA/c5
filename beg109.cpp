#include<iostream>
using namespace std;
int main()
{
   int a[30], n,  min;
   for (n = 0; n < 10; n++)
   cin>>a[n];
   min= a[0];
   for (n = 0; n < 10; n++) 
   {
   if (a[n] < min)
   {
   min = a[n];
   }
   }
  cout<<min;
   return (0);
}
