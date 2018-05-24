#include <iostream>
using namespace std;

int main() {
	int num,sum=0,rev;
cout<<"enter n"<<endl;
cin>>num;
while(num!=0)
{
	sum=num%10;
	rev=(rev*10)+sum;
	num=num/10;
}
if(rev==num)
{
	cout<<"yes"<<endl;
}
else
{
	cout<<"no"<<endl;
}
	return 0;
}
