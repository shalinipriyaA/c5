#include <iostream>
using namespace std;
int main()
{
int i,t;
int b[10];
for(i=0;i<10;i++)
{
cin>>b[i];
}
for(i=0;i<10;i++)
{
if(b[i]>b[i+1])
{
t=b[i];
b[i]=b[i+1];
b[i+1]=t;
}
}
cout<<b[i];
return 0;
}
