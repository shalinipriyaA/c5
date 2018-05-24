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
	cout<<"no"<<endl;
}
else
{
	cout<<"yes"<<endl;
}
	return 0;
}
