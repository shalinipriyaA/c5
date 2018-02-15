#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"enter year:"<<endl;
	cin>>n;
	if((n%4==0)&&(n%100!=0))
	{
		cout<<"it is leap year"<<endl;
	}
	else if(n%100==0)
	{
		cout<<"it is not leap year"<<endl;
	}
	else if(n%400==0)
	{
		cout<<"it is leap year"<<endl;
	}
	else
	{
		cout<<"it is not leap year"<<endl;
	}
	return 0;
}
