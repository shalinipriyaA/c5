#include <iostream>
using namespace std;
int main()
{
	int a,b,lcm;
	cin>>a>>b;
	lcm=(a>b)?a:b;
	while(1)
	{
	if(lcm%a==0 && lcm%b==0)
	{
	cout<<lcm;
	break;
	}
	++lcm;
	}
	return 0;
}
