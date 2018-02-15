#include <iostream>
using namespace std;

int main() {
	int n,sum=0,rev;
cout<<"enter n"<<endl;
cin>>n;
while(n!=0)
{
	sum=n%10;
	rev=(rev*10)+sum;
	n=n/10;
}
cout<<"reverse="<<rev<<endl;
if(rev==n)
{
	cout<<"it is palindrome"<<endl;
}
else
{
	cout<<"it is not palindrome"<<endl;
}
	return 0;
}
