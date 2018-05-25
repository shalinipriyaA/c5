#include <iostream>
using namespace std;
int main() 
{
	int a,b,GCD,i;
  cin>>a>>b;
	for(i=1 ;i<=a && i<=b; ++i)
	{
	if(a%i==0 && b%i==0)
	{
	GCD=i;
	}
	}
	cout<<GCD;
	return 0;
}
