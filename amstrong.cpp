#include <iostream>
using namespace std;

int main() {
	int n,sum,digit,num;
	cout<<"enter num"<<endl;
	cin>>n;
	num=n;
	while(n!=0)
	{
		digit=n%10;
		sum=sum+(digit*digit*digit);
		n=n/10;
	}
	if(sum==num)
	{
		cout<<"it is amstrong no"<<endl;
	}
	else
	{
		cout<<"itis not amstrong no"<<endl;
	}
	return 0;
}
