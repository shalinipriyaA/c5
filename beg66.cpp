#include <iostream>
using namespace std;
int main() {
int a,s=0,i;
cout<<"enter n"<<endl;
cin>>a;
for(i=1;i<=a;i++)
{
if(a%i==0)
{
s++;
}
}
if(s==2)
{
cout<<"it is prime no"<<endl;
}
else
{
cout<<"it is not prime no"<<endl;
}
return 0;
}
