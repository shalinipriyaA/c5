#include<iostream>
using namespace std;
int main()
{
int num,c=1,i,r=0;
cout<<"Enter the number:"<<endl;
cin>>num;
while(num!=1)
{
num/=2;
r++;
}
for(i=0;i<=r;i++)
{
c*=2;
}
cout<<c;
return 0;
}
