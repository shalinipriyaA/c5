#include <iostream>
using namespace std;
int main() {
	int num,rev=0,rem;
	cout<<"enter num:"<<endl;
	cin>>num;
	while(num!=0)
	{
	rem=num%10;
	rev=(rev*10)+rem;
	num=num/10;
	}
	num=rev;
	while(num!=0)
	{
	rem=num%10;
	cout<<"\t"<<rem;
	num=num/10;
	}
	return 0;
}
