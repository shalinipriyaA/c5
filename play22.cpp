#include <iostream>
using namespace std;

int main() {
	int a,b,c,i,s;
	cin>>a>>b;
	if(a<b)
	{
		c=a;
	}
	else
	{
	c=b;
	}
	for(i=c;i>=0;i--)
	{
		if((a%c==0)&&(b%c==0))
		{
	             s=c;
		}
		else
		s=a*b;
	}
	cout<<s;
	return 0;
}
