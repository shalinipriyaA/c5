#include <iostream>
using namespace std;

int main() {
	int n,s=0,i;
cout<<"enter n"<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
	if(n%i==0)
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
