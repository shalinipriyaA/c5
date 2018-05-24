#include<iostream>
using namespace std;
int main()
{
int num,x=1,i,c=0;
cout<<"Enter the number:"<<endl;
cin>>num;
while(num!=1)
{
num/=2;
c++;
}
for(i=0;i<=c;i++)
{
x*=2;
}
cout<<x;
return 0;
}
