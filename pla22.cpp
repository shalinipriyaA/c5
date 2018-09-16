#include <iostream>
using namespace std;

int main() {
	int a,b,c,i,s;
	cin>>a>>b;
	if(a>b)
	{
		c=a;
	}
	else
	{
	c=b;
	}
	for(i=1;i<=c;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
	             s=i;
		}
	
	}
	cout<<s;
	return 0;
}
