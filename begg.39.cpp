#include <iostream>
using namespace std;
int main()
{
int i,temp;
int a[10];
for(i=0;i<10;i++)
{
cin>>a[i];
}
for(i=0;i<10;i++)
{
if(a[i]>a[i+1])
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
cout<<a[i];
return 0;
}
